global compute_grey

section .text

;prologue
compute_grey:

	push rbp				;setup stack frame
	mov rbp, rsp

	cmp rdi, 0				;if arg is null exit
	je rexit

	xor rax, rax			;initialize rax to zero
	xor rbx, rbx			;initialize rbx to zero
	xor rcx, rcx			;initialize rcx to zero

	mov esi, -16777216		;setup and

	mov ecx, -16777216		;setup and
	shr ecx, 8

	mov ebx, -16777216		;setup and
	shr ebx, 16

	and esi, dword [rdi]	;and it
	shr esi, 24				;shift it by 24
	add eax, esi			;add it to eax

	and ecx, dword [rdi]	;and it
	shr ecx, 16				;shift it by 16
	add eax, ecx			;add it to eax

	and ebx, dword [rdi]	;and it
	shr ebx, 8				;shift it by 8
	add eax, ebx			;add it to eax

	cdq
	mov dx, 0
	mov bx, 3
	idiv bx


;epilogue
rexit: 
	pop rbp
	ret