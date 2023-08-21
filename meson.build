project('rivet', 'cpp',
	license: 'MPL-2.0',
	version: '0.1',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++20'
	])

threaddep = dependency('threads', required: true)

incdir = include_directories('include/')

ldargs = []
cxxargs = []

compiler = meson.get_compiler('cpp')
if host_machine.system() == 'windows'
    if compiler.get_id() == 'msvc'
        cxxargs += ['/utf-8', '/wd4251']
    endif
endif

if compiler.get_id() == 'clang'
    cxxargs += ['-finput-charset=utf-8', '-fexec-charset=utf-8', '-fexperimental-relative-c++-abi-vtables']
endif

subdir('src')
subdir('cli')
subdir('test')

install_subdir('include/',
	install_dir: 'include/',
	strip_directory: true)
