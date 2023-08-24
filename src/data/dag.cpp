// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>

#include <rivet/hash/asset_id.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet::data {
	std::vector<uint32_t>
	load_array_partition(std::shared_ptr<rivet_array<uint32_t, RIVET_ALIGNMENT>> &array, rivet_off index) {
		std::vector<uint32_t> vector;

		while (index <= array->size() && array->get(index) != 0xFFFFFFFF) {
			vector.emplace_back(array->get(index++));
		}

		return vector;
	}

	dependency_dag::dependency_dag(std::shared_ptr<rivet_data_array> &&stream, std::shared_ptr<archive_toc> &toc) : dat1(stream->slice(12)), toc(toc) {
		if (header.type_id != type_id) {
			throw invalid_tag_error();
		}

		dag_header = stream->get<dependency_dag_header>(0);
		if (dag_header.type_id != magic) {
			throw invalid_tag_error();
		}

		auto links = get_section<uint32_t>(section_links);
		auto heads = get_section<rivet_off>(section_heads);
		auto names = get_section<rivet_off>(section_names);

		// optional
		auto types = get_section<rivet_asset_type>(section_types);
		auto dependency_groups = get_section<rivet_off>(section_graph);

		if (names == nullptr) {
			throw mismatched_data_error("asset ids");
		}

		if (heads == nullptr) {
			throw mismatched_data_error("dependency heads");
		}

		if (links == nullptr) {
			throw mismatched_data_error("links");
		}

		if (types != nullptr && names->size() > types->size()) {
			throw mismatched_data_error("id count does not match asset count");
		}

		if (heads->size() > names->size()) {
			throw mismatched_data_error("dependency head count does not match asset count");
		}

		if (names->size() > names->size()) {
			throw mismatched_data_error("dependency head count does not match asset count");
		}

		for (rivet_size i = 0; i < names->size(); ++i) {
			auto name_offset = names->get(i);
			if (name_offset == 0xFFFFFFFF) {
				continue;
			}

			auto name = buffer->slice(name_offset)->to_cstring();
			auto id = rivet::hash::hash_asset_id(name); // todo: some models and textures has a different path or ext? -> probably .dx11 or smth? -> localized?
			std::shared_ptr<rivet_asset> asset;
			if (toc->asset_lookup.find(id) == toc->asset_lookup.end()) {
				asset = std::make_shared<rivet_asset>(rivet_asset{
						id,

						0,
						0,
						{},
						static_cast<uint8_t>(-1),
						false,
						{},
						{},

						{},
						{},
						rivet_asset_type::NONE,

						{}
				});

				missing_assets.emplace(id, asset);
			} else {
				asset = toc->asset_lookup.at(id).lock();

				auto archive = asset->archive.lock();
			}
			asset->name = name;

			if (types != nullptr) {
				asset->type = types->get(i);
			}

			auto dependencies = load_array_partition(links, heads->get(i));
			for (auto entry: dependencies) {
				auto dependency_name_offset = names->get(entry & 0x7FFFFFFF);
				if (dependency_name_offset == 0xFFFFFFFF) {
					continue;
				}

				auto dependency_name = buffer->slice(dependency_name_offset)->to_cstring();
				auto dependency_id = rivet::hash::hash_asset_id(dependency_name);
				asset->dependencies.emplace_back(dependency_name, dependency_id);
			}
		}

		if (dependency_groups != nullptr) {
			for (rivet_size i = 0; i < dependency_groups->size(); ++i) {
				auto dependencies = load_array_partition(links, dependency_groups->get(i));
				std::vector<std::pair<std::string, rivet_asset_id>> group;
				group.reserve(dependencies.size());
				for (auto entry: dependencies) {
					auto dependency_name_offset = names->get(entry & 0x7FFFFFFF);
					if (dependency_name_offset == 0xFFFFFFFF) {
						continue;
					}

					auto dependency_name = buffer->slice(dependency_name_offset)->to_cstring();
					auto dependency_id = rivet::hash::hash_asset_id(dependency_name);
					group.emplace_back(dependency_name, dependency_id);
				}
				groups.emplace_back(group);
			}
		}
	}
}
