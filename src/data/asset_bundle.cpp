// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <memory>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/gfx/texture.hpp>

namespace rivet::data {
	asset_bundle::asset_bundle(const std::shared_ptr<rivet_data_array> &stream): buffer(stream) {
		if (stream->size() < 4) {
			throw rivet::invalid_operation("asset_bundle::asset_bundle: invalid stream");
		}

		if (stream->get<rivet_type_id>(0) == rivet::data::dat1::magic) {
			const auto [magic, schema, size, section_count, reserved] = stream->get<rivet::data::dat1::dat1_header>(0);
			header.schema = schema;
			header.sizes[0] = size;
			buffer = stream;
			return;
		}

		if (stream->size() < sizeof(rivet::structures::rivet_asset_header)) {
			throw rivet::invalid_operation("asset_bundle::asset_bundle: invalid stream");
		}

		header = stream->get<rivet::structures::rivet_asset_header>(0);
		auto start_offset = sizeof(rivet::structures::rivet_asset_header);

		if (header.schema == rivet::gfx::texture::type_id) {
			texture_header = stream->get<rivet::structures::rivet_asset_texture_header>(start_offset);
			start_offset += sizeof(rivet::structures::rivet_asset_texture_header);
		}

		buffer = stream->slice(start_offset);

		auto excess_data_size = static_cast<rivet_ssize64>(buffer->size());
		for (auto &size : header.sizes) {
			if (excess_data_size <= 0) {
				size = 0;
				continue;
			}

			excess_data_size -= size;
		}

		if (excess_data_size > 0) {
			header.sizes[header.sizes.size() - 1] += static_cast<rivet_size>(excess_data_size);
		}
	}

	auto
	asset_bundle::get_entry(const rivet_index index) const -> std::shared_ptr<rivet_data_array> {
		if (index >= header.sizes.size()) {
			return nullptr;
		}

		if (header.sizes[index] == 0) {
			return nullptr;
		}

		rivet_size offset = 0;
		for (rivet_index i = 0; i < index; i++) {
			offset += header.sizes[i];
		}

		if (offset + header.sizes[index] > buffer->size()) {
			return nullptr;
		}

		return buffer->slice(offset, header.sizes[index]);
	}
} // namespace rivet::data
