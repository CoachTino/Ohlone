global sumFloat

section .text

;prologue

sumFloat:
												;setup stack frame
	push	rbp						
	mov		rbp,		 rsp

	cmp		rdi,		 0						
	je 		rexit

	cmp		rsi,		 0						
	je 		rexit

addLoop:

	movss 	xmm1, 		 dword [rdi]	

	addss  	xmm0, 		 xmm1


	add 	rdi, 		 4
	sub 	rsi, 		 1				
	cmp 	rsi, 		 1				

	jne 	addLoop				

;epilogue

rexit: 
	pop		rbp
	ret



