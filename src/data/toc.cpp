// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>
#include <string>
#include <map>

#include <rivet/data/toc.hpp>
#include <rivet/rivet_keywords.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet::data {
#pragma pack(push, 1)
	struct rivet_asset_raw {
		rivet_size size;
		uint32_t archive_id;
		rivet_off archive_offset;
		rivet_off metadata_offset;
	};
	static_assert(sizeof(rivet_asset_raw) == 16);

	struct rivet_archive_raw {
		const char name[0x30];
		uint64_t time;
		uint32_t version;
		uint32_t unknown;
		uint16_t load_priority;
	};
	static_assert(sizeof(rivet_archive_raw) == 0x42);
#pragma pack(pop)

	archive_toc::archive_toc(std::shared_ptr<rivet_data_array> &&stream) : dat1(stream->slice(0x8)) {
		if (header.type_id != type_id) {
			throw invalid_tag_error();
		}

		toc_header = stream->get<archive_toc_header>(0);
		if (toc_header.type_id != magic) {
			throw invalid_tag_error();
		}

		auto version_section = get_section_data(section_version);
		auto archives_section = get_section<rivet_archive_raw>(section_archives);
		auto ids_section = get_section<rivet_asset_id>(section_ids);
		auto assets_section = get_section<rivet_asset_raw>(section_assets);

		// optional
		auto groups_section = get_section<std::pair<uint32_t, uint32_t>>(section_groups);
		auto localized_ids_section = get_section<rivet_asset_id>(section_localized_ids);
		auto chunks_section = get_section<rivet_asset_chunk>(section_chunks);

		if (version_section == nullptr) {
			version = version_section->get<uint32_t>(0);
		}

		if (archives_section == nullptr) {
			throw mismatched_data_error("missing archives section");
		}

		if (groups_section != nullptr && groups_section->size() != 0x100) {
			throw mismatched_data_error("not 256 groups!");
		}

		if (ids_section == nullptr) {
			throw mismatched_data_error("ids groups");
		}

		if (assets_section == nullptr) {
			throw mismatched_data_error("assets");
		}

		if (ids_section->size() > assets_section->size()) {
			throw mismatched_data_error("id count does not match asset count");
		}

		for (auto archive_entry: *archives_section) {
			archives.emplace_back(std::make_shared<rivet_archive>(rivet_archive{
					std::string(archive_entry.name),
					archive_entry.time,
					archive_entry.version,
					archive_entry.unknown,
					archive_entry.load_priority,
					{}
			}));
		}

		std::map<rivet_asset_id, rivet_asset_chunk> chunk_map;
		if (localized_ids_section != nullptr && chunks_section != nullptr) {
			if (localized_ids_section->size() != chunks_section->size()) {
				throw mismatched_data_error("streamed id count does not match chunk count");
			}

			for (rivet_size i = 0; i < localized_ids_section->size(); ++i) {
				chunk_map[localized_ids_section->get(i)] = chunks_section->get(i);
			}
		}

		for (rivet_size i = 0; i < ids_section->size(); ++i) {
			auto full_id = ids_section->get(i);
			auto id = full_id & 0xbfffffffffffffff; // strip localized flag.

			auto info = assets_section->get(i);
			std::shared_ptr<rivet_asset> parent = nullptr;
			if (asset_lookup.find(id) != asset_lookup.end()) {
				if((full_id & 0x4000000000000000) != 0) {
					continue;
				}

				parent = asset_lookup.at(id).lock();
			}

			rivet_size group_id = -1;

			if (groups_section != nullptr) {
				for (rivet_size j = 0; j < 0x100; ++j) {
					auto range = groups_section->get(j);
					if (range.second == 0) {
						continue;
					}

					if (j >= range.first && j < range.first + range.second) {
						group_id = j;
						break;
					}
				}
			}

			auto archive = archives[info.archive_id];
			auto chunk_entry = chunk_map.find(id);
			auto asset = std::make_shared<rivet_asset>(rivet_asset{
					full_id,

					info.size,
					info.archive_offset,
					info.metadata_offset,
					archive,
					(uint8_t) group_id,
					chunk_entry != chunk_map.end(),
					chunk_entry->second,

					0,
					{},
					{},
					rivet_asset_type::NONE,

					{}
			});

			archive->assets.emplace_back(asset);

			if(parent != nullptr) {
				parent->subfiles.emplace_back(asset);
			} else {
				asset_lookup.emplace(id, asset);
			}
		}
	}
}
