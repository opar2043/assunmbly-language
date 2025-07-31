//;reverse string length
.model small
.stack 100h
.data
str db 10,13, 'rijoan rashid opar $'

.code
main proc
     mov ax , @data
     mov ds, ax
     lea si, str    //; si holo index
     mov si, 18     //; count from 0

     show:
     mov dl,str[si]
     mov ah,02h
     int 21h

     dec si
     cmp si,0
     jge show


   // ; Exit
    exit:
    mov ah, 4Ch
    int 21h
main endp
end main

