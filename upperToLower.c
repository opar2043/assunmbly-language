// convert lower to upper case
.model small
.stack 100h
.data
a db 'lower case $'
b db 'upper case $'
.code
main proc
   mov ax, @data
   mov ds , ax

   //;print a
   mov ah,9
   lea dx,a
   int 21h

   //;Input 1st user
   mov ah,1
   int 21h
   mov bl,al

   ;linput 2nd
   mov ah,1
   int 21h
   mov bh,al

   ; lower to upper
   mov ah, 2
   sub bl,32     //;bl = bl - 32 (lower to upper)
   mov dl,bl
   int 21h

   //Upper to lower
   mov ah, 2
   add bh, 32
   mov dl,bh
   int 21h        //bh = bh + 32 (upper to lower)

   exit:
   mov ah, 4ch
   int 21h
   main endp
end main
