// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma once

#include <cstdint>
#include <string>
#include <memory>
#include <unordered_map>

namespace rivet {
	namespace data {
		struct data_stream_archive;
	}

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
	}
}

#pragma clang diagnostic pop