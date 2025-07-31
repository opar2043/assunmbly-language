;reverse string length
.model small
.stack 100h
.data
str     db 'rijoan rashid opar $'
user1   db 'rijoa$'
user2   db 'rijoan$'
pass1   db '123$'
pass2   db '123$'
success db 'Login Success$'
failed  db 'Login Failed$'

.code
main proc
     mov ax , @data
     mov ds, ax

     lea si,user1
     lea di,user2
     mov cx, 6     // ;length 6 obdi check korbe
     repe cmpsb    // ;compare korbe
     jne not_same

     lea si,pass1
     lea di,pass2
     mov cx, 3
     repe cmpsb
     jne not_same   //;jodi na mile not_same loop a jabe

    // ;Ans true hoile
     lea dx, success
     mov ah, 09h
     int 21h
     jmp exit

not_same:
     lea dx, failed
     mov ah, 09h
     int 21h

exit:
     mov ah, 4Ch
     int 21h
main endp
end main

