// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/asset_bundle.h>
#include <rivet/exceptions.hpp>

namespace rivet::data {
	asset_bundle::asset_bundle(const std::shared_ptr<rivet_data_array> &stream): buffer(stream) {
		if (stream->size() < sizeof(rivet::structures::rivet_asset_header)) {
			throw rivet::invalid_operation();
		}

		header = stream->get<rivet::structures::rivet_asset_header>(0);
		auto start_offset = sizeof(rivet::structures::rivet_asset_header);

		if (header.schema == 0x8F53A199) { // todo: replace 0x8F53A199 with rivet::gfx::texture::type_id
			texture_header = stream->get<rivet::structures::rivet_asset_texture_header>(start_offset);
			start_offset += sizeof(rivet::structures::rivet_asset_texture_header);
		}

		buffer = stream->slice(start_offset);

		auto excess_data_size = buffer->size();
		for (auto size : header.sizes) {
			excess_data_size -= size;
		}

		if (excess_data_size > 0) {
			header.sizes[header.sizes.size() - 1] += excess_data_size;
		}
	}

	auto
	asset_bundle::get_entry(rivet_index index) const -> std::shared_ptr<rivet_data_array> {
		if (index > header.sizes.size()) {
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
