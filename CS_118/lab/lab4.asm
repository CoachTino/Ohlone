global foo


SECTION .text

foo:
	
	add		rdi, rsi
	add		rdi, rdx
	imul	rdi, rcx
	mov		rax, rdi
	
	ret
