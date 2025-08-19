include emu8086.inc 
org 100h 
.data 
.code 
mov ah,01h 
int 21h 
sub al,48 
mov ah,0 
mov bl,2 
div bl 
cmp ah,0 
je L1 
jne L2 
L1: 
print "Even" 
jmp stp 
L2: 
print "Odd" 
jmp stp 
stp: 
ret
