global square_array

section .text

;prologue
square_array:

	push rbp				;setup stack frame
	mov rbp, rsp

	xor rax, rax			;initialize rax to zero
	xor rbx, rbx			;initialize rbx to zero

	cmp rdi, 0				;if arg is null exit
	je rexit
	
	cmp rsi, 0				;if arg is null exit
	je rexit

myloop:
	mov ebx, dword [rdi]	;move index to ebx
   imul ebx, ebx			;square ebx

    add eax, ebx			;add squared index to eax

	add rdi, 4				;move one index in array

	sub rsi, 1				;subtract 1 from counter
	cmp rsi, 0				;compare counter to 0

	jne myloop				;loop condition

;epilogue
rexit: 
	pop rbp
	ret