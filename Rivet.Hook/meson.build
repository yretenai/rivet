project('rivet', 'cpp',
	license: 'EUPL-1.2',
	version: '0.0.6',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++20'
	],
    meson_version: '>=1.2.1')

compiler = meson.get_compiler('cpp')

cpp_args = []

cpp_args = compiler.get_supported_arguments(
    '/wd4251', # do i need to define my own template exports? kinda cringe! do better msvc
    '/wd4913',
    '/utf-8',
    '/bigobj',
    '/EHsc',
    '-fPIC',
    '-finput-charset=utf-8',
    '-fexec-charset=utf-8',
    '-faddrsig',
    '-faligned-new',
    '-Wno-unknown-pragmas',
    '-Wall',
    '-Wextra',
    '-pedantic',
    '-Wno-unused-variable',
    '-Wno-unused-parameter',
)

add_project_arguments(cpp_args, language: 'cpp')

nlohmann_json_dep = dependency('', required: false)
if not compiler.check_header('nlohmann/json.hpp')
    nlohmann_json_dep = dependency('nlohmann_json', version: '>=3.11.2')
endif

if host_machine.system() != 'windows'

endif

minhook_dep = dependency('minhook', version: '>= 1.3.3')

ext = 'asm'
asm_compiler = 'nasm'
if build_machine.system() == 'windows'
    ext = 'masm'
    asm_compiler = 'masm'
endif

if not add_languages(asm_compiler, native: false, required: true)
    error(asm_compiler + ' not available')
endif

rivet_hook = shared_library('rivet_hook', [
        'src/dll_main.cpp',
        'src/trampoline.' + ext,
        'src/runtime/runtime.cpp'
    ],
    link_args: meson.get_compiler('cpp').get_supported_arguments('-static-libgcc', '-static-libstdc++'),
    dependencies: [
        nlohmann_json_dep,
        minhook_dep,
    ],
    vs_module_defs: 'src/hid.def'
)
