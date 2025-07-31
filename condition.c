//;conditional state ment
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

     cmp bl,bh  //; bl > bh
     jge l1     //;jump greater equal = jge
     jmp l2     //;jmp kono loop e jete use hy

     l1:
     mov ah,2
     mov dl,bl //; true hole bl print korbe
     int 21h
     jmp exit  //; exit korbe

     l2:
     mov ah,2
     mov dl,bh //; true hole bh print korbe
     int 21h
     jmp exit  //; exit korbe




    //; Exit
    exit:
    mov ah, 4Ch
    int 21h
main endp
end main

