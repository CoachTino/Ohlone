	.file	"example.cpp"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"str1 before memcpy "
.LC1:
	.string	"\nstr1 after memcpy "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	DWORD PTR -15[rbp], 1953462133
	mov	WORD PTR -11[rbp], 14445
	mov	BYTE PTR -9[rbp], 0
	mov	DWORD PTR -19[rbp], 7627127
	lea	rdi, .LC0[rip]
	call	puts@PLT
	lea	rax, -15[rbp]
	mov	rdi, rax
	call	puts@PLT
	mov	eax, DWORD PTR -19[rbp]
	mov	DWORD PTR -15[rbp], eax
	lea	rdi, .LC1[rip]
	call	puts@PLT
	lea	rax, -15[rbp]
	mov	rdi, rax
	call	puts@PLT
	mov	eax, 0
	mov	rdx, QWORD PTR -8[rbp]
	xor	rdx, QWORD PTR fs:40
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits