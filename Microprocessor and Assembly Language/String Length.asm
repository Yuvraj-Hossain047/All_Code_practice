include emu8086.inc 
org 100h 
.data 
res db ? 
rem db ? 
.code 
mov ax, @data 
mov ds, ax 
mov cl, 0 
input: 
mov ah, 01h 
int 21h 
cmp al,13 
je output 
inc cl 
jmp input 
output: 
mov al, cl 
mov bl, 10 
printn 
print "Length of value: "    
mov ah, 00 
div bl    
mov res, al 
mov rem, ah 
mov dl, res 
add dl,48 
mov ah, 02h 
int 21h   
mov dl, rem 
add dl,48 
mov ah, 02h 
int 21h 
ret
