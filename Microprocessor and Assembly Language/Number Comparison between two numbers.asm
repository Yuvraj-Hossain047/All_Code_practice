include emu8086.inc 
org 100h 
.data 
.code 
mov al,70 
mov bl,40 
cmp al,bl 
je L1 
jg L2 
jl L3 
L1: 
print "al and bl are equal" 
jmp stp 
L2: 
print "al is greater than bl" 
jmp stp 
L3: 
print "bl is greater than al" 
jmp stp 
stp: 
ret
