rivetlib = library('rivet', [
		'rivet.cpp',
		'rivet_game.cpp',
		'rivet_string_pool.cpp',

		'data/asset_bundle.cpp',
		'data/dag.cpp',
		'data/dat1.cpp',
		'data/dsar.cpp',
		'data/toc.cpp',

		'serialization/serialization.cpp',
	],
	include_directories: includedir,
	dependencies: deps,
	install: true,
	cpp_args: ['-DRIVET_EXPORTING'],
	gnu_symbol_visibility: 'hidden')

rivetdep = declare_dependency(link_with: rivetlib, include_directories: includedir)

pkg_mod = import('pkgconfig')
pkg_mod.generate(
	name: 'rivet',
	filebase: 'rivet',
	description: 'interoperability for ratchet and clank rift apart',
	subdirs: 'rivet',
	libraries: rivetlib,
	version: '0.1',
)
