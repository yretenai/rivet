// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <compressonator.h>
#include <png.h>
#include <tiffio.h>

#include <rivet/data/dat1.hpp>
#include <rivet/gfx/support/dxgi.hpp>
#include <rivet/gfx/texture.hpp>

using namespace rivet::data;
using namespace rivet::gfx::support;

namespace rivet::gfx {
	texture::texture(const std::shared_ptr<rivet_data_array> &stream, rivet_size index): texture::texture(rivet::data::asset_bundle(stream), index) { }

	texture::texture(const rivet::data::asset_bundle &bundle, rivet_size index) {
		auto dat1_stream = bundle.get_entry(index);
		if (dat1_stream == nullptr) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		auto buffer = bundle.get_entry(index + 1);
		if (buffer == nullptr) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		init(dat1_stream, buffer);
	}

	void
	texture::init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident, const std::shared_ptr<rivet_data_array> &stream) {
		auto data = dat1(dat1_stream);
		if (data.type_name != "Texture Built File") {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		auto header_stream = data.get_section<texture::texture_header>(texture::texture_header_type_id);
		if (header_stream == nullptr) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		if (header_stream->empty()) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}

		header = header_stream->get<texture::texture_header>(0);
		if (header.resident_size != resident->size()) {
			throw invalid_operation("texture::texture: invalid texture stream");
		}
		resident_buffer = resident;

		if (stream_buffer != nullptr) {
			if (header.stream_size != 0 && header.stream_size != stream_buffer->size()) {
				throw invalid_operation("texture::texture: invalid texture stream");
			}

			if (header.stream_size > 0) {
				stream_buffer = stream;
			}
		}
	}

	void
	texture::provide_stream(const std::shared_ptr<rivet_data_array> &stream) {
		if (stream->size() < header.stream_size) {
			throw invalid_operation("texture::provide_stream: stream too short");
		}

		stream_buffer = stream;
	}

	auto
	texture::decompress_compressonator(uint32_t target) const -> std::shared_ptr<rivet_data_array> {
		auto num_mips = header.mip_count;
		auto has_stream = needs_stream() && stream_buffer != nullptr;
		if (!has_stream) {
			num_mips -= header.streamed_mips;
		}

		auto pixel_data = std::make_shared<rivet_data_array>(nullptr, header.resident_size + (has_stream ? header.stream_size : 0u));
		auto resident_offset = 0u;
		if (has_stream) {
			resident_offset = header.stream_size;
			stream_buffer->copy_to(pixel_data, 0, header.stream_size, 0);
		}
		resident_buffer->copy_to(pixel_data, 0, header.resident_size, resident_offset);

		auto texture = CMP_Texture {};
		texture.dwSize = sizeof(CMP_Texture);
		texture.dwWidth = header.resident_width;
		texture.dwHeight = header.resident_height;
		if (has_stream) {
			texture.dwWidth = header.stream_width;
			texture.dwHeight = header.stream_height;
		}
		auto dxgi = static_cast<dxgi_format>(header.format);
		switch (dxgi) {
			case dxgi_format::bc1_unorm:
			case dxgi_format::bc1_unorm_srgb: texture.format = CMP_FORMAT_BC1; break;

			case dxgi_format::bc2_unorm:
			case dxgi_format::bc2_unorm_srgb: texture.format = CMP_FORMAT_BC2; break;

			case dxgi_format::bc3_unorm:
			case dxgi_format::bc3_unorm_srgb: texture.format = CMP_FORMAT_BC3; break;

			case dxgi_format::bc4_unorm:
			case dxgi_format::bc4_snorm: texture.format = CMP_FORMAT_BC4; break;

			case dxgi_format::bc5_unorm:
			case dxgi_format::bc5_snorm: texture.format = CMP_FORMAT_BC5; break;

			case dxgi_format::bc6h_uf16:
			case dxgi_format::bc6h_sf16: texture.format = CMP_FORMAT_BC6H; break;

			case dxgi_format::bc7_unorm:
			case dxgi_format::bc7_unorm_srgb: texture.format = CMP_FORMAT_BC7; break;

			case dxgi_format::r8g8b8a8_unorm:
			case dxgi_format::r8g8b8a8_unorm_srgb: texture.format = CMP_FORMAT_RGBA_8888; break;

			case dxgi_format::r8g8b8a8_snorm:
			case dxgi_format::r8g8b8a8_sint: texture.format = CMP_FORMAT_RGBA_8888_S; break;

			case dxgi_format::r16g16b16a16_float: texture.format = CMP_FORMAT_RGBA_16F; break;

			case dxgi_format::r32g32b32a32_float: texture.format = CMP_FORMAT_RGBA_32F; break;

			case dxgi_format::a8_unorm:
			case dxgi_format::r8_unorm: texture.format = CMP_FORMAT_R_8; break;

			case dxgi_format::r8_snorm: texture.format = CMP_FORMAT_R_8_S; break;

			case dxgi_format::r16_float: texture.format = CMP_FORMAT_R_16F; break;

			case dxgi_format::r32_float: texture.format = CMP_FORMAT_R_32F; break;

			case dxgi_format::r8g8_unorm: texture.format = CMP_FORMAT_RG_8; break;

			case dxgi_format::r8g8_snorm: texture.format = CMP_FORMAT_RG_8_S; break;

			case dxgi_format::r16g16_float: texture.format = CMP_FORMAT_RG_16F; break;

			case dxgi_format::r32g32_float: texture.format = CMP_FORMAT_RG_32F; break;

			case dxgi_format::r10g10b10a2_unorm:
			case dxgi_format::r10g10b10a2_uint: texture.format = CMP_FORMAT_RGBA_1010102; break;

			case dxgi_format::b8g8r8a8_unorm:
			case dxgi_format::b8g8r8a8_unorm_srgb:
			case dxgi_format::b8g8r8x8_unorm:
			case dxgi_format::b8g8r8x8_unorm_srgb: texture.format = CMP_FORMAT_BGRA_8888; break;

			default:
				throw invalid_operation("texture::decompress_compressonator: unsupported texture format");
		}
		texture.dwDataSize = pixel_data->size();
		texture.pData = pixel_data->data();

		auto dest_texture = CMP_Texture {};
		dest_texture.dwSize = sizeof(CMP_Texture);
		dest_texture.dwWidth = texture.dwWidth;
		dest_texture.dwHeight = texture.dwHeight;
		dest_texture.dwPitch = texture.dwPitch;
		dest_texture.format = static_cast<CMP_FORMAT>(target);
		dest_texture.dwDataSize = CMP_CalculateBufferSize(&dest_texture);
		auto array = std::make_shared<rivet_data_array>(nullptr, dest_texture.dwDataSize);
		dest_texture.pData = array->data();

		auto result = CMP_ConvertTexture(&texture, &dest_texture, nullptr, nullptr);

		if (result != CMP_OK) {
			throw invalid_operation("texture::decompress_compressonator: failed to decompress texture");
		}

		return array;
	}

	void
	png_write_data(png_structp png_ptr, png_bytep data, png_size_t length) {
		auto *array = static_cast<std::vector<uint8_t> *>(png_get_io_ptr(png_ptr));
		array->insert(array->end(), data, data + length);
	}

	auto
	texture::to_png([[maybe_unused]] rivet_index surface_index) const -> std::shared_ptr<rivet_data_array> {
		auto has_stream = needs_stream() && stream_buffer != nullptr;
		auto array = decompress_compressonator(CMP_FORMAT_RGBA_8888);

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

		auto width = has_stream ? header.stream_width : header.resident_width;
		auto height = has_stream ? header.stream_height : header.resident_height;

		auto png_data = std::make_shared<std::vector<uint8_t>>();
		png_set_write_fn(png, png_data.get(), png_write_data, nullptr);
		png_set_IHDR(png, info, width, height, 8, PNG_COLOR_TYPE_RGBA, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
		png_write_info(png, info);
		for (auto row = 0u; row < height; row++) {
			png_write_row(png, array->data() + static_cast<size_t>(row * width * 4)); // NOLINT(*-pro-bounds-pointer-arithmetic)
		}
		png_write_end(png, nullptr);
		png_destroy_write_struct(&png, &info);

		return rivet_data_array::from_vector(*png_data);
	}

	auto
	texture::to_tiff([[maybe_unused]] rivet_index surface_index) const -> std::shared_ptr<rivet_data_array> {
		auto array = decompress_compressonator(CMP_FORMAT_RGBA_16F);

		throw not_implemented_error("texture::to_tiff: not implemented");
	}

	auto
	texture::to_dds() const -> std::shared_ptr<rivet_data_array> {
		auto num_mips = header.mip_count;
		auto has_stream = needs_stream() && stream_buffer != nullptr;
		if (!has_stream) {
			num_mips -= header.streamed_mips;
		}

		auto pixel_data = resident_buffer;

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
		dx10.dxgi_format = static_cast<dxgi_format>(header.format);

		auto buffer_size = sizeof(dds_header) + sizeof(dx10_header) + header.resident_size;
		if (has_stream) {
			buffer_size += header.stream_size;
		}

		auto buffer = std::make_shared<rivet_data_array>(nullptr, buffer_size);
		buffer->set<dds_header>(0, dds);
		buffer->set<dx10_header>(sizeof(dds_header), dx10);
		rivet_size resident_offset = 0;
		if (has_stream) {
			resident_offset = sizeof(dds_header) + sizeof(dx10_header) + header.stream_size;
			stream_buffer->copy_to(buffer, 0, header.stream_size, sizeof(dds_header) + sizeof(dx10_header));
		}

		pixel_data->copy_to(buffer, 0, header.resident_size, resident_offset);

		return buffer;
	}
} // namespace rivet::gfx
