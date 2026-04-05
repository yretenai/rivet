# SPDX-FileCopyrightText: 2025-2026 Neptuwunium
#
# SPDX-License-Identifier: EUPL-1.2

project('rivet', 'cpp',
	license: 'EUPL-1.2',
	version: '0.0.6',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++23'
	],
    meson_version: '>=1.2.1')

compiler = meson.get_compiler('cpp')

cpp_args = []

cpp_args = compiler.get_supported_arguments(
    '/utf-8',
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
    '-Wno-deprecated-literal-operator',
)

minhook_dep = dependency('minhook', version: '>= 1.3.3')

nlohmann_json_dep = dependency('', required: false)
if not compiler.check_header('nlohmann/json.hpp')
    nlohmann_json_dep = dependency('nlohmann_json', version: '>= 3.11.2')
endif

toml11_dep = dependency('', required: false)
if not compiler.check_header('toml.hpp')
    toml11_dep = dependency('toml11', version: '>= 4.4.0')
endif

rivet_hook = shared_library('rivet_hook', [
        'src/ddl.cpp',
        'src/main.cpp',
        'src/runtime.cpp',
        'src/runtime_loader.cpp',
        'src/settings.cpp',
        'src/signature_engine.cpp',
    ],
    link_args: compiler.get_supported_arguments('-static-libgcc', '-static-libstdc++'),
    dependencies: [
        minhook_dep,
        nlohmann_json_dep,
        toml11_dep,
    ],
    name_prefix: '',
    cpp_args: cpp_args
)
