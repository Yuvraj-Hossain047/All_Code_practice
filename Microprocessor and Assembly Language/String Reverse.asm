include emu8086.inc 
org 100h 
.data 
str1 db "Sonargaon University$" 
.code 
mov ax, @data 
mov ds, ax 
lea si, str1 
mov si, 19 
string: 
mov dl, str1[si]  
mov ah, 02h  
int 21h 
dec si 
cmp si,0 
jge string 
ret
