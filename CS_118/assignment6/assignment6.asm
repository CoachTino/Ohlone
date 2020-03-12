global myMemCpy

SECTION .text

myMemCpy:

	mov rax, [rsi]
	mov [rdi], rax

	add rsi, 4
	add rdi, 4
	
	sub rdx, 1
	cmp rdx, 0
	jne myMemCpy
	ret
