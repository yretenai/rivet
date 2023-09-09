if host_machine.system() == 'windows'
    cc = meson.get_compiler('c')
    if not add_languages('masm', required: cc.get_argument_syntax() == 'msvc')
      error('masm not available')
    endif

    rivet_hook = shared_library('rivet_hook', [
            'dll_main.cpp',
            'trampoline.masm',
            'runtime/runtime.cpp'
        ],
        dependencies: [
            nlohmann_json_dep,
            # minhook_dep,
        ],
        vs_module_defs: 'hid.def'
    )
endif
