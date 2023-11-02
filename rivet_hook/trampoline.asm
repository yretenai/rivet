section .data
	extern proc_address

section .text
	global trampoline
	trampoline:
		mov rax, proc_address
		jmp rax
