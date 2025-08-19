include emu8086.inc 
org 100h 
.data 
.code 
mov cx,1 
loop1: 
printn "SU" 
loop loop1 
mov ax,2 
loop2: 
printn "SS" 
dec ax 
cmp ax,1 
jge loop2 
ret
