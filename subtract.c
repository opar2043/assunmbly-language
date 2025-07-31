//;subtract 2 number
.model small
.stack 100h
.code
main proc

     mov ah,1
     int 21h
     mov bl,al

     mov ah,1
     int 21h
     mov bh,al


     sub bl,bh     //; bl = bl - bh minus = (sub)
     add bl,48     //; convert to integer

     mov ah,2
     mov dl,bl
     int 21h



    //; Exit
    mov ah, 4Ch
    int 21h
main endp
end main

