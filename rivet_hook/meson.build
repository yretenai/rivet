# todo: 
#   figure out how to get meson to use mingw on linux for this target alone
#     -> can i just override $CC and $CXX temporarily?
if host_machine.system() == 'windows'
    minhook_dep = dependency('minhook', version: '>= 1.3.3')

    ext = 'asm'
    asm_compiler = 'nasm'
    if build_machine.system() == 'windows'
      ext = 'masm'
      asm_compiler = 'masm'
    endif

    if not add_languages(asm_compiler, native: false, required: true)
      error(asm_compiler + ' not available')
    endif

    rivet_hook = shared_library('rivet_hook', [
            'dll_main.cpp',
            'trampoline.' + ext,
            'runtime/runtime.cpp'
        ],
        link_args: ['-static-libgcc', '-static-libstdc++'],
        dependencies: [
            nlohmann_json_dep,
            minhook_dep,
        ],
        vs_module_defs: 'hid.def'
    )
endif
