//; One by one line from user

.model small
.stack 100h
.data
a db  'input three element $'
b db 10,13, '$'

.code
main proc
   mov ax, @data
   mov ds , ax
   //;print string
   mov ah,9
   lea dx,a
   int 21h

   mov ah,9
   lea dx,b
   int 21h

  // ;user taken
   mov ah,1
   int 21h
   mov bl,al

   mov ah,1
   int 21h
   mov bh,al

   mov ah,1
   int 21h
   mov cl,al

   //;display input from user

   mov ah,2
   mov dl, bl  //;1st
   int 21h

   mov ah,9
   lea dx,b   //;space
   int 21h

   mov ah,2
   mov dl, bh  //;2nd
   int 21h

   mov ah,9
   lea dx,b
   int 21h

   mov ah,2
   mov dl, cl  //;3rd
   int 21h

   mov ah,9
   lea dx,b
   int 21h

   exit:
   mov ah, 4ch
   int 21h
   main endp
end main
