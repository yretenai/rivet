if host_machine.system() == 'windows'
    minhook_dep = dependency('minhook', version: '>= 1.3.3')
    cc = meson.get_compiler('c')
    if not add_languages('masm', native: false, required: cc.get_argument_syntax() == 'msvc')
      error('masm not available')
    endif

    rivet_hook = shared_library('rivet_hook', [
            'dll_main.cpp',
            'trampoline.masm',
            'runtime/runtime.cpp'
        ],
        dependencies: [
            nlohmann_json_dep,
            minhook_dep,
        ],
        vs_module_defs: 'hid.def'
    )
endif
