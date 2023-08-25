// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <iosfwd>
#include <memory>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet {
	namespace structures {
		struct rivet_archive;
	}
	namespace data {
		struct RIVET_SHARED data_stream_archive { // assumption: dsar = data stream archive
			struct dsar_header {
				uint32_t magic;
				uint16_t version_major;
				uint16_t version_minor;
				rivet_size chunk_count;
				rivet_off first_chunk_offset; // offset of the first chunk
				rivet_size64 total_size; // size of all chunks
				uint64_t padding_value; // PADDING*
			};
			static_assert(offsetof(dsar_header, padding_value) == 24);
			static_assert(sizeof(dsar_header) == 32);

			enum class dsar_compression : uint8_t {
				none = 0,
				unknown = 1, // probably oodle or regular deflate?
				gdeflate = 2,
				lz4 = 3
			};

			struct dsar_entry {
				rivet_off64 offset;
				rivet_off64 compressed_offset;
				rivet_size size;
				rivet_size compressed_size;
				dsar_compression compression_type;
			};
			static_assert(offsetof(dsar_entry, compression_type) == 24);
			static_assert(sizeof(dsar_entry) == 32);

			std::shared_ptr<std::ifstream> base_stream;
			std::weak_ptr<rivet::structures::rivet_archive> archive;
			dsar_header header{};
			std::shared_ptr<rivet_array<dsar_entry, RIVET_ALIGNMENT>> chunks;

			explicit RIVET_DECL data_stream_archive(std::filesystem::path &root, std::shared_ptr<rivet::structures::rivet_archive> &archive);
			RIVET_DELETE_COPY(data_stream_archive)

			[[nodiscard]] std::shared_ptr<rivet_data_array> read_file(rivet_asset_id id) const;
		};
	}
}
