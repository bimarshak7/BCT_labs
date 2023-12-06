
;<Program title>

jmp start

;data


;code
start: nop
LXI H,4200
MOV B,M
LOOP: INX H
CMP M
JNC AHEAD
MOV A,M
AHEAD: DCR B
JNZ LOOP
STA 4300

hlt