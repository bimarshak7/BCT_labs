LXI H,1120H
MOV C,M
DCR C
START: MOV D,C
LXI H,1121H
LOOP: MOV A,M
INX H
CMP M
JC SKIP
MOV B,M
MOV M,A
DCX H
MOV M,B
INX H
SKIP: DCR D
JNZ LOOP
DCR C
JNZ START
HLT