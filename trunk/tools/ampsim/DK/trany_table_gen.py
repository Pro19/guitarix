# -*- coding: utf-8 -*-
from __future__ import division

import math
import pylab as pl
import sys
import numpy as np
from models import *
import dk_simulator, dk_lib

class gen(object):
    FS = 96000
    max_error = 1e-7
    result_count = 10
    timespan = 0.01
    solver = None  ## use default

    def get_samples(self, data):
        return data[np.array(np.linspace(0, len(data)-1, self.result_count).round(), dtype=int)]

    def op_signal(self, op=None, samples=None, timespan=None):
        if timespan is None:
            timespan = self.timespan
        if op is None:
            op = self.V["OP"]
        if samples is None:
            samples = timespan*self.FS
        return np.array((op,),dtype=np.float64).repeat(samples, axis=0)

    def constant_signal(self, *values):
        a = np.zeros((int(self.timespan*self.FS), len(values)))
        for i, v in enumerate(values):
            a[:,i] = v
        return a

    def timeline(self):
        return np.linspace(0, self.timespan, self.timespan*self.FS)

    def finish_plot(self, args, loc=None, timeline=None):
        pl.grid()
        pl.legend(args, loc=loc)
        pl.show()

# transformation matrix 
mag_dict = {
    "M": "e6",
    "k": "e3",
    "m": "e-3",
    "u": "e-6",
    "n": "e-9",
    "p": "e-12",
    "f": "e-15",
    "" : "",
    }

# add new models here
Transistors = {
    "2N5088" : dict(Vt=26e-3,Is=20.3e-15,Bf=1430,Br=4),
    "2N3904" : dict(Vt=26e-3,Is=1e-14,Bf=300,Br=4),
    "2N4401" : dict(Vt=26e-3,Is=9.09e-15,Bf=300,Br=4),
    "BD139"  : dict(Vt=26e-3,Is=2.3985e-13,Bf=244.9,Br=78.11),
    "BC108"  : dict(Vt=26e-3,Is=1.8e-14,Bf=400,Br=35.5),
    "MPSA18" : dict(Vt=26e-3,Is=20.3e-15,Bf=1430,Br=4),
    }

class Transistor_table(gen):
    # set max_sig and max_op to fetch the sweep point (saturated)
    max_sig = 1.7 # max test signal
    max_op = 3.4  # operation range 
    operator = max_op / max_sig # set table istep

    S = ''
    V = ''
    model = ''
    def set_model(self,model):
        self.model = model
        self.S = ((R(1), "Vcc", "Vc"),
             (R(2), "Ve", GND),
             (R(3), "Vi", "Vb"),
             (T(1), "Vc", "Vb", "Ve"),
             (IN, "Vi", "Vcc"),
             (OUT, "Vi", "Vb", "Vc"),
             )

        self.V = {R(1): 22e3,
             R(2): 3900,
             R(3): 1e6,
             T(1): Transistors[self.model],
             "OP": [1, 10],
             "v0": [1, 1],
             }
      #  if self.model == "MPSA18":
      #      self.max_sig = 1.2 # max test signal
      #      self.max_op = 2.4  # operation range 
      #      self.operator = self.max_op / self.max_sig


    table_define = """
struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};
"""

    table_use = """
double always_inline tranyclip(double x) {
    double f = fabs(x);
    f = f * trany_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = trany_table.data[0];
    } else if (i >= trany_table.size-1) {
        f = trany_table.data[trany_table.size-1];
    } else {
	f -= i;
	f = trany_table.data[i]*(1-f) + trany_table.data[i+1]*f;
    }
    return copysign(f, x);
}
"""

    def signal(self):
        self.sig = np.linspace(0,self.max_sig,100)
        a = self.op_signal([0,self.max_op], len(self.sig))
        a[:,0] += self.sig
        return a

    def generate_table(self, p):
        n = 'dkbuild/%s_table.h' % self.model
        sys.stdout = open(n, 'w')
        y = p(self.signal())
        c = 0;
        s = ""
        z = 0
        sys.stdout.write("\n")
        sys.stdout.write("// %s table generated by DK/trany_table_gen.py -- do not modify manually\n" % self.model)
        sys.stdout.write(self.table_define)
        sys.stdout.write("\n")
        sys.stdout.write("static table1d_imp<%d> trany_table __rt_data = {\n" % len(self.sig))
        for i in range(len(y[0])):
            c += 1
            if c == 2:
                sys.stdout.write('\t%g,%g,%g,%d, {' % (y[0][i]/self.max_sig, y[len(self.sig)-1][i]/self.max_sig, (len(self.sig)-1)*((y[len(self.sig)-1][i]/self.operator)-y[0][i]), len(self.sig)))
                #sys.stdout.write("\t{")
                for item in y:
                    if z % 5 == 0:
                        sys.stdout.write(s+"\n\t" )
                        s = ""
                        z = 0
                    sys.stdout.write(s+"%s" % ("{:.12f}".format(item[i]/self.max_sig)))
                    s = ","
                    z +=1
                sys.stdout.write("\n\t}\n};")
        sys.stdout.write("\n")
        sys.stdout.write(self.table_use)
        sys.stdout.write("\n")
        sys.stdout = sys.__stdout__

    def plot(self, p):
        y = p(self.signal())
        pl.plot(self.sig, y)
        self.finish_plot(p.out_labels, timeline=self.sig)

    def __init__(self, name):
        self.set_model(name)

def main(argv):
    if len(sys.argv) < 2:
        arg = "2N5088" # set default transistor model, when none is given
    else:
        arg = str(sys.argv[1])
    argoky = 0
    if arg in Transistors.keys():
        argoky = 1
    if not argoky:
        print (' please give on of the Transistor model name')
        print (Transistors.keys())
        exit()
        
    t = "Transistor_table"
    v = Transistor_table(arg)
    parser = dk_simulator.Parser(v.S, v.V, v.FS)
    p = dk_simulator.get_executor(
        t, parser, v.solver, '-p', c_tempdir='/tmp', c_verbose='--c-verbose',
        c_debug_load='', linearize='', c_real=("double"))
    v.generate_table(p)
    v.plot(p)

if __name__ == "__main__":
    main(sys.argv[1:])
