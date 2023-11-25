// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <array>
#include <memory>
#include <optional>
#include <string_view>
#include <unordered_set>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <zlib.h>

#include <rivet/data/dat1.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/hash/type_id_registry.hpp>
#include <rivet/rivet_string_pool.hpp>

using namespace rivet;
using namespace rivet::structures;
using namespace rivet::type_id;

namespace rivet::data {
	auto
	archive_toc::get_toc_data_buffer(const std::shared_ptr<rivet_data_array> &stream) -> std::shared_ptr<rivet_data_array> {
		if (stream->size() < sizeof(archive_toc_header)) {
			throw invalid_tag_error("archive_toc::archive_toc: invalid stream");
		}

		auto [type_id, size] = stream->get<archive_toc_header>(0);

		if (type_id == dat1::magic) {
			return stream;
		}

		if (type_id == magic) {
			return stream->slice(sizeof(archive_toc_header));
		}

		if (type_id == magic_compressed) {
			auto buffer = std::make_shared<rivet_data_array>(nullptr, size);
			const auto slice = stream->slice(sizeof(archive_toc_header));

			z_stream zstream;
			zstream.zalloc = nullptr;
			zstream.zfree = nullptr;
			zstream.opaque = nullptr;
			zstream.avail_in = static_cast<uint32_t>(slice->size());
			zstream.next_in = slice->data();
			zstream.avail_out = size;
			zstream.next_out = buffer->data();

			auto ret = inflateInit(&zstream);
			if (ret != Z_OK) {
				throw decompression_error("archive_toc::get_toc_data_buffer: failed to initialize zlib");
			}

			ret = inflate(&zstream, Z_FULL_FLUSH);
			if (ret != Z_OK && zstream.avail_out != 0 && zstream.avail_in != 0) {
				throw decompression_error("archive_toc::get_toc_data_buffer: failed to inflate zlib");
			}

			return buffer;
		}

		throw invalid_tag_error("archive_toc::get_toc_data_buffer: invalid stream");
	}

	archive_toc::archive_toc(const std::shared_ptr<rivet_data_array> &stream): dat1(get_toc_data_buffer(stream)) {
		if (header.schema != type_id && header.schema != type_id_spider) {
			throw invalid_tag_error("archive_toc::archive_toc: invalid stream");
		}

		const bool is_spider = header.schema == type_id_spider;

		auto textures_header = get_section_data(archive_texture_header_type_id);
		std::shared_ptr<rivet_array<rivet_archive_raw>> archives_section;
		if (is_spider) {
			auto archives_spider_section = get_section<rivet_archive_raw_spider>(archive_archives_type_id);
			if (archives_spider_section == nullptr) {
				throw mismatched_data_error("archive_toc::archive_toc: missing archives section");
			}

			archives_section = std::make_shared<rivet_array<rivet_archive_raw>>(nullptr, archives_spider_section->size());

			for (rivet_size i = 0; i < archives_spider_section->size(); ++i) {
				auto [install_id, chunk_id, name] = archives_spider_section->get(i);
				auto existing = archives_section->get(i);
				existing.unknown = chunk_id;
				std::copy_n(name.begin(), 0x30, existing.name.begin());
				archives_section->set(i, existing);
			}
		} else {
			archives_section = get_section<rivet_archive_raw>(archive_archives_type_id);
		}

		auto ids_section = get_section<rivet_asset_id>(archive_ids_type_id);
		std::shared_ptr<rivet_array<rivet_asset_raw>> assets_section;
		if (is_spider) {
			auto assets_spider_section = get_section<rivet_asset_raw_spider>(archive_assets_type_id);
			assets_section = std::make_shared<rivet_array<rivet_asset_raw>>(nullptr, assets_spider_section->size());

			static_assert(sizeof(std::pair<uint32_t, rivet_off>) == 8);
			auto chunk_section = get_section<std::pair<uint32_t, rivet_off>>(archive_asset_offsets_type_id);
			if (chunk_section == nullptr) {
				throw mismatched_data_error("archive_toc::archive_toc: missing chunk section");
			}

			for (rivet_size i = 0; i < assets_spider_section->size(); ++i) {
				auto [unknown, size, chunk_id] = assets_spider_section->get(i);
				auto existing = assets_section->get(i);
				existing.size = size;
				auto [fst, snd] = chunk_section->get(chunk_id);
				existing.archive_id = fst;
				existing.archive_offset = snd;
				existing.header_offset = rivet_unknown;
				assets_section->set(i, existing);
			}
		} else {
			assets_section = get_section<rivet_asset_raw>(archive_assets_type_id);
		}

		// optional
		static_assert(sizeof(std::pair<uint32_t, uint32_t>) == 8);
		auto groups_section = get_section<std::pair<uint32_t, uint32_t>>(archive_header_type_id);
		auto texture_ids = get_section<rivet_asset_id>(archive_texture_ids_type_id);
		auto texture_metas = get_section<rivet_asset_texture_header>(archive_texture_meta_type_id);
		auto asset_headers = get_section<rivet_asset_header>(archive_asset_headers_type_id);
		auto key_assets = get_section<rivet_asset_id>(archive_key_asset_ids_type_id);

		if (textures_header != nullptr) {
			streamed_texture_count = textures_header->get<uint32_t>(0);
		}

		if (archives_section == nullptr) {
			throw mismatched_data_error("archive_toc::archive_toc: missing archives section");
		}

		if (groups_section != nullptr && groups_section->size() != 0x100) {
			throw mismatched_data_error("archive_toc::archive_toc: not 256 groups");
		}

		if (ids_section == nullptr) {
			throw mismatched_data_error("archive_toc::archive_toc: missing ids groups");
		}

		if (assets_section == nullptr) {
			throw mismatched_data_error("archive_toc::archive_toc: missing assets");
		}

		if (ids_section->size() > assets_section->size()) {
			throw mismatched_data_error("archive_toc::archive_toc: id count does not match asset count");
		}

		auto archive_index = 0;
		for (auto [name, time, version, unknown, load_priority] : *archives_section) {
			std::string_view view;
			if (is_spider) {
				auto str = rivet_string_pool::alloc_string(std::string_view(name.data(), name.size()));
				view = std::string_view(*str);
			} else {
				view = archives_section->to_cstring_view(archive_index++);
			}

			auto archive = std::make_shared<rivet_archive>();
			archive->name = view;
			archive->time = time;
			archive->version = version;
			archive->unknown = unknown;
			archive->load_priority = load_priority;

			archives.emplace_back(archive);
		}

		ankerl::unordered_dense::map<rivet_asset_id, rivet_asset_texture_header> chunk_map;
		if (texture_ids != nullptr && texture_metas != nullptr) {
			if (texture_ids->size() != texture_metas->size()) {
				throw mismatched_data_error("archive_toc::archive_toc: streamed id count does not match chunk count");
			}

			for (rivet_size i = 0; i < texture_ids->size(); ++i) {
				chunk_map[texture_ids->get(i)] = texture_metas->get(i);
			}
		}

		std::unordered_set<rivet_asset_id> key_asset_lookup {};
		if (key_assets != nullptr) {
			key_asset_lookup.insert(key_assets->begin(), key_assets->end());
		}

		for (rivet_size i = 0; i < ids_section->size(); ++i) {
			auto full_id = ids_section->get(i);
			auto generic_id = full_id & 0xbfffffff'ffffffff; // strip localized flag.

			rivet_size group_id = rivet_unknown;
			if (groups_section != nullptr) {
				for (rivet_size j = 0; j < 0x100; ++j) {
					auto [fst, snd] = groups_section->get(j);
					if (snd == 0) {
						continue;
					}

					if (i >= fst && i < fst + snd) {
						group_id = j;
						break;
					}
				}

				if (group_id == rivet_unknown) {
					throw unreachable_error("archive_toc::archive_toc: failed to find group id, goodbye");
				}
			}

			auto [size, archive_id, archive_offset, header_offset] = assets_section->get(i);
			auto archive = archives[archive_id];
			auto chunk_entry = chunk_map.find(generic_id);
			std::optional<rivet_asset_header> meta;
			if (header_offset != rivet_unknown && asset_headers != nullptr) {
				if (auto normalized = header_offset / sizeof(rivet_asset_header); normalized < asset_headers->size()) {
					meta = asset_headers->get(normalized);
				}
			}

			rivet_locale locale = rivet_locale::None;
			rivet_asset_category category = rivet_asset_category::Game;
			bool is_stream = false;

			if (group_id != rivet_unknown) {
				locale = static_cast<rivet_locale>(group_id / 8);
				category = static_cast<rivet_asset_category>((group_id / 2) % 4);
				is_stream = group_id % 2 == 1;
			}

			auto is_streamed = chunk_entry != chunk_map.end();
			std::optional<rivet_asset_texture_header> texture_header;
			if (is_streamed) {
				texture_header = chunk_entry->second;
			}

			auto is_key = key_asset_lookup.contains(generic_id);

			auto asset = std::make_shared<rivet_asset>();
			asset->id = full_id;
			asset->size = size;
			asset->offset = archive_offset;
			asset->archive = archive;
			asset->locale = locale;
			asset->category = category;
			asset->flags.is_stream = is_stream;
			asset->flags.is_texture = is_streamed;
			asset->flags.has_header = header_offset != rivet_unknown;
			asset->flags.is_virtual = false;
			asset->flags.is_key = is_key;
			asset->texture_header = texture_header;
			asset->header = meta;
			asset->name = std::nullopt;
			asset->dependencies = {};
			asset->type = rivet_asset_type::NONE;

			if (group_id != rivet_unknown) {
				groups[group_id / 8][(group_id / 2) % 4][is_stream ? 1 : 0].emplace_back(asset);
			}

			if (asset_lookup.find(generic_id) == asset_lookup.end()) {
				asset_lookup[generic_id] = {};
			}
			asset_lookup[generic_id].emplace_back(asset);
		}
	}

	auto
	archive_toc::get_group(rivet_locale locale, rivet_asset_category category, const bool is_stream) const -> std::vector<std::shared_ptr<rivet_asset>> {
		if (locale >= rivet_locale::Max) {
			return {};
		}

		if (category >= rivet_asset_category::Max) {
			return {};
		}

		return groups[to_underlying(locale)][to_underlying(category)][is_stream ? 1 : 0];
	}

	auto
	archive_toc::get_asset(rivet_asset_id asset_id, rivet_locale locale, const rivet_asset_category category, const bool is_stream) const -> std::shared_ptr<rivet_asset> {
		if (locale >= rivet_locale::Max) {
			return nullptr;
		}

		if (category >= rivet_asset_category::Max) {
			return nullptr;
		}

		auto find_check = [asset_id](const std::shared_ptr<rivet_asset> &asset) {
			if (asset == nullptr) {
				return false;
			}

			return asset->id == asset_id;
		};

		auto group = get_group(locale, category, is_stream);
		auto iter = std::ranges::find_if(group, find_check);

		if (iter == group.end()) {
			// fallback to english
			if (locale != rivet_locale::None && locale != rivet_locale::English) {
				locale = rivet_locale::English;
				auto en_group = get_group(locale, category, is_stream);
				iter = std::ranges::find_if(en_group, find_check);
				if (iter != en_group.end()) {
					return *iter;
				}
			}

			// fallback to global
			if (locale != rivet_locale::None) {
				locale = rivet_locale::None;
				auto global_group = get_group(locale, category, is_stream);
				iter = std::ranges::find_if(global_group, find_check);
				if (iter != global_group.end()) {
					return *iter;
				}
			}

			return nullptr;
		}

		return *iter;
	}
} // namespace rivet::data
