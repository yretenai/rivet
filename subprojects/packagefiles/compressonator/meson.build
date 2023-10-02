project(
    'compressonator',
    'cpp', 'c',
    license: 'MIT',
    version: '4.4.19',
    default_options: [
        'cpp_std=c++17'
    ]
)

cmp_core_shaders_dir = include_directories('cmp_core/shaders')
cmp_core_source_dir = include_directories('cmp_core/source')
cmp_libs_cmp_math_dir = include_directories('applications/_libs/cmp_math')

cmp_core_sources = [
    'cmp_core/shaders/bc1_encode_kernel.cpp',
    'cmp_core/shaders/bc2_encode_kernel.cpp',
    'cmp_core/shaders/bc3_encode_kernel.cpp',
    'cmp_core/shaders/bc4_encode_kernel.cpp',
    'cmp_core/shaders/bc5_encode_kernel.cpp',
    'cmp_core/shaders/bc6_encode_kernel.cpp',
    'cmp_core/shaders/bc7_encode_kernel.cpp',
    'cmp_core/source/cmp_core.cpp',
    'applications/_libs/cmp_math/cpu_extensions.cpp',
    'applications/_libs/cmp_math/cmp_math_common.cpp'
]

cmp_core_args = []
if host_machine.system() != 'windows'
    cmp_core_args += [
        '-D_LINUX',
        '-DASPM_GPU'
    ]
endif

cxx_compiler = meson.get_compiler('cpp')

add_project_arguments(cxx_compiler.get_supported_arguments(
    '/Zc:strictStrings-'
), language: 'cpp')

arch_sse = []
if cxx_compiler.has_argument('-march=nehalem')
    arch_sse += ['-march=nehalem', '-mtune=nehalem']
endif

cmp_core_sse = static_library(
    'cmp_core_sse',
    files('cmp_core/source/core_simd_sse.cpp'),
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    cpp_args: cmp_core_args + arch_sse)

cmp_core_sse_dep = declare_dependency(
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    link_with: cmp_core_sse
)

arch_avx = []
if cxx_compiler.has_argument('-march=haswell')
    arch_avx += ['-march=haswell', '-mtune=haswell']
endif
if cxx_compiler.has_argument('/arch:AVX2')
    arch_avx += ['/arch:AVX2']
endif

cmp_core_avx = static_library(
    'cmp_core_avx',
    files('cmp_core/source/core_simd_avx.cpp'),
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    cpp_args: cmp_core_args + arch_avx)

cmp_core_avx_dep = declare_dependency(
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    link_with: cmp_core_avx
)

arch_avx512 = []
if cxx_compiler.has_argument('-march=knl')
    arch_avx512 += ['-march=knl', '-mtune=knl']
endif
if cxx_compiler.has_argument('/arch:AVX512')
    arch_avx512 += ['/arch:AVX512']
endif

cmp_core_avx512 = static_library(
    'cmp_core_avx512',
    files('cmp_core/source/core_simd_avx512.cpp'),
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    cpp_args: cmp_core_args + arch_avx512)

cmp_core_avx512_dep = declare_dependency(
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    link_with: cmp_core_avx512
)

cmp_core = static_library(
    'cmp_core',
    files(cmp_core_sources),
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    dependencies: [
        cmp_core_sse_dep,
        cmp_core_avx_dep,
        cmp_core_avx512_dep
    ],
    cpp_args: cmp_core_args + arch_sse)

cmp_core_dep = declare_dependency(
    include_directories: [
        cmp_core_shaders_dir,
        cmp_core_source_dir,
        cmp_libs_cmp_math_dir
    ],
    link_with: cmp_core
)

cmp_compressonator_includes = include_directories(
    'cmp_compressonatorlib',
    'cmp_compressonatorlib/apc',
    'cmp_compressonatorlib/atc',
    'cmp_compressonatorlib/ati',
    'cmp_compressonatorlib/basis',
    'cmp_compressonatorlib/bc6h',
    'cmp_compressonatorlib/bc7',
    'cmp_compressonatorlib/block',
    'cmp_compressonatorlib/buffer',
    'cmp_compressonatorlib/dxt',
    'cmp_compressonatorlib/dxtc',
    'cmp_compressonatorlib/etc',
    'cmp_compressonatorlib/etc/etcpack/',
    'cmp_compressonatorlib/gt',
    'cmp_compressonatorlib/common',
    'cmp_framework/common',
    'cmp_framework/common/half',
    'applications/_plugins/common'
)

cmp_compressonator_sources = [
    'cmp_compressonatorlib/apc/apc_decode.cpp',
    'cmp_compressonatorlib/apc/apc_encode.cpp',
    'cmp_compressonatorlib/apc/codec_apc.cpp',
    'cmp_compressonatorlib/atc/codec_atc.cpp',
    'cmp_compressonatorlib/atc/codec_atc_rgb.cpp',
    'cmp_compressonatorlib/atc/codec_atc_rgba_explicit.cpp',
    'cmp_compressonatorlib/atc/codec_atc_rgba_interpolated.cpp',
    'cmp_compressonatorlib/ati/codec_ati1n.cpp',
    'cmp_compressonatorlib/ati/codec_ati2n.cpp',
    'cmp_compressonatorlib/ati/codec_ati2n_dxt5.cpp',
    'cmp_compressonatorlib/ati/codec_ati_tc.cpp',
    'cmp_compressonatorlib/ati/compressonatori_tc.c',
    'cmp_compressonatorlib/ati/compressonatorxcodec.cpp',
    'cmp_compressonatorlib/basis/codec_basis.cpp',
    'cmp_compressonatorlib/bc6h/bc6h_decode.cpp',
    'cmp_compressonatorlib/bc6h/bc6h_definitions.cpp',
    'cmp_compressonatorlib/bc6h/bc6h_encode.cpp',
    'cmp_compressonatorlib/bc6h/bc6h_library.cpp',
    'cmp_compressonatorlib/bc6h/bc6h_utils.cpp',
    'cmp_compressonatorlib/bc6h/codec_bc6h.cpp',
    'cmp_compressonatorlib/bc7/3dquant_vpc.cpp',
    'cmp_compressonatorlib/bc7/bc7_decode.cpp',
    'cmp_compressonatorlib/bc7/bc7_definitions.cpp',
    'cmp_compressonatorlib/bc7/bc7_encode.cpp',
    'cmp_compressonatorlib/bc7/bc7_library.cpp',
    'cmp_compressonatorlib/bc7/bc7_partitions.cpp',
    'cmp_compressonatorlib/bc7/bc7_utils.cpp',
    'cmp_compressonatorlib/bc7/codec_bc7.cpp',
    'cmp_compressonatorlib/bc7/reconstruct.cpp',
    'cmp_compressonatorlib/bc7/shake.cpp',
    'cmp_compressonatorlib/block/codec_block.cpp',
    'cmp_compressonatorlib/block/codec_block_4x4.cpp',
    'cmp_compressonatorlib/block/codec_block_8x8.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_block.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_r16.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_r16f.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_r32.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_r32f.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_r8.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_r8s.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rg16.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rg16f.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rg32.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rg32f.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rg8.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rg8s.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgb888.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgb888s.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgb9995ef.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba1010102.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba16.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba16f.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba2101010.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba32.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba32f.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba8888.cpp',
    'cmp_compressonatorlib/buffer/codecbuffer_rgba8888s.cpp',
    'cmp_compressonatorlib/common/codec.cpp',
    'cmp_compressonatorlib/compress.cpp',
    'cmp_compressonatorlib/compressonator.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt1.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt3.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_rbxg.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_rgxb.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_rxbg.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_swizzled.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_xgbr.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_xgxr.cpp',
    'cmp_compressonatorlib/dxt/codec_dxt5_xrbg.cpp',
    'cmp_compressonatorlib/dxtc/codec_dxtc.cpp',
    'cmp_compressonatorlib/dxtc/codec_dxtc_alpha.cpp',
    'cmp_compressonatorlib/dxtc/codec_dxtc_rgba.cpp',
    'cmp_compressonatorlib/dxtc/dxtc_v11_compress.c',
    'cmp_compressonatorlib/dxtc/dxtc_v11_compress_asm.c',
    'cmp_compressonatorlib/etc/codec_etc.cpp',
    'cmp_compressonatorlib/etc/codec_etc2.cpp',
    'cmp_compressonatorlib/etc/codec_etc2_rgb.cpp',
    'cmp_compressonatorlib/etc/codec_etc2_rgba.cpp',
    'cmp_compressonatorlib/etc/codec_etc2_rgba1.cpp',
    'cmp_compressonatorlib/etc/codec_etc_rgb.cpp',
    'cmp_compressonatorlib/etc/codec_etc_rgba_explicit.cpp',
    'cmp_compressonatorlib/etc/codec_etc_rgba_interpolated.cpp',
    'cmp_compressonatorlib/etc/etcpack/etcdec.cxx',
    'cmp_compressonatorlib/etc/etcpack/etcimage.cxx',
    'cmp_compressonatorlib/etc/etcpack/etcpack.cxx',
    'cmp_compressonatorlib/gt/codec_gt.cpp',
    'cmp_compressonatorlib/gt/gt_decode.cpp',
    'cmp_compressonatorlib/gt/gt_encode.cpp',
    'cmp_framework/common/cmp_boxfilter.cpp',
    'cmp_framework/common/cmp_mips.cpp',
    'cmp_framework/common/half/half.cpp',
    'cmp_framework/common/hdr_encode.cpp',
    'applications/_plugins/common/atiformats.cpp',
    'applications/_plugins/common/atiformats.h',
    'applications/_plugins/common/format_conversion.h',
    'applications/_plugins/common/format_conversion.cpp'
]

cmp_compressonator = static_library('cmp_compressonator',
    files(cmp_compressonator_sources),
    include_directories: cmp_compressonator_includes,
    cpp_args: arch_sse,
    dependencies: [
        cmp_core_dep
    ]
)

cmp_compressonator_dep = declare_dependency(
    include_directories: 'cmp_compressonatorlib',
    link_with: cmp_compressonator
)
