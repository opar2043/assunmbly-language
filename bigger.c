//; convert lower to upper case

.model small
.stack 100h
.data
a db 'input two numbers $'
b db 10,13, 'Largest numbers $'  //; 10,13 new line

.code
main proc
   mov ax, @data
   mov ds , ax
   //;print string
   mov ah,9
   lea dx,a
   int 21h

   //;taken input from user
   mov ah,1              //;fnc 1 for taken input
   int 21h
   mov bl,al
   int 21h
   mov bh,al

   //bigger:
   cmp bl,bh             //;compare bl>bh print bl otherwise bh
   jg level1
   jmp level2

   //;jump level2
   level2:
   mov ah, 9
   lea dx,b
   int 21h

   //;print bh register
   mov ah,2
   mov dl,bh
   int 21h
   jmp exit        //;exit programe

   //;jump level1
   level1:
   mov ah, 9
   lea dx,b
   int 21h

   ;//print bl register   (condition true)
   mov ah,2
   mov dl,bl
   int 21h
   jmp exit       // ;exit programe

   exit:
   mov ah, 4ch
   int 21h
   main endp
end main
