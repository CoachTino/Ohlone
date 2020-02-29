section .text
	global _start 				;must be declared for linker (ld)

_start:							; tells linker entry point

	mov rdx, 1					;message length
	mov rsi, char 				;message to write
	mov rdi, 0					;file descriptor (stdout)
	mov rax, 0					;system call number (sys_write)
	syscall						; call kernel

	mov rdx, 1
	mov rsi, char
	mov rdi, 1
	mov rax, 1
	syscall

	mov rax, 60					;system call number(sys_exit)
	syscall						;call kernel

section .data
char db 0						;define a byte to capture input
msg db 'Hello, world!', 0xa 	;string to be printed
len equ $ - msg 				;length of the string
