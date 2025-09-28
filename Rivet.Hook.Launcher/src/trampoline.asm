;;; SPDX-FileCopyrightText: 2025 Legiayayana
;;;
;;; SPDX-License-Identifier: EUPL-1.2

section .data
	extern proc_address

section .text
	global trampoline
	trampoline:
		default rel
		jmp qword [proc_address]
