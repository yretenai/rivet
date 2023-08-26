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

		auto textures_header = get_section_data(texture_header_type_id);
		auto archives_section = get_section<rivet_archive_raw>(archives_type_id);
		auto ids_section = get_section<rivet_asset_id>(ids_type_id);
		auto assets_section = get_section<rivet_asset_raw>(assets_type_id);

		// optional
		static_assert(sizeof(std::pair<uint32_t, uint32_t>) == 8);
		auto groups_section = get_section<std::pair<uint32_t, uint32_t>>(header_type_id);
		auto texture_ids = get_section<rivet_asset_id>(texture_ids_type_id);
		auto texture_metas = get_section<rivet_asset_texture_meta>(texture_meta_type_id);
		auto asset_headers = get_section<rivet_asset_header>(asset_headers_type_id);

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
					{}
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

			rivet_size group_id = 0xFFFFFFFF;
			if (groups_section != nullptr) {
				for (rivet_size j = 0; j < 0x100; ++j) {
					auto range = groups_section->get(j);
					if (range.second == 0) {
						continue;
					}

					if (i >= range.first && i < range.first + range.second) {
						group_id = j;
						break;
					}
				}

				if (group_id == 0xFFFFFFFF) {
					throw unreachable_error();
				}
			}

			auto info = assets_section->get(i);
			auto archive = archives[info.archive_id];
			auto chunk_entry = chunk_map.find(id);
			rivet_asset_header meta = {};
			if (info.metadata_offset != 0xFFFFFFFF && asset_headers != nullptr) {
				auto normalized = info.metadata_offset / sizeof(rivet_asset_header);
				if (normalized < asset_headers->size()) {
					meta = asset_headers->get(normalized);
				}
			}

			rivet_locale locale = rivet_locale::None;
			rivet_asset_category category = rivet_asset_category::Game;
			bool is_raw = false;

			if (group_id != 0xFFFFFFFF) {
				locale = static_cast<rivet_locale>(group_id / 8);
				category = static_cast<rivet_asset_category>((group_id / 2) % 4);
				is_raw = group_id % 2 == 1;
			}

			auto asset = std::make_shared<rivet_asset>(rivet_asset{
					full_id,

					info.size,
					info.archive_offset,
					archive,
					locale,
					category,
					is_raw,
					chunk_entry != chunk_map.end(),
					chunk_entry->second,
					meta,

					{},
					{},
					rivet_asset_type::NONE
			});

			if (group_id != 0xFFFFFFFF) {
				groups[group_id / 8][(group_id / 2) % 4][is_raw ? 1 : 0].emplace_back(asset);
			}

			if (asset_lookup.find(id) == asset_lookup.end()) {
				asset_lookup[id] = {};
			}
			asset_lookup[id].emplace_back(asset);
		}
	}

	std::vector<std::shared_ptr<rivet::structures::rivet_asset>>
	archive_toc::get_group(rivet_locale locale, rivet_asset_category category, bool raw) const {
		if(locale >= rivet_locale::Max) {
			return {};
		}

		if(category >= rivet_asset_category::Max) {
			return {};
		}

		return groups[static_cast<int32_t>(locale)][static_cast<int32_t>(category)][raw ? 1 : 0];
	}

	std::shared_ptr<rivet::structures::rivet_asset>
	archive_toc::get_asset(rivet_asset_id id, rivet_locale locale, rivet_asset_category category, bool raw) const {
		if(locale >= rivet_locale::Max) {
			return nullptr;
		}

		if(category >= rivet_asset_category::Max) {
			return nullptr;
		}

		auto find_check = [id](const std::shared_ptr<rivet::structures::rivet_asset> &asset) {
			if(asset == nullptr) {
				return false;
			}

			return asset->id == id;
		};

		auto group = get_group(locale, category, raw);
		auto it = std::find_if(group.begin(), group.end(), find_check);

		if(it == group.end()) {
			// fallback to english
			if(locale != rivet_locale::None && locale != rivet_locale::English) {
				locale = rivet_locale::English;
				auto en_group = get_group(locale, category, raw);
				it = std::find_if(en_group.begin(), en_group.end(), find_check);
				if(it != en_group.end()) {
					return *it;
				}
			}

			// fallback to global
			if(locale != rivet_locale::None) {
				locale = rivet_locale::None;
				auto global_group = get_group(locale, category, raw);
				it = std::find_if(global_group.begin(), global_group.end(), find_check);
				if(it != global_group.end()) {
					return *it;
				}
			}

			return nullptr;
		}

		return *it;
	}
}
