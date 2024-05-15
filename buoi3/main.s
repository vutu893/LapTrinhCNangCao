	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC1:
	.ascii "dia chi cua phan tu %d la: %x\12\0"
LC2:
	.ascii "dia chi cua b: %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	flds	LC0
	fstps	40(%esp)
	movw	$0, 20(%esp)
	movw	$1, 22(%esp)
	movw	$2, 24(%esp)
	movw	$3, 26(%esp)
	movw	$4, 28(%esp)
	movw	$5, 30(%esp)
	movw	$6, 32(%esp)
	movw	$7, 34(%esp)
	movw	$8, 36(%esp)
	movw	$9, 38(%esp)
	movl	$0, 44(%esp)
	jmp	L2
L3:
	leal	20(%esp), %eax
	movl	44(%esp), %edx
	addl	%edx, %edx
	addl	%edx, %eax
	movl	%eax, 8(%esp)
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	addl	$1, 44(%esp)
L2:
	cmpl	$9, 44(%esp)
	jle	L3
	leal	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 4
LC0:
	.long	1095073456
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
