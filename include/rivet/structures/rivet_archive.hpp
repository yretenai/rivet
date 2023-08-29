// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>

namespace rivet {
	namespace data {
		struct data_stream_archive;
	} // namespace data

	namespace structures {
		struct rivet_asset;

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
