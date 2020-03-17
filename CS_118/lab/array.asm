global add_array_asm

section .text

;prologue
add_array_asm:
push rbp
mov rbp, rsp

cmp rdi, 0
je rexit
cmp rsi, 0
je rexit
cmp rcx, 0
je rexit

myloop:
	mov eax, dword [rdi] 
	mov dword [rsi], eax
	
	add rdi, 4
	sub rcx, 1
	cmp rcx, 0
	jge myloop

rexit: ;epilogue
pop rbp
ret