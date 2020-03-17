global rev_array

section .text


rev_array:
	push rbp
	mov rbp, rsp	

	add rsi, 16

	cmp rdi, 0
	je rexit
	cmp rsi, 0
	je rexit
	cmp rcx, 0
	je rexit

daloop:
	mov eax, dword [rdi] 
	mov dword [rsi], eax

	add rdi, 4
	sub rsi, 4

	sub rdx, 1
	cmp rdx, 0
	jne daloop

rexit
	pop rbp
	ret