include emu8086.inc 
org 100h 
.data 
arr db 1,2,3,4,5 
.code 
mov ax, @data 
mov ds,ax 
mov si, 4 
mov cx, 5 
loop1: 
mov al,arr[si] 
add al,48 
mov dl,al 
mov ah,02h 
int 21h 
dec si 
loop loop1 
ret
