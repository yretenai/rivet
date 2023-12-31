// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>
#include <memory>
#include <optional>
#include <string_view>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <zlib.h>

#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/hash/type_id_registry.hpp>
#include <rivet/rivet_string_pool.hpp>

using namespace rivet;
using namespace rivet::structures;
using namespace rivet::type_id;

namespace rivet::data {
	auto
	load_array_partition(const std::shared_ptr<rivet_array<uint32_t>> &array, rivet_off index) -> std::vector<uint32_t> {
		std::vector<uint32_t> vector;

		while (index <= array->size() && array->get(index) != UINT32_MAX) {
			vector.emplace_back(array->get(index++));
		}

		return vector;
	}

	void
	dependency_dag::insert_dag_data(const rivet_size index, const std::shared_ptr<rivet_array<uint32_t>> &links, const std::shared_ptr<rivet_array<rivet_off>> &heads,
									const std::shared_ptr<rivet_array<rivet_off>> &names, const std::shared_ptr<rivet_array<rivet_asset_type>> &types, std::string_view name,
									const bool is_ephemeral) const {
		std::vector<std::weak_ptr<rivet_asset>> assets {};
		auto name_str = std::string(name);
		rivet::hash::normalize_asset_path(name_str);
		if (auto asset_id = rivet::hash::hash_asset_id(name_str); toc->asset_lookup.find(asset_id) == toc->asset_lookup.end()) {
			if (is_ephemeral) {
				return;
			}

			auto asset = std::make_shared<rivet_asset>();
			asset->id = asset_id;
			asset->flags.is_virtual = true, asset->archive = nullptr;
			asset->header = std::nullopt;
			asset->texture_header = std::nullopt;

			missing_assets.emplace(asset_id, asset);
			assets.emplace_back(asset);
		} else {
			assets = toc->asset_lookup.at(asset_id);
		}

		if (assets.empty()) {
			return;
		}

		if (is_ephemeral) {
			const auto ptr = rivet_string_pool::alloc_string(name);
			name = *ptr;
		}

		for (const auto &asset_ptr : assets) {
			const auto asset = asset_ptr.lock();
			asset->name = name;

			if (types != nullptr) {
				asset->type = types->get(index);
			}

			for (const auto entry : load_array_partition(links, heads->get(index))) {
				const auto dependency_name_offset = names->get(entry & INT32_MAX);
				if (dependency_name_offset == UINT32_MAX) {
					continue;
				}

				auto dependency_name = buffer->to_cstring_view(dependency_name_offset);
				auto dependency_id = hash::hash_asset_id(dependency_name);
				asset->dependencies.emplace_back(dependency_name, dependency_id);
			}
		}
	}

	auto
	dependency_dag::get_dag_data_buffer(const std::shared_ptr<rivet_data_array> &stream) -> std::shared_ptr<rivet_data_array> {
		if (stream->size() < sizeof(dependency_dag::dependency_dag_header)) {
			throw invalid_tag_error("dependency_dag::get_dag_data_buffer: invalid stream");
		}

		auto [type_id, size, compressed_size] = stream->get<dependency_dag::dependency_dag_header>(0);

		if (type_id == dat1::magic) {
			return stream;
		}

		if (type_id == dependency_dag::magic) {
			return stream->slice(sizeof(dependency_dag::dependency_dag_header));
		}

		if (type_id == dependency_dag::magic_compressed) {
			auto buffer = std::make_shared<rivet_data_array>(nullptr, size);
			const auto slice = stream->slice(sizeof(dependency_dag::dependency_dag_header));

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
				throw decompression_error("dependency_dag::get_dag_data_buffer: failed to initialize zlib");
			}

			ret = inflate(&zstream, Z_FULL_FLUSH);
			if (ret != Z_OK && zstream.avail_out != 0 && zstream.avail_in != 0) {
				throw decompression_error("dependency_dag::get_dag_data_buffer: failed to inflate zlib");
			}

			return buffer;
		}

		throw invalid_tag_error("dependency_dag::get_dag_data_buffer: invalid stream");
	}

	dependency_dag::dependency_dag(const std::shared_ptr<rivet_data_array> &stream, const std::shared_ptr<archive_toc> &toc): dat1(get_dag_data_buffer(stream)), toc(toc) {
		if (header.schema != type_id) {
			throw invalid_tag_error("dependency_dag::dependency_dag: invalid stream");
		}

		const auto links = get_section<uint32_t>(dependency_links_type_id);
		const auto heads = get_section<rivet_off>(dependency_heads_type_id);
		const auto names = get_section<rivet_off>(dependency_names_type_id);

		// optional
		const auto types = get_section<rivet_asset_type>(dependency_types_type_id);
		const auto dependency_groups = get_section<rivet_off>(graph_type_id);

		if (names == nullptr) {
			throw mismatched_data_error("dependency_dag::dependency_dag: missing asset ids");
		}

		if (heads == nullptr) {
			throw mismatched_data_error("dependency_dag::dependency_dag: missing dependency heads");
		}

		if (links == nullptr) {
			throw mismatched_data_error("dependency_dag::dependency_dag: missing links");
		}

		if (types != nullptr && names->size() > types->size()) {
			throw mismatched_data_error("dependency_dag::dependency_dag: id count does not match asset count");
		}

		if (heads->size() > names->size()) {
			throw mismatched_data_error("dependency_dag::dependency_dag: dependency head count does not match asset count");
		}

		for (rivet_size i = 0; i < names->size(); ++i) {
			const auto name_offset = names->get(i);
			if (name_offset == rivet_unknown) {
				continue;
			}

			auto name = buffer->to_cstring_view(name_offset);
			insert_dag_data(i, links, heads, names, types, name);
			// anim streams are not in the dag, but are in the toc
			insert_dag_data(i, links, heads, names, types, std::string(name) + ".animstrm", true);
			// todo: manually build names for the user interface web files
			// it starts with a bunch of html files referenced in config files
		}

		if (dependency_groups != nullptr) {
			for (rivet_size i = 0; i < dependency_groups->size(); ++i) {
				auto dependencies = load_array_partition(links, dependency_groups->get(i));
				std::vector<std::pair<std::string_view, rivet_asset_id>> group;
				group.reserve(dependencies.size());
				for (const auto entry : dependencies) {
					const auto dependency_name_offset = names->get(entry & 0x7FFFFFFFu);
					if (dependency_name_offset == rivet_unknown) {
						continue;
					}

					auto dependency_name = buffer->to_cstring_view(dependency_name_offset);
					auto dependency_id = rivet::hash::hash_asset_id(dependency_name);
					group.emplace_back(dependency_name, dependency_id);
				}
				groups.emplace_back(group);
			}
		}
	}
} // namespace rivet::data
