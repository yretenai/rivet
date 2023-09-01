// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/dat1.hpp>
#include <rivet/gfx/support/dxgi.hpp>
#include <rivet/gfx/texture.hpp>
// #include <libpng.h>
// #include <libtiff.h>

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
	texture::to_png(rivet_index surface_index) const -> std::shared_ptr<rivet_data_array> {
		auto num_mips = header.mip_count;
		if (needs_stream() && stream_buffer == nullptr) {
			num_mips -= header.streamed_mips;
		}

		auto pixel_data = resident_buffer;

		throw not_implemented_error("texture::to_png: not implemented");
	}

	auto
	texture::to_tiff(rivet_index surface_index) const -> std::shared_ptr<rivet_data_array> {
		auto num_mips = header.mip_count;
		if (needs_stream() && stream_buffer == nullptr) {
			num_mips -= header.streamed_mips;
		}

		auto pixel_data = resident_buffer;

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