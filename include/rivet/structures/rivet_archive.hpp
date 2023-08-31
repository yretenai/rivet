// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace rivet {
	namespace data {
		struct data_stream_archive;
	} // namespace data

	namespace structures {
		struct rivet_asset;

#pragma pack(push, 1)

		struct rivet_archive_raw {
			std::array<char, 0x30> name;
			uint64_t time;
			uint32_t version;
			uint32_t unknown;
			uint16_t load_priority;
		};

		static_assert(sizeof(rivet_archive_raw) == 0x42);

		struct rivet_archive_raw_spider {
			uint32_t install_id;
			uint32_t chunk_id;
			std::array<char, 0x40> name;
		};

		static_assert(sizeof(rivet_archive_raw_spider) == 0x48);
#pragma pack(pop)

		struct rivet_archive {
			std::string_view name;
			uint64_t time;
			uint32_t version;
			uint32_t unknown;
			uint16_t load_priority;

			std::shared_ptr<rivet::data::data_stream_archive> data_stream;
		};
	} // namespace structures
} // namespace rivet
