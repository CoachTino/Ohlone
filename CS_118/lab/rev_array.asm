global rev_array

section .text


rev_array:
	push rbp
	mov rbp, rsp	

	sub rdx, 1
	imul rdx, 4
	add rsi, rdx

	cmp rdi, 0
	je rexit
	cmp rsi, 0
	je rexit
	cmp rdx	, 0
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