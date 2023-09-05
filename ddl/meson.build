ddl_codegen_files = []

rivetddllib_includes = [include_directories('include_base/')]

if not get_option('no_ddl')
    rivetddllib_includes += [include_directories('include/')]
    subdir('gen')
    ddl_codegen_files += ['src/rivet_ddl_registration.cpp']
else
    ddl_codegen_files += ['src/rivet_ddl_dummy.cpp']
endif

rivetddllib = library('rivet-ddl', ddl_codegen_files + [
        'src/rivet_ddl.cpp',
	],
	include_directories: rivetddllib_includes,
	dependencies: deps + [rivetdep],
	install: true,
	cpp_args: ['-DRIVET_DDL_EXPORTING'],
	gnu_symbol_visibility: 'hidden')

rivetddldep = declare_dependency(link_with: rivetddllib, dependencies: [rivetdep], include_directories: rivetddllib_includes)

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
