// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <filesystem>
#include <memory>
#include <fstream>

#include <GDeflate.h>
#include <lz4.h>

#include <rivet/data/dsar.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_game.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::data {
	rivet::data::data_stream_archive::data_stream_archive(const std::filesystem::path &root,
														  const std::shared_ptr<rivet::structures::rivet_archive> &archive)
			: archive(archive), exists(true) {
		auto path = root / archive->name;
		if (!std::filesystem::exists(path)) {
			exists = false;
		}
		base_stream = std::make_shared<std::ifstream>(path, std::ios::binary | std::ios::in);

		header = {};
		base_stream->read(reinterpret_cast<char *>(&header), sizeof(dsar_header));
		is_compressed = header.magic == 0x52415344;

		if (!is_compressed) {
			header = {};
			base_stream->seekg(0, std::ios::beg);
			chunks = nullptr;
			return;
		}

		if (header.version_major != 3 && header.version_minor != 1) {
			throw version_not_supported();
		}

		chunks = std::make_shared<rivet_array<dsar_entry, RIVET_ALIGNMENT>>(nullptr, header.chunk_count);
		base_stream->read(reinterpret_cast<char *>(chunks->data()), static_cast<std::streamsize>(chunks->byte_size()));
	}

	std::shared_ptr<rivet_data_array>
	data_stream_archive::read_file(const std::shared_ptr<rivet::structures::rivet_asset> &asset) const {
		if (!exists) {
			return nullptr;
		}

		auto asset_offset = asset->offset;
		auto asset_size = asset->size;
		auto asset_end = asset_offset + asset_size;
		auto buffer = std::make_shared<rivet_data_array>(nullptr, asset_size);

		if (!is_compressed) {
			base_stream->seekg(asset_offset, std::ios::beg);
			base_stream->read(reinterpret_cast<char *>(buffer->data()),
							  static_cast<std::streamsize>(buffer->byte_size()));
			return buffer;
		}

		if (asset_end > header.total_size) {
			throw mismatched_data_error();
		}

		rivet_size chunk_index = 0xFFFFFFFF;

		// find the first chunk that contains the start offset
		for (rivet_size i = 0; i < chunks->size(); i++) {
			const auto &chunk = chunks->get(i);
			if (chunk.offset <= asset_offset && chunk.offset + chunk.size > asset_offset) {
				chunk_index = i;
				break;
			}
		}

		if (chunk_index == 0xFFFFFFFF) {
			throw unreachable_error();
		}

		// main decompression loop
		rivet_size local_offset = 0;
		while (local_offset < asset_size) {
			if (chunk_index > chunks->size()) {
				throw unreachable_error();
			}

			const auto &chunk = chunks->get(chunk_index++);
			auto chunk_offset = chunk.offset;
			auto chunk_size = chunk.size;
			auto chunk_end = chunk_offset + chunk_size;

			auto compressed_offset = chunk.compressed_offset;
			auto compressed_size = chunk.compressed_size;

			if (chunk_offset > asset_end) {
				throw unreachable_error();
			}

			auto chunk_buffer = std::make_shared<rivet_data_array>(nullptr, chunk_size);
			auto compressed_buffer = std::make_shared<rivet_data_array>(nullptr, compressed_size);
			base_stream->seekg(compressed_offset, std::ios::beg);
			base_stream->read(reinterpret_cast<char *>(compressed_buffer->data()),
							  static_cast<std::streamsize>(compressed_buffer->byte_size()));

			switch (chunk.compression_type) {
				case dsar_compression::none:
					throw unreachable_error();
				case dsar_compression::unknown:
					throw not_implemented_error();
				case dsar_compression::gdeflate:
					if (!GDeflate::Decompress(chunk_buffer->data(),
											  static_cast<size_t>(chunk_buffer->byte_size()),
											  compressed_buffer->data(),
											  static_cast<size_t>(compressed_buffer->byte_size()),
											  1)) {
						throw decompression_error();
					}
					break;
				case dsar_compression::lz4:
					auto result = LZ4_decompress_safe(reinterpret_cast<const char *>(compressed_buffer->data()),
													  reinterpret_cast<char *>(chunk_buffer->data()),
													  static_cast<int>(compressed_buffer->byte_size()),
													  static_cast<int>(chunk_buffer->byte_size()));
					if (result < 0) {
						throw decompression_error();
					}
					break;
			}

			rivet_size shift = 0;
			// if this is the first chunk, and the asset offset is not aligned to the chunk offset
			if (local_offset == 0 && chunk_offset < asset_offset) {
				shift = asset_offset - chunk_offset;
				chunk_size -= shift;
			}

			if (chunk_end > asset_end) {
				chunk_size = asset_size - local_offset;
			}

			// oob check
			if (chunk_size > buffer->byte_size() - local_offset) {
				throw unreachable_error();
			}

			chunk_buffer->copy_to(buffer, shift, chunk_size, local_offset);

			local_offset += chunk_size;
		}

		return buffer;
	}
}
