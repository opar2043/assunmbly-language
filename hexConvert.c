//; hexa to decimal

.model small
.stack 100h
.data
a db 10,13, 'input hex digit $'
b db 10,13, 'in decimal $'

.code
main proc
   mov ax, @data
   mov ds , ax

   mov ah,9      //;print a
   lea dx,a
   int 21h

   mov ah,1      //; user input
   int 21h
   mov bl,al
   sub bl,17d  //; C = 67 - 17 = 2   d=for decimal

   mov ah,9  //;print b
   lea dx,b
   int 21h

   mov dl,49d   //; print 1 for frist digit
   mov ah,2
   int 21h

   mov dl,bl
   mov ah,2
   int 21h

   exit:
   mov ah, 4ch
   int 21h
   main endp
end main

