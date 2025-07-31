//;for loop matrix print
.model small
.stack 100h
.data
a db 10,13, '====== $'

.code
main proc
   mov ax , @data
   mov ds, ax
     mov cx,5    //;array size or loop size
     mov ah,9
     lea dx, a

     top:
     int 21h

     loop top:   //; loop obdi cholbe

   // ; Exit
    exit:
    mov ah, 4Ch
    int 21h
main endp
end main

