global add_array_asm

section .text

;prologue
add_array_asm:

	push rbp				;setup stack frame
	mov rbp, rsp

	xor rax, rax			;initialize rax to zero

	cmp rdi, 0				;if arg is null exit
	je rexit
	
	cmp rsi, 0				;if arg is null exit
	je rexit

myloop:
	add eax, dword [rdi]	;add index to eax

	add rdi, 4				;move one index in array

	sub rsi, 1				;subtract 1 from counter
	cmp rsi, 0				;compare counter to 0

	jge myloop				;loop condition

;epilogue
rexit: 
	pop rbp
	ret