project(
  'libgdeflate',
  'c',
  license: 'Apache-2.0',
  default_options: [
    'buildtype=release',
    'warning_level=3'
  ],
  version: '1.8.0',
  meson_version: '>=0.50.0'
)

c_args = ['-DLIBDEFLATE_DLL=1']

sources = files(
    'lib/adler32.c',
    'lib/crc32.c',
    'lib/deflate_compress.c',
    'lib/deflate_decompress.c',
    'lib/gdeflate_compress.c',
    'lib/gdeflate_decompress.c',
    'lib/gzip_compress.c',
    'lib/gzip_decompress.c',
    'lib/utils.c',
    'lib/zlib_compress.c',
    'lib/zlib_decompress.c',
    'lib/x86/cpu_features.c',
)

libgdeflate = library(
  'libgdeflate',
  sources,
  c_args: c_args,
  install: true,
  version: '1.8.0',
  gnu_symbol_visibility: 'hidden'
)

libgdeflate_dep = declare_dependency(
  link_with: libgdeflate,
  include_directories: '.'
)

install_headers(
  'libgdeflate.h'
)

pkg_mod = import('pkgconfig')
pkg_mod.generate(
	name: 'gdeflate',
	filebase: 'libgdeflate',
	description: '',
	libraries: libgdeflate,
	version: '1.8.0',
)
