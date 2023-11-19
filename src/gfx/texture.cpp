// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <algorithm>
#include <csetjmp>
#include <filesystem>
#include <memory>
#include <tuple>
#include <vector>

#include <compressonator.h>
#include <png.h>
#include <tiff.h>
#include <tiffio.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/gfx/texture.hpp>
#include <rivet/hash/type_id_registry.hpp>
#include <rivet/support/dxgi.hpp>

using namespace rivet::data;
using namespace rivet::support;
using namespace rivet::type_id;

namespace rivet::gfx {
	texture::texture(const rivet::data::asset_bundle &bundle, const rivet_size index) {
		const auto dat1_stream = bundle.get_entry(index);
		if (dat1_stream == nullptr) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		init(dat1_stream, bundle.get_entry(index + 1));
	}

	void
	texture::init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident, const std::shared_ptr<rivet_data_array> &stream) {
		const auto data = dat1(dat1_stream);
		if (data.type_name != "Texture Built File") {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		const auto header_stream = data.get_section<texture::texture_header>(texture_header_type_id);
		if (header_stream == nullptr) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		if (header_stream->empty()) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		header = header_stream->get<texture::texture_header>(0);
		if (resident != nullptr) {
			provide_resident(resident);
		}

		if (stream_buffer != nullptr) {
			provide_stream(stream);
		}
	}

	void
	texture::provide_stream(const std::shared_ptr<rivet_data_array> &stream) {
		if (stream->size() < header.stream_size) {
			throw invalid_operation("texture::provide_stream: stream too short");
		}

		stream_buffer = stream;
	}

	void
	texture::provide_resident(const std::shared_ptr<rivet_data_array> &stream) {
		if (stream->size() < header.resident_size) {
			throw invalid_operation("texture::provide_resident: stream too short");
		}

		resident_buffer = stream;
	}

	auto
	texture::is_convertible() const -> bool {
		switch (static_cast<dxgi_format>(header.format)) {
			case dxgi_format::bc1_unorm:
			case dxgi_format::bc1_unorm_srgb:
			case dxgi_format::bc2_unorm:
			case dxgi_format::bc2_unorm_srgb:
			case dxgi_format::bc3_unorm:
			case dxgi_format::bc3_unorm_srgb:
			case dxgi_format::bc4_unorm:
			case dxgi_format::bc4_snorm:
			case dxgi_format::bc5_unorm:
			case dxgi_format::bc5_snorm:
			case dxgi_format::bc6h_uf16:
			case dxgi_format::bc6h_sf16:
			case dxgi_format::bc7_unorm:
			case dxgi_format::bc7_unorm_srgb:
			case dxgi_format::r8g8b8a8_unorm:
			case dxgi_format::r8g8b8a8_unorm_srgb:
			case dxgi_format::r8g8b8a8_snorm:
			case dxgi_format::r8g8b8a8_sint:
			case dxgi_format::r16g16b16a16_float:
			case dxgi_format::r32g32b32a32_float:
			case dxgi_format::a8_unorm:
			case dxgi_format::r8_unorm:
			case dxgi_format::r8_snorm:
			case dxgi_format::r16_float:
			case dxgi_format::r32_float:
			case dxgi_format::r8g8_unorm:
			case dxgi_format::r8g8_snorm:
			case dxgi_format::r16g16_float:
			case dxgi_format::r32g32_float:
			case dxgi_format::r10g10b10a2_unorm:
			case dxgi_format::r10g10b10a2_uint:
			case dxgi_format::r16g16_unorm:
			case dxgi_format::r16g16_snorm:
			case dxgi_format::b8g8r8a8_unorm:
			case dxgi_format::b8g8r8a8_unorm_srgb:
			case dxgi_format::b8g8r8x8_unorm:
			case dxgi_format::b8g8r8x8_unorm_srgb: return true;

			default: return false;
		}
	}

	auto
	get_cmp_format(const dxgi_format dxgi) -> CMP_FORMAT {
		switch (dxgi) {
			case dxgi_format::bc1_unorm:
			case dxgi_format::bc1_unorm_srgb: return CMP_FORMAT_BC1;

			case dxgi_format::bc2_unorm:
			case dxgi_format::bc2_unorm_srgb: return CMP_FORMAT_BC2;

			case dxgi_format::bc3_unorm:
			case dxgi_format::bc3_unorm_srgb: return CMP_FORMAT_BC3;

			case dxgi_format::bc4_unorm:
			case dxgi_format::bc4_snorm: return CMP_FORMAT_BC4;

			case dxgi_format::bc5_unorm:
			case dxgi_format::bc5_snorm: return CMP_FORMAT_BC5;

			case dxgi_format::bc6h_uf16:
			case dxgi_format::bc6h_sf16: return CMP_FORMAT_BC6H;

			case dxgi_format::bc7_unorm:
			case dxgi_format::bc7_unorm_srgb: return CMP_FORMAT_BC7;

			case dxgi_format::r8g8b8a8_unorm:
			case dxgi_format::r8g8b8a8_unorm_srgb: return CMP_FORMAT_RGBA_8888;

			case dxgi_format::r8g8b8a8_snorm:
			case dxgi_format::r8g8b8a8_sint: return CMP_FORMAT_RGBA_8888_S;

			case dxgi_format::r16g16b16a16_float: return CMP_FORMAT_RGBA_16F;

			case dxgi_format::r32g32b32a32_float: return CMP_FORMAT_RGBA_32F;

			case dxgi_format::a8_unorm:
			case dxgi_format::r8_unorm: return CMP_FORMAT_R_8;

			case dxgi_format::r8_snorm: return CMP_FORMAT_R_8_S;

			case dxgi_format::r16_float: return CMP_FORMAT_R_16F;

			case dxgi_format::r32_float: return CMP_FORMAT_R_32F;

			case dxgi_format::r8g8_unorm: return CMP_FORMAT_RG_8;

			case dxgi_format::r8g8_snorm: return CMP_FORMAT_RG_8_S;

			case dxgi_format::r16g16_float: return CMP_FORMAT_RG_16F;

			case dxgi_format::r32g32_float: return CMP_FORMAT_RG_32F;

			case dxgi_format::r10g10b10a2_unorm:
			case dxgi_format::r10g10b10a2_uint: return CMP_FORMAT_RGBA_1010102;

			case dxgi_format::r16g16_unorm:
			case dxgi_format::r16g16_snorm: return CMP_FORMAT_RG_16;

			case dxgi_format::b8g8r8a8_unorm:
			case dxgi_format::b8g8r8a8_unorm_srgb:
			case dxgi_format::b8g8r8x8_unorm:
			case dxgi_format::b8g8r8x8_unorm_srgb: return CMP_FORMAT_BGRA_8888;

			default: throw invalid_operation("texture::decompress_compressonator: unsupported texture format");
		}
	}

	// tuple(bits_per_block, pixels_per_block)
	auto
	get_pitch_factor(const dxgi_format dxgi) -> std::tuple<rivet_size, rivet_size> {
		switch (dxgi) {
			case dxgi_format::bc1_unorm:
			case dxgi_format::bc1_unorm_srgb:
			case dxgi_format::bc2_unorm:
			case dxgi_format::bc2_unorm_srgb: return std::make_tuple(64, 16);

			case dxgi_format::bc3_unorm:
			case dxgi_format::bc3_unorm_srgb: return std::make_tuple(16, 16);

			case dxgi_format::bc4_unorm:
			case dxgi_format::bc4_snorm: return std::make_tuple(64, 16);

			case dxgi_format::bc5_unorm:
			case dxgi_format::bc5_snorm:
			case dxgi_format::bc6h_uf16:
			case dxgi_format::bc6h_sf16:
			case dxgi_format::bc7_unorm:
			case dxgi_format::bc7_unorm_srgb: return std::make_tuple(128, 16);

			case dxgi_format::a8_unorm:
			case dxgi_format::r8_unorm:
			case dxgi_format::r8_snorm: return std::make_tuple(8, 1);

			case dxgi_format::r8g8_unorm:
			case dxgi_format::r8g8_snorm:
			case dxgi_format::r16_float: return std::make_tuple(16, 1);

			case dxgi_format::r8g8b8a8_unorm:
			case dxgi_format::r8g8b8a8_unorm_srgb:
			case dxgi_format::r8g8b8a8_snorm:
			case dxgi_format::r8g8b8a8_sint:
			case dxgi_format::r32_float:
			case dxgi_format::r16g16_float:
			case dxgi_format::r10g10b10a2_unorm:
			case dxgi_format::r10g10b10a2_uint:
			case dxgi_format::r16g16_unorm:
			case dxgi_format::r16g16_snorm:
			case dxgi_format::b8g8r8a8_unorm:
			case dxgi_format::b8g8r8a8_unorm_srgb:
			case dxgi_format::b8g8r8x8_unorm:
			case dxgi_format::b8g8r8x8_unorm_srgb: return std::make_tuple(32, 1);

			case dxgi_format::r16g16b16a16_float:
			case dxgi_format::r32g32_float: return std::make_tuple(64, 1);

			case dxgi_format::r32g32b32a32_float: return std::make_tuple(128, 1);

			default: throw invalid_operation("texture::decompress_compressonator: unsupported texture format");
		}
	}

	auto
	texture::decompress_compressonator(uint32_t target, const uint32_t surface) const -> std::shared_ptr<rivet_data_array> {
		auto num_mips = header.mip_count;
		const auto has_stream = needs_stream() && stream_buffer != nullptr;
		if (!has_stream) {
			num_mips -= header.streamed_mips;
		} else {
			num_mips = header.streamed_mips;
		}

		const auto pixel_data = has_stream ? stream_buffer : resident_buffer;

		auto texture = CMP_Texture {};
		texture.dwSize = sizeof(CMP_Texture);
		texture.dwWidth = header.resident_width;
		texture.dwHeight = header.resident_height;
		if (has_stream) {
			texture.dwWidth = header.stream_width;
			texture.dwHeight = header.stream_height;
		}
		const auto dxgi = static_cast<dxgi_format>(header.format);
		texture.format = get_cmp_format(dxgi);

		if (surface > 0) {
			auto one_surface = 0u;
			rivet_size bits_per_block = 0;
			rivet_size pixels_per_block = 0;
			std::tie(bits_per_block, pixels_per_block) = get_pitch_factor(dxgi);

			// this will always work as long as width and height are stable powers of 2, you're welcome
			auto mask = (texture.dwWidth * texture.dwHeight / pixels_per_block * bits_per_block) >> 3u;
			for (auto i = 0; i < num_mips; ++i) {
				one_surface ^= mask; // maybe use += instead of ^= for non-power-of-2?
				mask >>= 2u;
			}

			texture.dwDataSize = one_surface;
			const auto offset = one_surface * surface;
			texture.pData = pixel_data->data(offset);
		} else {
			texture.dwDataSize = static_cast<CMP_DWORD>(pixel_data->size());
			texture.pData = pixel_data->data();
		}

		auto dest_texture = CMP_Texture {};
		dest_texture.dwSize = sizeof(CMP_Texture);
		dest_texture.dwWidth = texture.dwWidth;
		dest_texture.dwHeight = texture.dwHeight;
		dest_texture.format = static_cast<CMP_FORMAT>(target);
		dest_texture.dwDataSize = CMP_CalculateBufferSize(&dest_texture);
		auto array = std::make_shared<rivet_data_array>(nullptr, dest_texture.dwDataSize);
		dest_texture.pData = array->data();

		if (CMP_ConvertTexture(&texture, &dest_texture, nullptr, nullptr) != CMP_OK) {
			throw invalid_operation("texture::decompress_compressonator: failed to decompress texture");
		}

		return array;
	}

	void
	png_write_data(const png_structp png_ptr, const png_bytep data, const png_size_t length) {
		auto *array = static_cast<std::vector<uint8_t> *>(png_get_io_ptr(png_ptr));
		array->insert(array->end(), data, data + length);
	}

	auto
	texture::to_png(const rivet_index surface_index) const -> std::shared_ptr<rivet_data_array> {
		const auto has_stream = needs_stream() && stream_buffer != nullptr;
		const auto hdr = is_hdr();
		const auto array = decompress_compressonator(hdr ? CMP_FORMAT_RGBA_16 : CMP_FORMAT_RGBA_8888, surface_index);

		auto *png = png_create_write_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
		if (png == nullptr) {
			throw invalid_operation("texture::to_png: failed to create png write struct");
		}

		auto *info = png_create_info_struct(png);
		if (info == nullptr) {
			png_destroy_write_struct(&png, nullptr);
			throw invalid_operation("texture::to_png: failed to create png info struct");
		}

		if (setjmp(png_jmpbuf(png))) { // NOLINT(*-pro-bounds-array-to-pointer-decay, *-err52-cpp, *-no-array-decay)
			png_destroy_write_struct(&png, &info);
			throw invalid_operation("texture::to_png: failed to setjmp");
		}

		const auto width = has_stream ? header.stream_width : header.resident_width;
		const auto height = has_stream ? header.stream_height : header.resident_height;

		const auto png_data = std::make_shared<std::vector<uint8_t>>();
		png_set_write_fn(png, png_data.get(), png_write_data, nullptr);
		const auto stride = hdr ? 8u : 4u;
		png_set_IHDR(png, info, width, height, static_cast<int>(stride << 1u), PNG_COLOR_TYPE_RGBA, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT); // NOLINT(*-signed-bitwise)
		png_write_info(png, info);
		for (rivet_size64 row = 0; row < height; row++) {
			png_write_row(png, array->data(static_cast<rivet_size64>(row * width * stride)));
		}
		png_write_end(png, nullptr);
		png_destroy_write_struct(&png, &info);

		return rivet_data_array::from_vector(*png_data);
	}

	// because meson does not support libtiffxx, and I don't have the energy to fix it we're using the fopen C API
	// the alternative is hacking together a streamable TIFF writer, which is not something I want to do right now.
	void
	texture::to_tiff(const rivet_index surface_index, const std::filesystem::path &path) const {
		const auto has_stream = needs_stream() && stream_buffer != nullptr;
		const auto hdr = is_hdr();

		auto *tiff = TIFFOpen(path.string().c_str(), "w");
		if (tiff == nullptr) {
			throw invalid_operation("texture::to_tiff: failed to create tiff stream");
		}

		const auto width = has_stream ? header.stream_width : header.resident_width;
		const auto height = has_stream ? header.stream_height : header.resident_height;
		const tmsize_t stride = hdr ? 32 : 4;

		const auto num_dirs = surface_index == rivet_unknown ? 1 : header.surface_count;
		for (auto page = 0; page < num_dirs; ++page) {
			TIFFSetField(tiff, TIFFTAG_IMAGEWIDTH, width);											 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_IMAGELENGTH, height);										 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_ROWSPERSTRIP, height);										 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_SAMPLESPERPIXEL, 4);											 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_BITSPERSAMPLE, hdr ? 16 : 8);								 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_SAMPLEFORMAT, hdr ? SAMPLEFORMAT_IEEEFP : SAMPLEFORMAT_UINT); // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_ORIENTATION, ORIENTATION_TOPLEFT);							 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_PLANARCONFIG, PLANARCONFIG_CONTIG);							 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_PHOTOMETRIC, hdr ? PHOTOMETRIC_LOGL : PHOTOMETRIC_RGB);		 // NOLINT(*-vararg)
			TIFFSetField(tiff, TIFFTAG_COMPRESSION, COMPRESSION_NONE);								 // NOLINT(*-vararg)

			const auto surface = surface_index == rivet_unknown ? surface_index : page;
			const auto array = decompress_compressonator(hdr ? CMP_FORMAT_RGBA_16F : CMP_FORMAT_RGBA_8888, surface);
			TIFFWriteEncodedStrip(tiff, 0, array->data(), static_cast<tmsize_t>(width) * static_cast<tmsize_t>(height) * stride);
			TIFFWriteDirectory(tiff);
		}

		TIFFClose(tiff);
	}

	auto
	texture::to_dds() const -> std::shared_ptr<rivet_data_array> {
		auto num_mips = header.mip_count;
		const auto has_stream = needs_stream() && stream_buffer != nullptr;
		if (!has_stream) {
			num_mips -= header.streamed_mips;
		}

		// stream has mipmaps, which means surface 0 will have its mips overlap into surface 1 (because they're in resident)
		const auto stream_only = has_stream && header.surface_count > 1;
		if (stream_only) {
			num_mips = header.streamed_mips;
		}

		const auto pixel_data = stream_only ? stream_buffer : resident_buffer;

		if (pixel_data == nullptr) {
			throw invalid_operation("texture::to_dds: invalid texture stream");
		}

		if (pixel_data->size() < header.resident_size) {
			throw invalid_operation("texture::to_dds: texture data too short?");
		}

		dds_header dds = {};
		dx10_header dx10 = {};

		dds.height = has_stream ? header.stream_height : header.resident_height;
		dds.width = has_stream ? header.stream_width : header.resident_width;
		dds.mip_map_count = num_mips;
		dx10.format = static_cast<dxgi_format>(header.format);
		dx10.array_size = header.surface_count;

		auto buffer_size = sizeof(dds_header) + sizeof(dx10_header);
		if (has_stream) {
			buffer_size += header.stream_size;
		}

		if (!stream_only) {
			buffer_size += header.resident_size;
		}

		auto buffer = std::make_shared<rivet_data_array>(nullptr, buffer_size);
		buffer->set<dds_header>(0, dds);
		buffer->set<dx10_header>(sizeof(dds_header), dx10);
		rivet_size resident_offset = 0;
		if (has_stream) {
			resident_offset = sizeof(dds_header) + sizeof(dx10_header) + header.stream_size;
			stream_buffer->copy_to(buffer, 0, header.stream_size, sizeof(dds_header) + sizeof(dx10_header));
		}

		if (!stream_only) {
			pixel_data->copy_to(buffer, 0, header.resident_size, resident_offset);
		}

		return buffer;
	}
} // namespace rivet::gfx
