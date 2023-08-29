project(
  'directstorage_gdeflate',
  'cpp',
  license: 'Apache-2.0',
  default_options: [
    'buildtype=release',
    'warning_level=3'
  ],
  version: '1.0.0',
  meson_version: '>=0.50.0'
)

cpp_args = ['-DGDEFLATE_BUILDING']

libgdeflate_dep = dependency('libgdeflate')

gdeflate_core = library(
  'GDeflateCore',
  [
    'src/GDeflateCompress.cpp',
    'src/GDeflateDecompress.cpp'
  ],
  install: true,
  version: '1.0.0',
  cpp_args: cpp_args,
  dependencies: [libgdeflate_dep],
  gnu_symbol_visibility: 'hidden'
)

gdeflate_core_dep = declare_dependency(
  link_with: gdeflate_core,
  include_directories: 'include'
)

install_headers(
  'include/GDeflate.h'
)

pkg_mod = import('pkgconfig')
pkg_mod.generate(
	name: 'GDeflateCore',
	filebase: 'GDeflateCore',
	description: '',
	libraries: gdeflate_core,
	version: '1.0.0',
)
