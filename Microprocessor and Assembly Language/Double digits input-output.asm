include emu8086.inc 
org 100h 
.data 
f db ? 
s db ? 
.code 
mov ax,@data 
mov ds,ax 
mov ah,00 
mov bl,10 
mov ah,01h 
int 21h 
sub al,48 
mul bl 
mov cl,al 
mov ah,01h 
int 21h 
sub al,48 
add al,cl 
mov ah,00 
div bl 
mov f,al 
mov s,ah 
printn 
mov dl,f 
add dl,48 
mov ah,02h 
int 21h 
mov dl,s 
add dl,48 
mov ah,02h 
int 21h 
ret
