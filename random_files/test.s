	.file	"test.c"
	.intel_syntax noprefix
	.text
.Ltext0:
	.globl	foobar
	.type	foobar, @function
foobar:
.LFB0:
	.file 1 "test.c"
	.loc 1 4 0
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	QWORD PTR -56[rbp], rdx
	.loc 1 5 0
	mov	rax, QWORD PTR -40[rbp]
	add	rax, 2
	mov	QWORD PTR -32[rbp], rax
	.loc 1 6 0
	mov	rax, QWORD PTR -48[rbp]
	add	rax, 3
	mov	QWORD PTR -24[rbp], rax
	.loc 1 7 0
	mov	rax, QWORD PTR -56[rbp]
	add	rax, 4
	mov	QWORD PTR -16[rbp], rax
	.loc 1 8 0
	mov	rdx, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR -24[rbp]
	add	rdx, rax
	mov	rax, QWORD PTR -16[rbp]
	add	rax, rdx
	mov	QWORD PTR -8[rbp], rax
	.loc 1 10 0
	mov	rax, QWORD PTR -32[rbp]
	imul	rax, QWORD PTR -24[rbp]
	imul	rax, QWORD PTR -16[rbp]
	mov	rdx, rax
	mov	rax, QWORD PTR -8[rbp]
	add	rax, rdx
	.loc 1 11 0
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	foobar, .-foobar
	.globl	main
	.type	main, @function
main:
.LFB1:
	.loc 1 14 0
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	.loc 1 15 0
	mov	edx, 99
	mov	esi, 88
	mov	edi, 77
	call	foobar
	.loc 1 16 0
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0xc6
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF0
	.byte	0xc
	.long	.LASF1
	.long	.LASF2
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.long	.LASF3
	.byte	0x1
	.byte	0xd
	.long	0x4a
	.quad	.LFB1
	.quad	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF4
	.uleb128 0x4
	.long	.LASF5
	.byte	0x1
	.byte	0x3
	.long	0x4a
	.quad	.LFB0
	.quad	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x5
	.string	"a"
	.byte	0x1
	.byte	0x3
	.long	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -56
	.uleb128 0x5
	.string	"b"
	.byte	0x1
	.byte	0x3
	.long	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x5
	.string	"c"
	.byte	0x1
	.byte	0x3
	.long	0x4a
	.uleb128 0x3
	.byte	0x91
	.sleb128 -72
	.uleb128 0x6
	.string	"xx"
	.byte	0x1
	.byte	0x5
	.long	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x6
	.string	"yy"
	.byte	0x1
	.byte	0x6
	.long	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x6
	.string	"zz"
	.byte	0x1
	.byte	0x7
	.long	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x6
	.string	"sum"
	.byte	0x1
	.byte	0x8
	.long	0x4a
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF0:
	.string	"GNU C11 7.4.0 -masm=intel -mtune=generic -march=x86-64 -g -fstack-protector-strong"
.LASF4:
	.string	"long int"
.LASF3:
	.string	"main"
.LASF5:
	.string	"foobar"
.LASF2:
	.string	"/mnt/c/Ohlone/random_files"
.LASF1:
	.string	"test.c"
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
