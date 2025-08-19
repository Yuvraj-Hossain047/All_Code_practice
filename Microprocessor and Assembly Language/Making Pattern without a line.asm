include emu8086.inc 
org 100h 
.data 
.code 
mov al,1  
for1: 
mov bl,1 
for2: 
print "*" 
inc bl 
cmp bl,al 
jle for2 
printn     
inc al  
cmp al,3 
je skip 
next: 
cmp al,5 
jle for1 
jmp stp 
skip: 
printn 
inc al 
jmp next 
stp: 
ret
