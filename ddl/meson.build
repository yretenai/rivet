rivetddllib_includedir = include_directories('include/')

ddl_codegen_files = []

subdir('src/generated')

rivetddllib = library('rivet-ddl', ddl_codegen_files + [
        'src/rivet_ddl.cpp',
        'src/rivet_ddl_registration.cpp',
	],
	include_directories: rivetddllib_includedir,
	dependencies: deps + [rivetdep],
	install: true,
	cpp_args: ['-DRIVET_DDL_EXPORTING'],
	gnu_symbol_visibility: 'hidden')

rivetddldep = declare_dependency(link_with: rivetddllib, dependencies: [rivetdep], include_directories: rivetddllib_includedir)

pkg_mod = import('pkgconfig')
pkg_mod.generate(
	name: 'rivet-ddl',
	filebase: 'rivet-ddl',
	description: 'ddl data structures for rivet',
	subdirs: 'rivet',
	libraries: rivetddllib,
	version: '0.0.6',
)

libdeps += [rivetddldep]
