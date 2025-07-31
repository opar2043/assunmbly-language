;divison
.model small
.stack 100h

.data
a db ?
b db ?

.code
main proc
    mov ax, @data
    mov ds, ax

    //;  first number
    mov ah, 1
    int 21h
    sub al, 48
    mov a, al

   // ; second number
    mov ah, 1
    int 21h
    sub al, 48
    mov b, al

    //; Division: a / b
    mov al, a
    mov ah, 0
    mov bl, b
    div bl       //; AL / BL ? Quotient in AL


    add al, 48
    mov dl, al
    mov ah, 2
    int 21h

    ; Exit
    mov ah, 4Ch
    int 21h
main endp
end main
