LXI D, 02570H
LXI H, 02550H
MVI B, 0AH
M1: MOV A, M
MOV C, A
ANI 20H
CPI 20H
JZ L1
MOV A, C
STAX D
INX D
L1: INX H
DCR B
JNZ M1
HLT