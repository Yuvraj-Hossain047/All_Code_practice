include emu8086.inc 
org 100h 
.data 
id1 db "cse123$" 
id2 db "cse123$"  
pass1 db "123$" 
pass2 db "123$" 
.code 
mov ax, @data 
mov ds, ax 
lea si,id1 
lea di,id2 
mov cx,6 
repe cmpsb 
jne not_same   
lea si,pass1 
lea di,pass2 
mov cx,3 
repe cmpsb  
jne not_same 
print "Login success" 
jmp stp  
not_same:   
print "Login failed" 
jmp stp 
stp: 
ret
