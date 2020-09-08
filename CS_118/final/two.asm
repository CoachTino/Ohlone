global two

section .text

;prologue
two:

	push rbp				;setup stack frame
	mov rbp, rsp

	
mov dx, 0x8080
or dx, 0x0101
shl dx, 1

mov ax, dx

;epilogue
rexit: 
	pop rbp
	ret