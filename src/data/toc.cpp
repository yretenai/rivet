// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include <rivet/data/toc.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

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

	archive_toc::archive_toc(const std::shared_ptr<rivet_data_array> &stream) : dat1(stream->slice(0x8)) {
		if (header.type_id != type_id) {
			throw invalid_tag_error();
		}

		toc_header = stream->get<archive_toc_header>(0);
		if (toc_header.type_id != magic) {
			throw invalid_tag_error();
		}

		auto textures_header = get_section_data(section_texture_header);
		auto archives_section = get_section<rivet_archive_raw>(section_archives);
		auto ids_section = get_section<rivet_asset_id>(section_ids);
		auto assets_section = get_section<rivet_asset_raw>(section_assets);

		// optional
		static_assert(sizeof(std::pair<uint32_t, uint32_t>) == 8);
		auto groups_section = get_section<std::pair<uint32_t, uint32_t>>(section_header);
		auto texture_ids = get_section<rivet_asset_id>(section_texture_ids);
		auto texture_metas = get_section<rivet_asset_texture_meta>(section_texture_meta);
		auto metadata_section = get_section<rivet_asset_meta>(section_metadata);

		if (textures_header == nullptr) {
			streamed_texture_count = textures_header->get<uint32_t>(0);
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
					{},
					nullptr
			}));
		}

		std::map<rivet_asset_id, rivet_asset_texture_meta> chunk_map;
		if (texture_ids != nullptr && texture_metas != nullptr) {
			if (texture_ids->size() != texture_metas->size()) {
				throw mismatched_data_error("streamed id count does not match chunk count");
			}

			for (rivet_size i = 0; i < texture_ids->size(); ++i) {
				chunk_map[texture_ids->get(i)] = texture_metas->get(i);
			}
		}

		for (rivet_size i = 0; i < ids_section->size(); ++i) {
			auto full_id = ids_section->get(i);
			auto id = full_id & 0xbfffffffffffffff; // strip localized flag.

			auto info = assets_section->get(i);
			std::shared_ptr<rivet_asset> parent = nullptr;
			bool store_in_archive = true;
			bool is_sub_file = false;
			if (asset_lookup.find(id) != asset_lookup.end()) {
				store_in_archive = false;
				is_sub_file = true;
				if ((full_id & 0x4000000000000000) == 0) {
					parent = asset_lookup.at(id).lock();
					auto parent_archive = parent->archive.lock();
					if (parent_archive == nullptr) {
						throw unreachable_error();
					}

					auto current_archive = archives[info.archive_id];
					if (parent_archive->name != current_archive->name) {
						store_in_archive = true;
					}
				} else {
					throw unreachable_error();
				}
			}

			rivet_size group_id = 0xFFFFFFFF;

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
			rivet_asset_meta meta = {};
			if (info.metadata_offset != 0xFFFFFFFF && metadata_section != nullptr) {
				auto normalized = info.metadata_offset / sizeof(rivet_asset_meta);
				if (normalized < metadata_section->size()) {
					meta = metadata_section->get(normalized);
				}
			}

			auto asset = std::make_shared<rivet_asset>(rivet_asset{
					full_id,

					info.size,
					info.archive_offset,
					archive,
					group_id,
					chunk_entry != chunk_map.end(),
					chunk_entry->second,
					meta,

					{},
					{},
					rivet_asset_type::NONE,

					{},
					is_sub_file
			});

			if (group_id != 0xFFFFFFFF) {
				groups[group_id].emplace_back(asset);
			}

			if (parent != nullptr) {
				parent->sub_files.emplace_back(asset);
			} else if ((full_id & 0x4000000000000000) == 0) {
				asset_lookup.emplace(id, asset);
			}

			if (store_in_archive) {
				archive->assets.emplace(id, asset);
			}
		}
	}
}
