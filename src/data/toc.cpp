// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>
#include <cstring>
#include <memory>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include <zlib.h>

#include <rivet/data/dat1.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/exceptions.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_string_pool.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet::data {
	auto
	archive_toc::get_toc_data_buffer(const std::shared_ptr<rivet_data_array> &stream) -> std::shared_ptr<rivet_data_array> {
		if (stream->size() < sizeof(archive_toc::archive_toc_header)) {
			throw invalid_tag_error();
		}

		auto header = stream->get<archive_toc::archive_toc_header>(0);

		if (header.type_id == dat1::magic) {
			return stream;
		}

		if (header.type_id == archive_toc::magic) {
			return stream->slice(sizeof(archive_toc::archive_toc_header));
		}

		if (header.type_id == archive_toc::magic_compressed) {
			auto buffer = std::make_shared<rivet_data_array>(nullptr, header.size);
			auto slice = stream->slice(sizeof(archive_toc::archive_toc_header));

			z_stream zstream;
			zstream.zalloc = Z_NULL;
			zstream.zfree = Z_NULL;
			zstream.opaque = Z_NULL;
			zstream.avail_in = static_cast<uint32_t>(slice->size());
			zstream.next_in = slice->data();
			zstream.avail_out = header.size;
			zstream.next_out = buffer->data();

			auto ret = inflateInit(&zstream);
			if (ret != Z_OK) {
				throw decompression_error();
			}

			ret = inflate(&zstream, Z_FULL_FLUSH);
			if (ret != Z_OK && zstream.avail_out != 0 && zstream.avail_in != 0) {
				throw decompression_error();
			}

			return buffer;
		}

		throw invalid_tag_error();
	}

	archive_toc::archive_toc(const std::shared_ptr<rivet_data_array> &stream): dat1(get_toc_data_buffer(stream)) {
		if (header.schema != type_id && header.schema != type_id_spider) {
			throw invalid_tag_error();
		}

		const bool is_spider = header.schema == type_id_spider;

		auto textures_header = get_section_data(texture_header_type_id);
		std::shared_ptr<rivet_array<rivet_archive_raw>> archives_section;
		if (is_spider) {
			auto archives_spider_section = get_section<rivet_archive_raw_spider>(archives_type_id);
			if (archives_spider_section == nullptr) {
				throw mismatched_data_error("missing archives section");
			}

			archives_section = std::make_shared<rivet_array<rivet_archive_raw>>(nullptr, archives_spider_section->size());

			for (rivet_size i = 0; i < archives_spider_section->size(); ++i) {
				auto entry = archives_spider_section->get(i);
				auto existing = archives_section->get(i);
				existing.unknown = entry.chunk_id;
				std::copy(entry.name.begin(), entry.name.end(), existing.name.begin());
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
			if (chunk_section == nullptr) {
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
		auto texture_metas = get_section<rivet_asset_texture_header>(texture_meta_type_id);
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
		for (auto archive_entry : *archives_section) {
			std::string_view view;
			if (is_spider) {
				auto str = rivet_string_pool::alloc_string(std::string_view(archive_entry.name.data(), archive_entry.name.size()));
				view = std::string_view(*str);
			} else {
				view = archives_section->to_cstring_view(archive_index++);
			}

			auto archive = std::make_shared<rivet_archive>();
			archive->name = view;
			archive->time = archive_entry.time;
			archive->version = archive_entry.version;
			archive->unknown = archive_entry.unknown;
			archive->load_priority = archive_entry.load_priority;

			archives.emplace_back(archive);
		}

		std::unordered_map<rivet_asset_id, rivet_asset_texture_header> chunk_map;
		if (texture_ids != nullptr && texture_metas != nullptr) {
			if (texture_ids->size() != texture_metas->size()) {
				throw mismatched_data_error("streamed id count does not match chunk count");
			}

			for (rivet_size i = 0; i < texture_ids->size(); ++i) {
				chunk_map[texture_ids->get(i)] = texture_metas->get(i);
			}
		}

		std::set<rivet_asset_id> key_asset_lookup {};
		if (key_assets != nullptr) {
			key_asset_lookup.insert(key_assets->begin(), key_assets->end());
		}

		for (rivet_size i = 0; i < ids_section->size(); ++i) {
			auto full_id = ids_section->get(i);
			auto generic_id = full_id & 0xbfffffff'ffffffff; // strip localized flag.

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
			auto chunk_entry = chunk_map.find(generic_id);
			std::optional<rivet_asset_header> meta;
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
			std::optional<rivet_asset_texture_header> texture_header;
			if (is_streamed) {
				texture_header = chunk_entry->second;
			}

			auto is_key = key_asset_lookup.find(generic_id) != key_asset_lookup.end();

			auto asset = std::make_shared<rivet_asset>();
			asset->id = full_id;
			asset->size = info.size;
			asset->offset = info.archive_offset;
			asset->archive = archive;
			asset->locale = locale;
			asset->category = category;
			asset->flags.is_raw = is_raw;
			asset->flags.is_texture = is_streamed;
			asset->flags.has_header = info.metadata_offset != 0xFFFFFFFF;
			asset->flags.is_virtual = false;
			asset->flags.is_key = is_key;
			asset->texture_header = texture_header;
			asset->header = meta;
			asset->name = std::nullopt;
			asset->dependencies = {};
			asset->type = rivet_asset_type::NONE;

			if (group_id != 0xFFFFFFFF) {
				groups[group_id / 8][(group_id / 2) % 4][is_raw ? 1 : 0].emplace_back(asset);
			}

			if (asset_lookup.find(generic_id) == asset_lookup.end()) {
				asset_lookup[generic_id] = {};
			}
			asset_lookup[generic_id].emplace_back(asset);
		}
	}

	auto
	archive_toc::get_group(rivet_locale locale, rivet_asset_category category, bool raw) const -> std::vector<std::shared_ptr<rivet::structures::rivet_asset>> {
		if (locale >= rivet_locale::Max) {
			return {};
		}

		if (category >= rivet_asset_category::Max) {
			return {};
		}

		return groups[static_cast<int32_t>(locale)][static_cast<int32_t>(category)][raw ? 1 : 0];
	}

	auto
	archive_toc::get_asset(rivet_asset_id asset_id, rivet_locale locale, rivet_asset_category category, bool raw) const -> std::shared_ptr<rivet::structures::rivet_asset> {
		if (locale >= rivet_locale::Max) {
			return nullptr;
		}

		if (category >= rivet_asset_category::Max) {
			return nullptr;
		}

		auto find_check = [asset_id](const std::shared_ptr<rivet::structures::rivet_asset> &asset) {
			if (asset == nullptr) {
				return false;
			}

			return asset->id == asset_id;
		};

		auto group = get_group(locale, category, raw);
		auto iter = std::find_if(group.begin(), group.end(), find_check);

		if (iter == group.end()) {
			// fallback to english
			if (locale != rivet_locale::None && locale != rivet_locale::English) {
				locale = rivet_locale::English;
				auto en_group = get_group(locale, category, raw);
				iter = std::find_if(en_group.begin(), en_group.end(), find_check);
				if (iter != en_group.end()) {
					return *iter;
				}
			}

			// fallback to global
			if (locale != rivet_locale::None) {
				locale = rivet_locale::None;
				auto global_group = get_group(locale, category, raw);
				iter = std::find_if(global_group.begin(), global_group.end(), find_check);
				if (iter != global_group.end()) {
					return *iter;
				}
			}

			return nullptr;
		}

		return *iter;
	}
} // namespace rivet::data
