include emu8086.inc 
org 100h 
.data 
arr db 1,2,3,4,5 
.code 
mov ax,@data 
mov ds, ax 
mov ah,01h 
int 21h 
sub al,48 
mov si,0 
mov cx, 5 
search: 
cmp al,arr[si] 
je found 
inc si 
loop search 
printn "-data not found" 
jmp stp 
found: 
printn "-data found" 
stp: 
ret
