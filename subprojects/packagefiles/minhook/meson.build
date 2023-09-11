project(
  'minhook',
  'c',
  license: 'BSD-2-Clause',
  default_options: [
    'buildtype=release',
    'warning_level=3'
  ],
  version: '1.3.3',
  meson_version: '>=0.50.0'
)

c_args = ['-DLIBDEFLATE_DLL=1']

sources = files(
  'src/buffer.c',
  'src/hook.c',
  'src/trampoline.c',
  'src/hde/hde64.c'
)

minhook = static_library(
  'minhook',
  sources,
  c_args: c_args,
  include_directories: 'include'
)

minhook_dep = declare_dependency(
  link_with: minhook,
  include_directories: 'include'
)
