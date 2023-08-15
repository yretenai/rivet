rivetlib = library('rivet', [
		'rivet.cpp',

		'data/registry.cpp',
		'data/toc.cpp',
		'data/dag.cpp',
	],
	include_directories: incdir,
	dependencies: [threaddep],
	install: true,
	link_args: ldargs,
	cpp_args: cxxargs + ['-DRIVET_EXPORTING'],
	gnu_symbol_visibility: 'hidden')

rivetdep = declare_dependency(link_with: rivetlib, include_directories: incdir)

pkg_mod = import('pkgconfig')
pkg_mod.generate(
	name: 'rivet',
	filebase: 'rivet',
	description: 'interoperability for ratchet and clank rift apart',
	subdirs: 'rivet',
	libraries: rivetlib,
	version: '0.1',
)
