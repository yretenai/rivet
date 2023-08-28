// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet_game.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/data/dag.hpp>
#include <rivet/data/dsar.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

using namespace rivet::data;
using namespace rivet::hash;
using namespace rivet::structures;

namespace rivet {
	rivet_game::rivet_game(std::filesystem::path &&root) : root(root) {
		toc = std::make_shared<archive_toc>(rivet::rivet_data_array::from_file(root / "toc"));
		dag = std::make_shared<dependency_dag>(rivet::rivet_data_array::from_file(root / "dag"), toc);
	}

	void rivet_game::load_streamed_files_list(const std::filesystem::path &path) const {
		auto file = std::ifstream(path);
		std::string line;
		while(std::getline(file, line)) {
			if(line.empty()) {
				continue;
			}

			auto hash = hash_asset_id(line);
			auto entry = toc->asset_lookup.find(hash);

			if(entry == toc->asset_lookup.end()) {
				continue;
			}

			for(auto &asset_ptr : entry->second) {
				auto asset = asset_ptr.lock();
				if(!asset) {
					continue;
				}

				if(asset->name.empty()) {
					asset->name = line;
				}
			}
		}
	}

	std::shared_ptr<rivet_data_array>
	rivet_game::open_file(const std::shared_ptr<rivet_asset> &asset) const {
		auto archive = asset->archive;
		if (!archive->data_stream) {
			archive->data_stream = std::make_shared<data_stream_archive>(root, archive);
		}

		return archive->data_stream->read_file(asset);
	}
}
