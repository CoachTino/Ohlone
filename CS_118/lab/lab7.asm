global absoluteValue

section .text

;prologue

absoluteValue:
												;setup stack frame
	push	rbp						
	mov		rbp,		rsp

	cmp		rdi,		0						;if arg1 is 0 return 0
	je 		rexit

;	xor		rcx,		rcx
;	add		rcx,		rdi

	and		rdi,		0x80000000
	test	rdi,		rdi

	jne		doSomething

	mov 	rax,		rdi
	jmp 	rexit

doSomething:

	NOT 	rdi
	add     rdi, 		1
	mov 	rax, 		rdi


;epilogue

rexit: 
	pop		rbp
	ret




