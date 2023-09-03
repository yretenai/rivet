project('fx-gltf', 'cpp',
    version: '2.0.0',
    license: 'MIT',
    default_options : [
        'cpp_std=c++17',
        'warning_level=3'
    ])

compiler = meson.get_compiler('cpp')
nlohmann_json_dep = dependency('', required: false)
if not compiler.check_header('nlohmann/json.hpp')
    nlohmann_json_dep = dependency('nlohmann_json', version: '>=3.11.2')
endif

incdir = include_directories('include')
fx_gltf_dep = declare_dependency(include_directories: incdir, dependencies: [nlohmann_json_dep])
