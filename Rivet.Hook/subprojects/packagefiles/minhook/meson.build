project(
  'minhook',
  'c',
  license: 'BSD-2-Clause',
  default_options: [
    'buildtype=release',
    'warning_level=3'
  ],
  version: '1.3.4',
  meson_version: '>=0.50.0'
)

sources = files(
  'src/buffer.c',
  'src/hook.c',
  'src/trampoline.c',
  'src/hde/hde64.c'
)

minhook = static_library(
  'minhook',
  sources,
  include_directories: 'include',
  c_args: meson.get_compiler('c').get_supported_arguments('-Wno-pedantic')
)

minhook_dep = declare_dependency(
  link_with: minhook,
  include_directories: 'include'
)
