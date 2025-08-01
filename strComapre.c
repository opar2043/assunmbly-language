;string same or not
.model small
.stack 100h
.data

user1   db 'rijoan $'
user2   db 'rijoan $'
same db 'string same $'
diff db 'note same $'

.code
main proc
     mov ax , @data
     mov ds, ax

     lea si,user1
     lea di,user2

     mov cx,8
     repe cmpsb   // ; repeat equal || compare string byte (cmpsb)
     jne not_same

     lea dx,same
     mov ah,09h
     int 21h
     jmp exit

     not_same:
     lea dx,diff
     mov ah,09h
     int 21h
     jmp exit

    exit:
    mov ah, 4Ch
    int 21h
main endp
end main

