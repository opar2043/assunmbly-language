
;even or odd number
.model small
.stack 100h
.data
 msg1 db 'enter a number $'
 a db 'even $'
 b db 'odd $'

.code
main proc
     mov ax,@data

     mov ds,ax
     lea dx,msg1
     mov ah,9
     int 21h

     mov ah,1
     int 21h

     mov dl,2
     div dl      //;dvision korbe
     cmp ah, 0   //;o er sathe compare korbe
     je even
     lea dx,b
     mov ah,9
     int 21h

         mov ah, 4Ch
         int 21h

     Even:
     lea dx,b
     mov ah,9
     int 21h
         mov ah, 4Ch
         int 21h

    ; Exit
    mov ah, 4Ch
    int 21h
main endp
end main
