section .data
	extern proc_address

section .text
	global trampoline
	trampoline:
		jmp qword [proc_address]
