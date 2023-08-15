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

subdir('src')
subdir('cli')
subdir('test')

install_subdir('include/',
	install_dir: 'include/',
	strip_directory: true)
