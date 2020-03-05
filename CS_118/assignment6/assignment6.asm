global myMemCpy


SECTION .text


myMemCpy:

	mov rcx, [rdx]
	mov rax, [rsi]
	mov [rdi], rax
	
	sub rcx, 8
	cmp rcx, 0
	jne myMemCpy
;	ret
