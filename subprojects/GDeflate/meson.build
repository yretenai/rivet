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

cpp_args = []

if host_machine.system() == 'windows' and get_option('default_library') != 'static'
  cpp_args += '-DGDEFLATE_BUILDING=1'
endif

libgdeflate_dep = dependency('libgdeflate')

directstorage_gdeflate = library(
  'directstorage_gdeflate',
  [
    'src/GDeflateCompress.cpp',
    'src/GDeflateDecompress.cpp'
  ],
  install: true,
  version: '1.0.0',
  dependencies: [libgdeflate_dep],
  gnu_symbol_visibility: 'hidden'
)

directstorage_gdeflate_dep = declare_dependency(
  link_with: directstorage_gdeflate,
  include_directories: 'include'
)

install_headers(
  'include/GDeflate.h'
)
