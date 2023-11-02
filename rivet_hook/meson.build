# todo: 
#   figure out how to get meson to use mingw on linux for this target alone
#     -> can i just override $CC and $CXX temporarily?
if host_machine.system() == 'windows'
    minhook_dep = dependency('minhook', version: '>= 1.3.3')

    if not add_languages('masm' if build_machine.system() == 'windows' else 'nasm', native: false, required: true)
      error('masm not available')
    endif

    rivet_hook = shared_library('rivet_hook', [
            'dll_main.cpp',
            'trampoline.masm' if build_machine.system() == 'windows' else 'trampoline.nasm',
            'runtime/runtime.cpp'
        ],
        dependencies: [
            nlohmann_json_dep,
            minhook_dep,
        ],
        nasm_args: '-f win64'
        vs_module_defs: 'hid.def'
    )
endif
