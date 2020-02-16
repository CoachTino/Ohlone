; ************************************************************
;	simple program to multiply two numbers
;	Valentino Lei'a
;	February 12, 2020
; ************************************************************
;	Some basic data declarations

section .data

; -----
; 	Define constants

EXIT_SUCCESS equ 0 ; successful operation
SYS_exit equ 60 ; call code for terminate


; -----
;	Byte (8-bit) variable declarations

bVar1 				db 8
bVar2 				db 2
wResult 			dw 0


; ************************************************************
;	Code Section

section .text
global _start
_start:

;	Performs a series of very basic addition operations
;	to demonstrate basic program format.

;	----------
;	Byte example
;	bResult = bVar1 * bVar2
 mov al, byte [bVar1]
 mul byte [bVar2]
 mov word [wResult], ax


; ************************************************************
; Done, terminate program.

last:
	 mov rax, SYS_exit ; Call code for exit
	 mov rdi, EXIT_SUCCESS ; Exit program with success
	 syscall