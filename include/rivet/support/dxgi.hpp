// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// ReSharper disable CppMultiCharacterLiteral

#include <array>
#include <cstdint>

namespace rivet::support {
	static constexpr uint32_t fourcc_dxt1 = '1TXD'; // DXGI_FORMAT_BC1_UNORM, DXT1
	static constexpr uint32_t fourcc_dxt2 = '2TXD'; // DXGI_FORMAT_BC2_UNORM, DXT2
	static constexpr uint32_t fourcc_dxt3 = '3TXD'; // DXGI_FORMAT_BC2_UNORM, DXT3
	static constexpr uint32_t fourcc_dxt4 = '4TXD'; // DXGI_FORMAT_BC3_UNORM, DXT4
	static constexpr uint32_t fourcc_dxt5 = '5TXD'; // DXGI_FORMAT_BC3_UNORM, DXT5
	static constexpr uint32_t fourcc_ati1 = '1ITA'; // DXGI_FORMAT_BC4_UNORM, ATI1
	static constexpr uint32_t fourcc_ati2 = '2ITA'; // DXGI_FORMAT_BC5_UNORM, ATI2
	static constexpr uint32_t fourcc_dx10 = '01XD'; // dx10_header.format, DX10

	enum class dds_flags : uint32_t {
		caps = 0x1,
		height = 0x2,
		width = 0x4,
		pitch = 0x8,
		pixel_format = 0x1000,
		mip_map_count = 0x20000,
		linear_size = 0x80000,
		depth = 0x800000,

		texture = caps | height | width | pixel_format,
		dxt_texture = texture | linear_size,
		mip_mapped_texture = texture | mip_map_count,
		mip_mapped_dxt_texture = dxt_texture | mip_map_count,
	};

	inline auto
	operator|(dds_flags lhs, dds_flags rhs) -> dds_flags {
		return static_cast<dds_flags>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
	}

	enum class dds_caps : uint32_t {
		none = 0,
		complex = 0x8,
		texture = 0x1000,
		mip_map = 0x400000,
	};

	inline auto
	operator|(dds_caps lhs, dds_caps rhs) -> dds_caps {
		return static_cast<dds_caps>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
	}

	enum class dds_caps2 : uint32_t {
		none = 0,
		cubemap = 0x200,
		cubemap_positive_x = 0x400,
		cubemap_negative_x = 0x800,
		cubemap_positive_y = 0x1000,
		cubemap_negative_y = 0x2000,
		cubemap_positive_z = 0x4000,
		cubemap_negative_z = 0x8000,
		volume = 0x200000,
	};

	inline auto
	operator|(dds_caps2 lhs, dds_caps2 rhs) -> dds_caps2 {
		return static_cast<dds_caps2>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
	}

	enum class dds_pixel_format_flags : uint32_t {
		none = 0,
		alpha_pixels = 0x1,
		alpha = 0x2,
		four_cc = 0x4,
		rgb = 0x40,
		yuv = 0x200,
		luminance = 0x20000,
	};

	inline auto
	operator|(dds_pixel_format_flags lhs, dds_pixel_format_flags rhs) -> dds_pixel_format_flags {
		return static_cast<dds_pixel_format_flags>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
	}

	struct dds_header {
		uint32_t magic = 0x20534444;
		uint32_t size = 124;
		dds_flags flags = dds_flags::mip_mapped_texture;
		uint32_t height = 0;
		uint32_t width = 0;
		uint32_t surface_size = 0;
		uint32_t depth = 0;
		uint32_t mip_map_count = 1;
		std::array<uint32_t, 11> reserved1 = {};

		struct {
			uint32_t size = 32;
			dds_pixel_format_flags flags = dds_pixel_format_flags::four_cc;
			uint32_t fourcc = fourcc_dx10;
			uint32_t rgb_bit_count = 0;
			uint32_t r_bit_mask = 0;
			uint32_t g_bit_mask = 0;
			uint32_t b_bit_mask = 0;
			uint32_t a_bit_mask = 0;
		} pixel_format;

		dds_caps caps = dds_caps::none;
		dds_caps2 caps2 = dds_caps2::none;
		uint32_t caps3 = 0;
		uint32_t caps4 = 0;
		uint32_t reserved2 = 0;
	};

	static_assert(sizeof(dds_header) == 128);

	enum class dx10_resource_dimension : uint32_t {
		unknown = 0,
		buffer = 1,
		texture1d = 2,
		texture2d = 3,
		texture3d = 4,
	};

	enum class dxgi_format : uint32_t {
		unknown = 0,
		r32g32b32a32_typeless = 1,
		r32g32b32a32_float = 2,
		r32g32b32a32_uint = 3,
		r32g32b32a32_sint = 4,
		r32g32b32_typeless = 5,
		r32g32b32_float = 6,
		r32g32b32_uint = 7,
		r32g32b32_sint = 8,
		r16g16b16a16_typeless = 9,
		r16g16b16a16_float = 10,
		r16g16b16a16_unorm = 11,
		r16g16b16a16_uint = 12,
		r16g16b16a16_snorm = 13,
		r16g16b16a16_sint = 14,
		r32g32_typeless = 15,
		r32g32_float = 16,
		r32g32_uint = 17,
		r32g32_sint = 18,
		r32g8x24_typeless = 19,
		d32_float_s8x24_uint = 20,
		r32_float_x8x24_typeless = 21,
		x32_typeless_g8x24_uint = 22,
		r10g10b10a2_typeless = 23,
		r10g10b10a2_unorm = 24,
		r10g10b10a2_uint = 25,
		r11g11b10_float = 26,
		r8g8b8a8_typeless = 27,
		r8g8b8a8_unorm = 28,
		r8g8b8a8_unorm_srgb = 29,
		r8g8b8a8_uint = 30,
		r8g8b8a8_snorm = 31,
		r8g8b8a8_sint = 32,
		r16g16_typeless = 33,
		r16g16_float = 34,
		r16g16_unorm = 35,
		r16g16_uint = 36,
		r16g16_snorm = 37,
		r16g16_sint = 38,
		r32_typeless = 39,
		d32_float = 40,
		r32_float = 41,
		r32_uint = 42,
		r32_sint = 43,
		r24g8_typeless = 44,
		d24_unorm_s8_uint = 45,
		r24_unorm_x8_typeless = 46,
		x24_typeless_g8_uint = 47,
		r8g8_typeless = 48,
		r8g8_unorm = 49,
		r8g8_uint = 50,
		r8g8_snorm = 51,
		r8g8_sint = 52,
		r16_typeless = 53,
		r16_float = 54,
		d16_unorm = 55,
		r16_unorm = 56,
		r16_uint = 57,
		r16_snorm = 58,
		r16_sint = 59,
		r8_typeless = 60,
		r8_unorm = 61,
		r8_uint = 62,
		r8_snorm = 63,
		r8_sint = 64,
		a8_unorm = 65,
		r1_unorm = 66,
		r9g9b9e5_sharedexp = 67,
		r8g8_b8g8_unorm = 68,
		g8r8_g8b8_unorm = 69,
		bc1_typeless = 70,
		bc1_unorm = 71,
		bc1_unorm_srgb = 72,
		bc2_typeless = 73,
		bc2_unorm = 74,
		bc2_unorm_srgb = 75,
		bc3_typeless = 76,
		bc3_unorm = 77,
		bc3_unorm_srgb = 78,
		bc4_typeless = 79,
		bc4_unorm = 80,
		bc4_snorm = 81,
		bc5_typeless = 82,
		bc5_unorm = 83,
		bc5_snorm = 84,
		b5g6r5_unorm = 85,
		b5g5r5a1_unorm = 86,
		b8g8r8a8_unorm = 87,
		b8g8r8x8_unorm = 88,
		r10g10b10_xr_bias_a2_unorm = 89,
		b8g8r8a8_typeless = 90,
		b8g8r8a8_unorm_srgb = 91,
		b8g8r8x8_typeless = 92,
		b8g8r8x8_unorm_srgb = 93,
		bc6h_typeless = 94,
		bc6h_uf16 = 95,
		bc6h_sf16 = 96,
		bc7_typeless = 97,
		bc7_unorm = 98,
		bc7_unorm_srgb = 99,
		ayuv = 100,
		y410 = 101,
		y416 = 102,
		nv12 = 103,
		p010 = 104,
		p016 = 105,
		opaque_420 = 106,
		yuy2 = 107,
		y210 = 108,
		y216 = 109,
		nv11 = 110,
		ai44 = 111,
		ia44 = 112,
		p8 = 113,
		a8p8 = 114,
		b4g4r4a4_unorm = 115,
		p208 = 130,
		v208 = 131,
		v408 = 132
	};

	enum class dx10_misc_flags : uint32_t {
		none = 0,
		generate_mips = 0x1,
		shared = 0x2,
		texturecube = 0x4,
		drawindirect_args = 0x10,
		buffer_allow_raw_views = 0x20,
		buffer_structured = 0x40,
		resource_clamp = 0x80,
		shared_keyedmutex = 0x100,
		gdi_compatible = 0x200,
		shared_nthandle = 0x800,
		restricted_content = 0x1000,
		restrict_shared_resource = 0x2000,
		restrict_shared_resource_driver = 0x4000,
		guarded = 0x8000,
		tile_pool = 0x20000,
		tiled = 0x40000,
		hw_protected = 0x80000,
	};

	inline auto
	operator|(dx10_misc_flags lhs, dx10_misc_flags rhs) -> dx10_misc_flags {
		return static_cast<dx10_misc_flags>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
	}

	enum class dx10_misc_flags2 : uint32_t {
		none = 0x0,
		alpha_mode_straight = 0x1,
		alpha_mode_premultiplied = 0x2,
		alpha_mode_opaque = 0x3,
		alpha_mode_custom = 0x4,
	};

	struct dx10_header {
		dxgi_format format = dxgi_format::unknown;
		dx10_resource_dimension resource_dimension = dx10_resource_dimension::texture2d;
		dx10_misc_flags misc_flag = dx10_misc_flags::none;
		uint32_t array_size = 1;
		dx10_misc_flags2 misc_flags2 = dx10_misc_flags2::none;
	};
} // namespace rivet::support
