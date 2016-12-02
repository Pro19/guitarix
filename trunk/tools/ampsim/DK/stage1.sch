v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 42800 45700 1 180 0 resistor-2.sym
{
T 42400 45350 5 10 0 0 180 0 1
device=RESISTOR
T 42316 45434 5 10 1 1 180 0 1
refdes=R2
T 42400 45300 5 10 1 1 0 0 1
value=100k
}
C 43700 44700 1 270 0 resistor-2.sym
{
T 44050 44300 5 10 0 0 270 0 1
device=RESISTOR
T 44000 44400 5 10 1 1 0 0 1
refdes=R3
T 44000 44200 5 10 1 1 0 0 1
value=820
}
C 43500 48200 1 270 0 resistor-2.sym
{
T 43850 47800 5 10 0 0 270 0 1
device=RESISTOR
T 43800 47800 5 10 1 1 0 0 1
refdes=R4
T 43800 47600 5 10 1 1 0 0 1
value=100k
}
C 45900 46700 1 0 0 capacitor-1.sym
{
T 46100 47400 5 10 0 0 0 0 1
device=CAPACITOR
T 46200 47200 5 10 1 1 0 0 1
refdes=C3
T 46100 47600 5 10 0 0 0 0 1
symversion=0.1
T 46200 46500 5 10 1 1 0 0 1
value=100n
}
C 41800 44000 1 0 0 gnd-1.sym
C 50200 44700 1 0 0 gnd-1.sym
C 41200 43600 1 0 0 triode.sym
{
T 44000 46400 5 10 1 1 0 0 1
refdes=U1
T 43900 46100 5 10 1 1 0 0 1
value=12ax7
T 43600 45700 5 10 0 1 0 0 1
device=TRIODE
}
C 41100 45500 1 0 0 input-1.sym
{
T 41100 45800 5 10 0 0 0 0 1
device=INPUT
T 41227 45534 5 10 1 1 0 0 1
refdes=Vin
}
C 43700 43100 1 0 0 gnd-1.sym
C 45000 46700 1 0 0 ccurrent.sym
{
T 45200 47200 5 10 1 1 0 0 1
refdes=CC1
T 45400 47000 5 10 0 1 0 0 1
device=CONNECTION_CURRENT
}
N 45000 46900 43600 46900 4
{
T 44700 47000 5 10 1 1 0 0 1
netname=4
}
C 43400 48400 1 0 0 generic-power-1.sym
{
T 43600 48600 5 10 0 1 0 0 1
device=POWER
T 43932 48649 5 10 1 1 0 0 1
value=150V
T 43409 48652 5 10 1 1 0 0 1
refdes=Vcc1
}
C 50800 45900 1 0 0 output-1.sym
{
T 50900 46200 5 10 0 0 0 0 1
device=OUTPUT
T 51089 45937 5 10 1 1 0 0 1
refdes=Vout
}
N 43800 43400 43800 43800 4
N 43800 44700 43800 44900 4
N 43600 48400 43600 48200 4
{
T 43400 48300 5 10 1 1 0 0 1
netname=5
}
N 43600 46400 43600 47300 4
N 45900 46900 45800 46900 4
{
T 45800 47000 5 10 1 1 0 0 1
netname=6
}
N 46800 46900 50300 46900 4
N 50300 46900 50300 46400 4
C 42000 44400 1 90 0 resistor-1.sym
{
T 41600 44700 5 10 0 0 90 0 1
device=RESISTOR
T 41700 44600 5 10 1 1 90 0 1
refdes=R5
T 42000 44400 5 10 1 1 0 0 1
value=1M
}
C 50200 45500 1 270 1 resistor-variable-1.sym
{
T 51100 46300 5 10 0 0 90 2 1
device=VARIABLE_RESISTOR
T 50600 46100 5 10 1 1 90 2 1
refdes=VR1
T 50200 45500 5 10 1 1 0 0 1
value=value=1M,var=Drive,a=1
}
N 50300 45000 50300 45500 4
N 41900 45600 41900 45300 4
N 41900 44400 41900 44300 4
C 45300 44700 1 90 1 capacitor-2.sym
{
T 44600 44500 5 10 0 0 90 6 1
device=POLARIZED_CAPACITOR
T 44800 44500 5 10 1 1 90 6 1
refdes=C4
T 44400 44500 5 10 0 0 90 6 1
symversion=0.1
T 45300 44700 5 10 1 1 0 0 1
value=22u
}
N 43800 44700 45100 44700 4
C 44900 43400 1 0 0 gnd-1.sym
C 46400 46000 1 0 0 resistor-2.sym
{
T 46800 46350 5 10 0 0 0 0 1
device=RESISTOR
T 46600 46300 5 10 1 1 0 0 1
refdes=R6
T 46700 45600 5 10 1 1 0 0 1
value=1M
}
N 47300 46900 47300 46100 4
N 46400 46100 42700 46100 4
N 42700 46100 42700 45600 4
N 45100 43800 45000 43700 4
