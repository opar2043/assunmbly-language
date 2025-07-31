;find string length
.model small
.stack 100h
.data
str db 10,13, 'rijoan rashid opar $'

.code
main proc
   mov ax , @data
   mov ds, ax
   lea si, str   ; si holo index
   mov cx, 0     ; count from 0

   str_loop:
   mov al,[si]
   cmp al, '$'   ; last value obdi check korbe
   je done       ; last index asle done loop e jabe(exit)
   inc cx        ; increment krbe
   inc si
   jmp str_loop  ; inc korar por abar loop e jabe

   done:
   add cl,30h
   mov ah,2
   mov dl,cl
   int 21h       ;print length




    ; Exit
    exit:
    mov ah, 4Ch
    int 21h
main endp
end main
