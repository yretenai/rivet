// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <iosfwd>
#include <memory>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet {
	namespace structures {
		struct rivet_asset;
		struct rivet_archive;
	} // namespace structures

	namespace data {
		struct RIVET_SHARED data_stream_archive { // assumption: dsar = data stream archive
			struct dsar_header {
				uint32_t magic;
				uint16_t version_major;
				uint16_t version_minor;
				rivet_size chunk_count;
				rivet_soff first_chunk_offset; // offset of the first chunk
				rivet_size64 total_size; // size of all chunks
				uint64_t padding_value; // PADDING*
			};
			static_assert(sizeof(dsar_header) == 32);

			enum class dsar_compression : uint8_t {
				none = 0,
				unknown = 1, // probably oodle or regular deflate?
				gdeflate = 2,
				lz4 = 3
			};

			struct dsar_entry {
				rivet_soff64 offset;
				rivet_soff64 compressed_offset;
				rivet_size size;
				rivet_size compressed_size;
				dsar_compression compression_type;
			};
			static_assert(sizeof(dsar_entry) == 32);

			std::shared_ptr<std::ifstream> base_stream;
			std::weak_ptr<rivet::structures::rivet_archive> archive;
			dsar_header header{};
			std::shared_ptr<rivet_array<dsar_entry>> chunks;
			bool is_compressed;
			bool exists;

			explicit RIVET_ABI data_stream_archive(const std::filesystem::path &root,
												   const std::shared_ptr<rivet::structures::rivet_archive> &archive);

			[[nodiscard]] std::shared_ptr<rivet_data_array>
			RIVET_ABI read_file(const std::shared_ptr<rivet::structures::rivet_asset> &asset) const;
		};
	} // namespace data
} // namespace rivet
