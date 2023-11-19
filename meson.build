project('rivet', 'cpp',
	license: 'MPL-2.0',
	version: '0.0.6',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++20'
	],
    meson_version: '>=1.2.1')

compiler = meson.get_compiler('cpp')

if get_option('buildtype') == 'custom'
    opt_args = compiler.get_supported_arguments(
        '-march=knl',
        '-mtune=knl',
        '-fopenmp'
    )

    if compiler.get_id() == 'clang'
        add_project_arguments('-Ofast', language: 'cpp')

        if compiler.compiles('void test() { }', name: 'has polly', args: ['-mllvm', '-polly'])
            opt_args += ['-mllvm', '-polly']

            if compiler.compiles('void test() { }', name: 'has polly vectorizer', args: ['-mllvm', '-polly-vectorizer=stripmine'])
                opt_args += ['-mllvm', '-polly-vectorizer=stripmine']
            endif

            if compiler.compiles('void test() { }', name: 'has polly parallel', args: ['-mllvm', '-polly-parallel'])
                opt_args += ['-mllvm', '-polly-parallel']
            endif

            if compiler.compiles('void test() { }', name: 'has polly omp backend', args: ['-mllvm', '-polly-omp-backend=LLVM'])
                opt_args += ['-mllvm', '-polly-omp-backend=LLVM']
            endif

            if compiler.compiles('void test() { }', name: 'has polly num threads', args: ['-mllvm', '-polly-num-threads=24'])
                opt_args += ['-mllvm', '-polly-num-threads=24']
            endif

            if compiler.compiles('void test() { }', name: 'has polly scheduling', args: ['-mllvm', '-polly-scheduling=dynamic'])
                opt_args += ['-mllvm', '-polly-scheduling=dynamic']
            endif

            if compiler.compiles('void test() { }', name: 'has polly scheduling chunksize', args: ['-mllvm', '-polly-scheduling-chunksize=1'])
                opt_args += ['-mllvm', '-polly-scheduling-chunksize=1']
            endif
        endif
    else
        if compiler.get_id() == 'msvc'
            opt_args += ['/Ox']
        else
            opt_args += ['-O2']
        endif
    endif

    add_global_arguments(opt_args, language: 'cpp')
endif

cpp_args = []

cpp_args = compiler.get_supported_arguments(
    '/wd4251', # do i need to define my own template exports? kinda cringe! do better msvc
    '/wd4913',
    '/utf-8',
    '/bigobj',
    '/EHsc',
    '-fPIC',
    '-finput-charset=utf-8',
    '-fexec-charset=utf-8',
    '-faddrsig',
    '-faligned-new'
)

add_project_arguments(cpp_args, language: 'cpp')

# cross dependencies between cli and rivet
nlohmann_json_dep = dependency('', required: false)
if not compiler.check_header('nlohmann/json.hpp')
    nlohmann_json_dep = dependency('nlohmann_json', version: '>=3.11.2')
endif

subdir('rivet_hook')

cmake = import('cmake')

if not get_option('rivet_hook_only')
# public dependencies
deps = []
if not compiler.check_header('ankerl/unordered_dense.h')
    deps += [dependency('unordered_dense', version: '>=4.1.1')]
endif

# cli dependencies
cli_deps = [] + deps
if not get_option('rivet_no_cli') or not get_option('rivet_no_gui')
    if not compiler.check_header('clipp.h')
        cli_deps += [dependency('clipp', version: '>=1.2.4')]
    endif
    cli_deps += [nlohmann_json_dep]
endif

# gui dependencies
gui_deps = [] + cli_deps
if not get_option('rivet_no_gui')
    sdl3_dep = dependency('sdl3', version: '>=3.0.0', required: false)
    if not sdl3_dep.found()
        sdl3_subproj = cmake.subproject('sdl3')
        sdl3_dep = sdl3_subproj.dependency('SDL3-shared')
    endif
    gui_deps += [sdl3_dep]
endif

# rivet dependencies
rivet_deps = [] + deps
rivet_deps += [nlohmann_json_dep]
if not compiler.check_header('fx/gltf.h')
    rivet_deps += [dependency('fx-gltf', version: '>=2.0.0')]
endif
rivet_deps += [dependency('liblz4', version: '>= 1.9.4')]
rivet_deps += [dependency('libgdeflate', version: '>=1.8.0')]
rivet_deps += [dependency('zlib', version: '>=1.3')]
if not compiler.check_header('compressonator.h')
    rivet_deps += [dependency('cmp_compressonator', version: '>=4.4.19', static: true)]
endif
rivet_deps += [dependency('libtiff-4')]
rivet_deps += [dependency('libpng', version: '>=1.6.40')]

gdeflate_core = subproject('GDeflate')
rivet_deps += [gdeflate_core.get_variable('gdeflate_core_dep')]

libdeps = []

icon_sources = []
if host_machine.system() == 'windows'
    if import('fs').is_file('resources/icon.ico')
        icon_sources += import('windows').compile_resources(
            'resources/rivet.rc',
            include_directories : [meson.current_build_dir(), 'resources'],
        )
    endif
endif

subdir('src')

subdir('ddl')

if not get_option('rivet_lib_only')
    subdir('cli')
endif

if get_option('rivet_tests')
    subdir('test')
endif

install_subdir('include/', install_dir: 'include/', strip_directory: true)
endif
