rivetddllib_includedir = include_directories('include/')

rivetddllib = library('rivet-ddl', [
        'src/rivet_ddl.cpp',
	],
	include_directories: rivetddllib_includedir,
	dependencies: rivet_deps + [rivetdep],
	install: true,
	cpp_args: ['-DRIVET_DDL_EXPORTING'],
	gnu_symbol_visibility: 'hidden')

rivetddldep = declare_dependency(link_with: rivetddllib, include_directories: rivetddllib_includedir)

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
