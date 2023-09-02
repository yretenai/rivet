project('rivet', 'cpp',
	license: 'MPL-2.0',
	version: '0.0.6',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++20'
	])


compiler = meson.get_compiler('cpp')

# public dependencies
deps = []
if not compiler.check_header('ankerl/unordered_dense.h')
    deps += [dependency('unordered_dense', version: '>=4.1.1')]
endif

# cli dependencies
cli_deps = [] + deps
cli_deps += [dependency('clipp', version: '>=1.2.4')]

# private dependencies
rivet_deps = [] + deps
rivet_deps += [dependency('nlohmann_json', version: '>=3.11.2')]
rivet_deps += [dependency('liblz4', version: '>= 1.9.4')]
rivet_deps += [dependency('libgdeflate', version: '>=1.8.0')]
rivet_deps += [dependency('zlib', version: '>=1.3')]
rivet_deps += [dependency('cmp_compressonator', version: '>=4.4.19', static: true)]
rivet_deps += [dependency('libtiff-4')]
rivet_deps += [dependency('libpng', version: '>=1.6.40')]

gdeflate_core = subproject('GDeflate')
rivet_deps += [gdeflate_core.get_variable('gdeflate_core_dep')]

includedir = include_directories('include/')

cpp_args = []

cpp_args = compiler.get_supported_arguments(
    '/wd4251', # do i need to define my own template exports? kinda cringe! do better msvc
    '/wd4913',
    '/utf-8',
    '/EHsc',
    '-finput-charset=utf-8',
    '-fexec-charset=utf-8',
    '-faddrsig',
    '-faligned-new',
    '-fcoroutines'
)

if get_option('buildtype') == 'custom'
    cpp_args += compiler.get_supported_arguments(
        '-march=native',
        '-mtune=native',
        '-fopenmp'
    )

    if compiler.get_id() == 'clang'
        if compiler.compiles('void test() { }', name: 'has polly', args: ['-mllvm', '-polly'])
            cpp_args += ['-mllvm', '-polly']

            if compiler.compiles('void test() { }', name: 'has polly vectorizer', args: ['-mllvm', '-polly-vectorizer=stripmine'])
                cpp_args += ['-mllvm', '-polly-vectorizer=stripmine']
            endif

            if compiler.compiles('void test() { }', name: 'has polly parallel', args: ['-mllvm', '-polly-parallel'])
                cpp_args += ['-mllvm', '-polly-parallel']
            endif

            if compiler.compiles('void test() { }', name: 'has polly omp backend', args: ['-mllvm', '-polly-omp-backend=LLVM'])
                cpp_args += ['-mllvm', '-polly-omp-backend=LLVM']
            endif

            if compiler.compiles('void test() { }', name: 'has polly num threads', args: ['-mllvm', '-polly-num-threads=24'])
                cpp_args += ['-mllvm', '-polly-num-threads=24']
            endif

            if compiler.compiles('void test() { }', name: 'has polly scheduling', args: ['-mllvm', '-polly-scheduling=dynamic'])
                cpp_args += ['-mllvm', '-polly-scheduling=dynamic']
            endif

            if compiler.compiles('void test() { }', name: 'has polly scheduling chunksize', args: ['-mllvm', '-polly-scheduling-chunksize=1'])
                cpp_args += ['-mllvm', '-polly-scheduling-chunksize=1']
            endif

            add_project_arguments('-O3', language: 'cpp')
        endif
    endif
endif

add_project_arguments(cpp_args, language: 'cpp')

subdir('src')

if not get_option('lib_only')
    subdir('cli')
endif

if get_option('rivet_tests')
    subdir('test')
endif

install_subdir('include/',
	install_dir: 'include/',
	strip_directory: true)
