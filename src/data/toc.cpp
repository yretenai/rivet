// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>
#include <set>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include <zlib.h>

#include <rivet/data/toc.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_string_pool.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet::data {
	std::shared_ptr<rivet_data_array> get_toc_data_buffer(const std::shared_ptr<rivet_data_array>& stream) {
		if (stream->size() < sizeof(archive_toc::archive_toc_header)) {
			throw invalid_tag_error();
		}

		auto header = stream->get<archive_toc::archive_toc_header>(0);

		if(header.type_id == dat1::magic) {
			return stream;
		}

		if (header.type_id == archive_toc::magic) {
			return stream->slice(sizeof(archive_toc::archive_toc_header));
		} else if (header.type_id == archive_toc::magic_compressed) {
			auto buffer = std::make_shared<rivet_data_array>(nullptr, header.size);

			z_stream zs;
			zs.zalloc = Z_NULL;
			zs.zfree = Z_NULL;
			zs.opaque = Z_NULL;
			zs.avail_in = stream->size() - sizeof(archive_toc::archive_toc_header);
			zs.next_in = stream->data() + sizeof(archive_toc::archive_toc_header);
			zs.avail_out = header.size;
			zs.next_out = buffer->data();

			auto ret = inflateInit(&zs);
			if (ret != Z_OK) {
				throw decompression_error();
			}

			ret = inflate(&zs, Z_PARTIAL_FLUSH);
			if (ret != Z_OK && zs.avail_out != 0 && zs.avail_in != 0) {
				throw decompression_error();
			}

			return buffer;
		}

		throw invalid_tag_error();
	}

	archive_toc::archive_toc(const std::shared_ptr<rivet_data_array> &stream) : dat1(get_toc_data_buffer(stream)) {
		if (header.schema != type_id && header.schema != type_id_spider) {
			throw invalid_tag_error();
		}

		bool is_spider = header.schema == type_id_spider;

		auto textures_header = get_section_data(texture_header_type_id);
		std::shared_ptr<rivet_array<rivet_archive_raw>> archives_section;
		if (is_spider) {
			auto archives_spider_section = get_section<rivet_archive_raw_spider>(archives_type_id);
			if(archives_spider_section == nullptr) {
				throw mismatched_data_error("missing archives section");
			}

			archives_section = std::make_shared<rivet_array<rivet_archive_raw>>(nullptr, archives_spider_section->size());

			for (rivet_size i = 0; i < archives_spider_section->size(); ++i) {
				auto entry = archives_spider_section->get(i);
				auto existing = archives_section->get(i);
				existing.unknown = entry.chunk_id;
				std::memcpy(existing.name, entry.name, sizeof(entry.name));
				archives_section->set(i, existing);
			}
		} else {
			archives_section = get_section<rivet_archive_raw>(archives_type_id);
		}

		auto ids_section = get_section<rivet_asset_id>(ids_type_id);
		std::shared_ptr<rivet_array<rivet_asset_raw>> assets_section;
		if (is_spider) {
			auto assets_spider_section = get_section<rivet_asset_raw_spider>(assets_type_id);
			assets_section = std::make_shared<rivet_array<rivet_asset_raw>>(nullptr, assets_spider_section->size());

			static_assert(sizeof(std::pair<uint32_t, rivet_off>) == 8);
			auto chunk_section = get_section<std::pair<uint32_t, rivet_off>>(archive_asset_offsets_type_id);
			if(chunk_section == nullptr) {
				throw mismatched_data_error("missing chunk section");
			}

			for (rivet_size i = 0; i < assets_spider_section->size(); ++i) {
				auto entry = assets_spider_section->get(i);
				auto existing = assets_section->get(i);
				existing.size = entry.size;
				auto chunk = chunk_section->get(entry.chunk_id);
				existing.archive_id = chunk.first;
				existing.archive_offset = chunk.second;
				existing.metadata_offset = 0xFFFFFFFF;
				assets_section->set(i, existing);
			}
		} else {
			assets_section = get_section<rivet_asset_raw>(assets_type_id);
		}

		// optional
		static_assert(sizeof(std::pair<uint32_t, uint32_t>) == 8);
		auto groups_section = get_section<std::pair<uint32_t, uint32_t>>(header_type_id);
		auto texture_ids = get_section<rivet_asset_id>(texture_ids_type_id);
		auto texture_metas = get_section<rivet_asset_texture_meta>(texture_meta_type_id);
		auto asset_headers = get_section<rivet_asset_header>(asset_headers_type_id);
		auto key_assets = get_section<rivet_asset_id>(key_asset_ids_type_id);

		if (textures_header != nullptr) {
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

		auto archive_index = 0;
		for (auto archive_entry: *archives_section) {
			std::string_view view;
			if (is_spider) {
				auto str = rivet_string_pool::alloc_string(archive_entry.name);
				view = std::string_view(*str);
			} else {
				view = archives_section->to_cstring_view(archive_index++);
			}

			archives.emplace_back(std::make_shared<rivet_archive>(rivet_archive{
					view,
					archive_entry.time,
					archive_entry.version,
					archive_entry.unknown,
					archive_entry.load_priority,
					{}
			}));
		}

		std::unordered_map<rivet_asset_id, rivet_asset_texture_meta> chunk_map;
		if (texture_ids != nullptr && texture_metas != nullptr) {
			if (texture_ids->size() != texture_metas->size()) {
				throw mismatched_data_error("streamed id count does not match chunk count");
			}

			for (rivet_size i = 0; i < texture_ids->size(); ++i) {
				chunk_map[texture_ids->get(i)] = texture_metas->get(i);
			}
		}

		std::set<rivet_asset_id> key_asset_lookup {};
		if(key_assets != nullptr) {
			key_asset_lookup.insert(key_assets->begin(), key_assets->end());
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

			auto is_streamed = chunk_entry != chunk_map.end();

			auto is_key = key_asset_lookup.find(id) != key_asset_lookup.end();

			auto asset = std::make_shared<rivet_asset>(rivet_asset{
				full_id,

				info.size,
				info.archive_offset,
				archive,
				locale,
				category,
				{
					is_raw,
					is_streamed,
					info.metadata_offset != 0xFFFFFFFF,
					false,
					is_key
				},
				is_streamed ? chunk_entry->second : rivet_asset_texture_meta(),
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
