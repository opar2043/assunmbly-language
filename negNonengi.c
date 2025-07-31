//;conditional state ment
.model small
.stack 100h
.data
a db 'non negitive $'
b db 'negitive $'
.code
main proc
    mov ax , @data
    mov ds, ax



     mov ah,1
     int 21h
     ;sub al, 48
     mov bl,al


     cmp bl,0  //; bl > 0
     jge l1     //;jump greater equal = jge
     jmp l2    // ;jmp kono loop e jete use hy

     l1:
     mov ah,9
     lea dx, a
     int 21h
     jmp exit  //; exit korbe

     l2:
     mov ah,9
     mov dl,b //; true hole b print korbe
     int 21h
     jmp exit  //; exit korbe




    //; Exit
    exit:
    mov ah, 4Ch
    int 21h
main endp
end main


