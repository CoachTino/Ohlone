global evens_and_odds

section .text

;prologue

evens_and_odds:

	push 	rbp								;setup stack frame
	mov 	rbp, 		 rsp

	cmp 	rdi, 		 0					;if arg is null exit
	je 		rexit
	cmp 	rsi, 		 0					;if arg is null exit
	je 		rexit
	cmp 	rdx, 		 0					;if arg is null exit
	je 		rexit
	cmp 	rcx, 		 0					;if arg is null exit
	je 		rexit

	mov 	r11, 		 rdx

startLoop:

	mov 	eax, 		 dword [rdi]
	mov 	r12d,		 dword [rdi]
	cdq
	mov 	bx,			 2
	idiv	bx

	and 	eax, 		 1
	test 	eax, 		 eax
	cmp 	rdx, 		 0
	jne 	isOdd

	mov 	r10d, 		 dword [rdi]
	mov 	dword [rsi], r10d
	jmp 	indexCounter

isOdd:
	mov 	dword [r11], r12d
	jmp		indexCounter

indexCounter:
	add 	rdi, 		 4					;move to next index
	add 	rsi, 		 4					;move to next index
	add 	r11, 		 4					;move to next index

	sub 	rcx, 		 1					;counter - 1
	cmp 	rcx, 		 0					;compare rcx to 0
	jne 	startLoop	
	jmp 	rexit
;epilogue

rexit: 
	pop 	rbp
	ret

