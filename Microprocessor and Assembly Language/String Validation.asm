include emu8086.inc 
org 100h 
.data 
id1 db "cse123$" 
id2 db "cse123$" 
.code 
mov ax,@data 
mov ds,ax 
lea si,id1     
lea di,id2 
mov cx,6 
comp1: 
mov al,[si] 
mov bl,[di] 
cmp al,bl 
jne not_same 
inc si 
inc di 
loop comp1 
print "Strings are same" 
jmp stp 
not_same: 
print "Strings are not same" 
jmp stp 
stp: 
ret
