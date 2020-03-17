global add_array_asm

section .text

;prologue

rev_array_asm:
	push rbp
	mov rbp, rsp
	push rcx

	xor rax, rax 
	mov rcx, rsi
	sub rcx, 1

	cmp rdi, 0
	je rexit

	cmp rsi, 0
	je rexit

myloop:
	mov rax, [rdi]
	mov [rsi], rax
	add rdi, 4
	sub rcx, 1
	cmp rcx, 0
	jge myloop




rexit: ;epilogue
	pop rcx
	pop rbp
	ret