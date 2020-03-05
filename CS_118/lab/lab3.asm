extern printf					; the C function to be called
global myprint				; the standard gcc entry point

SECTION .text
	
myprint:

	push	rbp					; set up stack frame
	call 	printf				; call C function
	pop		rbp					; restore stack

	mov		rax, 0				; normal, no error, return value
	ret 						; return



