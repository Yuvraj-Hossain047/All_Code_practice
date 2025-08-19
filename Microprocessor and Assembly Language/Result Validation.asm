include emu8086.inc 
org 100h 
.data 
.code 
mov al, 70 
mov bl, 40 
cmp al, 100 
jge invalid 
cmp al, 0 
jl invalid             
cmp al, bl 
jl fail 
pass: 
print "pass" 
jmp stp 
fail: 
print "fail" 
jmp stp 
invalid: 
print "Invalid" 
jmp stp 
stp: 
ret
