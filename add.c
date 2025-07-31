;add 2 number
.model small
.stack 100h
.code
main proc

     mov ah,1
     int 21h
     ;sub al, 48
     mov bl,al

     mov ah,1
     int 21h
     mov bh,al

     add bl,bh     //; bl = bl + bh minus = (sub)
     sub bl,48     //; convert to integer  add er smy sub

     mov ah,2
     mov dl,bl
     int 21h

    //; Exit
    mov ah, 4Ch
    int 21h
main endp
end main
