include emu8086.inc 
org 100h 
.data 
.code 
mov ah,01h 
int 21h 
cmp al, 'A' 
je vowel 
cmp al, 'E' 
je vowel 
cmp al, 'I' 
je vowel 
cmp al, 'O' 
je vowel 
cmp al, 'U' 
je vowel 
cmp al, 'a' 
je vowel 
cmp al, 'e' 
je vowel 
cmp al, 'i' 
je vowel 
cmp al, 'o' 
je vowel 
cmp al, 'u' 
je vowel 
consonant: 
print "-Consonant" 
jmp stp 
vowel: 
print "-VOWEL" 
jmp stp 
stp: 
ret
