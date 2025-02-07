section .data
	extern proc_address

section .text
	global trampoline
	trampoline:
		default rel
		jmp qword [proc_address]
