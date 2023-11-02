section .data
	extern proc_address

section .text
	global trampoline
	trampoline:
		%use masm
		jmp qword [proc_address]
