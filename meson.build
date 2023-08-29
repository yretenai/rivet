project('rivet', 'cpp',
	license: 'MPL-2.0',
	version: '0.1',
	default_options: [
		'prefix=/usr',
		'warning_level=3',
		'cpp_std=c++20'
	])

thread_dep = dependency('threads', required: true)

liblz4_dep = dependency('liblz4-1.9.4', required: false)
if not liblz4_dep.found() 
    liblz4_dep = dependency('liblz4')
endif

libgdeflate_dep = dependency('libgdeflate-1.8.0', required: false)
if not libgdeflate_dep.found() 
    libgdeflate_dep = dependency('libgdeflate')
endif

zlib_dep = dependency('zlib-1.3-2', required: false)
if not zlib_dep.found()
    zlib_dep = dependency('zlib')
endif

nlohmann_json_dep = dependency('nlohmann_json-3.11.2', required: false)
if not nlohmann_json_dep.found()
    nlohmann_json_dep = dependency('nlohmann_json')
endif

gdeflate_core = subproject('GDeflate')
gdeflate_core_dep = gdeflate_core.get_variable('gdeflate_core_dep')

deps = [thread_dep, liblz4_dep, libgdeflate_dep, gdeflate_core_dep, zlib_dep, nlohmann_json_dep]

includedir = include_directories('include/')

cpp_args = []

compiler = meson.get_compiler('cpp')
if compiler.get_id() == 'msvc'
    cpp_args += ['/utf-8', '/wd4251']
endif

if compiler.get_id() == 'clang'
    cpp_args += ['-finput-charset=utf-8', '-fexec-charset=utf-8']

    if compiler.has_argument('-faddrsig')
        cpp_args += ['-faddrsig']
    endif

    if compiler.has_argument('-faligned-new')
        cpp_args += ['-faligned-new']
    endif

    if compiler.has_argument('-fcoroutines')
        cpp_args += ['-fcoroutines']
    endif

    if compiler.compiles('void test() { }', name: 'has polly', args: ['-mllvm', '-polly'])
        cpp_args += ['-mllvm', '-polly']
    endif
endif

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
