	.file	"ex1_array.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter 8 numbers to be put into an array:"
	.align 8
.LC1:
	.string	"\nNumber to be put in index %d of the array: "
.LC2:
	.string	"%d"
.LC3:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rsp, %rsi
	movq	%rsi, %r12
	movl	$8, -36(%rbp)
	movl	-36(%rbp), %esi
	movslq	%esi, %rsi
	subq	$1, %rsi
	movq	%rsi, -32(%rbp)
	movl	-36(%rbp), %esi
	movslq	%esi, %rsi
	movq	%rsi, %rcx
	movl	$0, %ebx
	movl	-36(%rbp), %ecx
	movslq	%ecx, %rcx
	movq	%rcx, %rax
	movl	$0, %edx
	movl	-36(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %ebx
	movl	$0, %edx
	divq	%rbx
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -24(%rbp)
	movl	$.LC0, %edi
	call	puts
	movl	$0, -40(%rbp)
	jmp	.L2
.L3:
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -40(%rbp)
.L2:
	movl	-40(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L3
	movl	$0, -40(%rbp)
	jmp	.L4
.L5:
	movq	-24(%rbp), %rax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -40(%rbp)
.L4:
	movl	-40(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L5
	movl	$0, %eax
	movq	%r12, %rsp
	leaq	-16(%rbp), %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
