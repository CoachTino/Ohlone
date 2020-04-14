global standardDeviation

section .text

;prologue
standardDeviation:


											;setup stack frame
	push	rbp						
	mov		rbp,		rsp

											;check if args are null
	cmp		rdi,		0					;if arg1 is null exit
	je 		rexit	
	cmp		rsi,		0					;if arg2 is null exit
	je 		rexit
	cmp		rdx,		0					;if arg3 is null exit
	je 		rexit

											;initialize rax to zero
	xor 	rax,	 	rax	
											;add count of indexes to r10
	mov 	r10,		rdx
											;add count of indexes to r10
	mov 	r11,		rdx
											;add count of indexes to r10
	mov 	r12,		rdx
											;add count of indexes to r10
	mov 	r13,		rdx
											;add count of indexes to r10
	mov 	r14,		rdx
											;add count of indexes to r10
	mov 	r15,		rdx

sumLoop:
	
	add		eax,		dword [rdi]
	add 	rdi, 		4					;move to next index

	sub 	rdx, 		1					;counter - 1
	cmp 	rdx,		0					;compare rdx to 0
	jne 	sumLoop	

divide:
	
	cdq
	idiv 	r10

	jmp 	fillTempLoop

fillTempLoop:
	
	mov 	dword [rsi], eax

	add     rsi, 		4
	sub 	r14, 		1					;counter - 1
	cmp 	r14,		0					;compare rdx to 0
	jne 	fillTempLoop	

	jmp 	resetLoopCounter

resetLoopCounter:
											;reset the loop counter
	imul 	r8, 		 4
	sub 	rdi, 		 r8
	sub 	rsi, 		 r8

	jmp 	subtractStuff

subtractStuff;
											;move index 1 of source array to ax register
	mov		eax,		 dword [rdi]	
											;sourceArray[0] minus average of source array
	sub 	eax, 		 dword [rsi]
											;store value inside of temp array
	mov  	dword [rsi], eax
	
	add 	rdi, 		4
	add 	rsi,  		4
	sub 	r10, 		1					;counter - 1
	cmp 	r10,		0					;compare rdx to 0
	jne 	subtractStuff	

	jmp 	resetAgain

resetAgain:
	
	imul 	r15, 		4
	sub 	rdi, 		r15
	sub 	rsi, 		r15

	jmp 	squareIndexes

squareIndexes:
	
	mov 	eax, 		 dword [rsi]
	imul    rax
	mov 	dword [rsi], eax

	add 	rsi,  		4
	sub 	r11, 		1					;counter - 1
	cmp 	r11,		0					;compare rdx to 0
	jne 	squareIndexes

	jmp  	resetAnotherTime

resetAnotherTime:
	
	sub rsi, 40
	mov rax, 0

newSum:
	
	add 	eax, 		dword [rsi]
	add 	rsi, 		4

	sub 	r12, 		1					;counter - 1
	cmp 	r12,		0					;compare rdx to 0
	jne 	newSum

	jmp 	divideAgain

divideAgain:

	mov 	ebx, 		0
	cdq
	idiv 	r13

	jmp 	rexit

;epilogue

rexit: 
	pop		rbp
	ret

