// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <filesystem>
#include <memory>
#include <fstream>

#include <rivet/data/dsar.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::data {
	rivet::data::data_stream_archive::data_stream_archive(std::filesystem::path &root, std::shared_ptr<rivet::structures::rivet_archive> &archive) : archive(archive) {
		base_stream = std::make_shared<std::ifstream>();
		base_stream->open(root / archive->name, std::ifstream::in | std::ifstream::binary);

		header = {};
		base_stream->read(reinterpret_cast<char *>(&header), sizeof(dsar_header));

		if (header.magic != 0x52415344) {
			throw invalid_tag_error();
		}

		if (header.version_major != 3 && header.version_minor != 1) {
			throw invalid_version_error();
		}

		chunks = std::make_shared<rivet_array<dsar_entry, RIVET_ALIGNMENT>>(nullptr, header.chunk_count);
		base_stream->read(reinterpret_cast<char *>(chunks->data()), static_cast<std::streamsize>(chunks->byte_size()));
	}

	std::shared_ptr<rivet_data_array> data_stream_archive::read_file(rivet_asset_id id) const {
		// todo: find start chunk
		// todo: decompress start chunk + next until size is satisfied
		return nullptr;
	}
}
