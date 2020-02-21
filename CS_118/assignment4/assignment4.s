	.file	"assignment4.cpp"
	.intel_syntax noprefix
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.align 4
	.type	_ZL7decimal, @object
	.size	_ZL7decimal, 4
_ZL7decimal:
	.long	3237478400
	.globl	ptr
	.section	.data.rel.local,"aw",@progbits
	.align 8
	.type	ptr, @object
	.size	ptr, 8
ptr:
	.quad	_ZL7decimal
	.section	.rodata
.LC0:
	.string	"float: %x\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1493:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	rax, QWORD PTR ptr[rip]
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rdi, .LC0[rip]
	mov	eax, 0
	call	printf@PLT
	mov	rax, QWORD PTR ptr[rip]
	mov	rdi, rax
	call	_Z14extractSignBitPj
	mov	rax, QWORD PTR ptr[rip]
	mov	rdi, rax
	call	_Z19extractExponentBitsPj
	mov	rax, QWORD PTR ptr[rip]
	mov	rdi, rax
	call	_Z15extractMantissaPj
	mov	eax, 0
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1493:
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"sign bit: %x\n"
	.text
	.globl	_Z14extractSignBitPj
	.type	_Z14extractSignBitPj, @function
_Z14extractSignBitPj:
.LFB1494:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR [rax]
	mov	DWORD PTR -4[rbp], eax
	shr	DWORD PTR -4[rbp], 31
	mov	eax, DWORD PTR -4[rbp]
	mov	esi, eax
	lea	rdi, .LC1[rip]
	mov	eax, 0
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1494:
	.size	_Z14extractSignBitPj, .-_Z14extractSignBitPj
	.section	.rodata
.LC2:
	.string	"exponent bit: %x\n"
	.text
	.globl	_Z19extractExponentBitsPj
	.type	_Z19extractExponentBitsPj, @function
_Z19extractExponentBitsPj:
.LFB1495:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR [rax]
	mov	DWORD PTR -4[rbp], eax
	sal	DWORD PTR -4[rbp]
	shr	DWORD PTR -4[rbp], 24
	mov	eax, DWORD PTR -4[rbp]
	mov	esi, eax
	lea	rdi, .LC2[rip]
	mov	eax, 0
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1495:
	.size	_Z19extractExponentBitsPj, .-_Z19extractExponentBitsPj
	.section	.rodata
.LC3:
	.string	"mantissa bit: %x\n"
	.text
	.globl	_Z15extractMantissaPj
	.type	_Z15extractMantissaPj, @function
_Z15extractMantissaPj:
.LFB1496:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR [rax]
	mov	DWORD PTR -4[rbp], eax
	sal	DWORD PTR -4[rbp], 9
	shr	DWORD PTR -4[rbp], 9
	mov	eax, DWORD PTR -4[rbp]
	mov	esi, eax
	lea	rdi, .LC3[rip]
	mov	eax, 0
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1496:
	.size	_Z15extractMantissaPj, .-_Z15extractMantissaPj
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1977:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], edi
	mov	DWORD PTR -8[rbp], esi
	cmp	DWORD PTR -4[rbp], 1
	jne	.L8
	cmp	DWORD PTR -8[rbp], 65535
	jne	.L8
	lea	rdi, _ZStL8__ioinit[rip]
	call	_ZNSt8ios_base4InitC1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZStL8__ioinit[rip]
	mov	rax, QWORD PTR _ZNSt8ios_base4InitD1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
.L8:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1977:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_ptr, @function
_GLOBAL__sub_I_ptr:
.LFB1978:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1978:
	.size	_GLOBAL__sub_I_ptr, .-_GLOBAL__sub_I_ptr
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_ptr
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
