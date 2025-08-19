include emu8086.inc 
org 100h 
.data 
.code 
mov al, 5 
mov bl, 3 
mov cl, 2 
cmp al, bl 
jl nextA 
jg nextB 
nextA: 
cmp al, cl 
jl A 
jg C 
nextB: 
cmp bl, cl 
jl B 
jg C 
A: 
print "AL is smallest" 
jmp stp 
B: 
print "BL is smallest" 
jmp stp 
C: 
print "CL is smallest" 
jmp stp 
stp: 
ret
