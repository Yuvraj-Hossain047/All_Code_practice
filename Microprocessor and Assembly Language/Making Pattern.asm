include emu8086.inc 
org 100h 
.data 
.code 
mov al,1 
loop1: 
mov bl,1 
loop2: 
print "*" 
inc bl 
cmp bl,al 
jle loop2  
printn 
inc al 
cmp al,5 
jle loop1 
ret
