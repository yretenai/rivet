# SPDX-FileCopyrightText: 2025-2026 Neptuwunium
#
# SPDX-License-Identifier: EUPL-1.2

project('rivet', 'cpp',
	license: 'EUPL-1.2',
	version: '1.0.0',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++20'
	],
    meson_version: '>=1.2.1')

ext = 'asm'
asm_compiler = 'nasm'
if build_machine.system() == 'windows'
    ext = 'masm'
    asm_compiler = 'masm'
endif

if not add_languages(asm_compiler, native: false, required: true)
    error(asm_compiler + ' not available')
endif

shared_library('hid_win11', [
        'src/main.cpp',
        'src/trampoline.' + ext
    ],
    name_prefix: '',
    link_args: meson.get_compiler('cpp').get_supported_arguments('-static-libgcc', '-static-libstdc++'),
    vs_module_defs: 'src/hid11.def',
)

shared_library('hid_win10', [
        'src/main.cpp',
        'src/trampoline.' + ext
    ],
    name_prefix: '',
    link_args: meson.get_compiler('cpp').get_supported_arguments('-static-libgcc', '-static-libstdc++'),
    vs_module_defs: 'src/hid10.def'
)
