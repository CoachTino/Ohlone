global myMemCpy

SECTION .text

myMemCpy:

	mov rax, [rsi]
	mov [rdi], rax
	
	sub rdx, 1
	cmp rdx, 0
	jne myMemCpy