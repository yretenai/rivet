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

using namespace rivet::data;
using namespace rivet::hash;
using namespace rivet::structures;

namespace rivet {
	rivet_game::rivet_game(std::filesystem::path &&root) : root(root) {
		toc = std::make_shared<archive_toc>(rivet::rivet_data_array::from_file(root / "toc"));
		dag = std::make_shared<dependency_dag>(rivet::rivet_data_array::from_file(root / "dag"), toc);
	}

	std::shared_ptr<rivet_data_array> rivet_game::open_file(const std::string &path, rivet_size sub_file_id) const {
		return open_file(hash_asset_id(path), sub_file_id);
	}

	std::shared_ptr<rivet_data_array> rivet_game::open_file(rivet_asset_id id, rivet_size sub_file_id) const {
		auto asset_ptr = toc->asset_lookup.at(id).lock();
		if (!asset_ptr) {
			return nullptr;
		}

		auto archive_ptr = asset_ptr->archive.lock();

		if (!archive_ptr) {
			return nullptr;
		}

		if (sub_file_id > 0) { // localization count = 32 sub files, tile stream = 1 sub file
			auto sub_file = asset_ptr->sub_files.at(sub_file_id - 1);
			if (!sub_file) {
				return nullptr;
			}

			asset_ptr = sub_file;
			archive_ptr = asset_ptr->archive.lock();

			if (!archive_ptr) {
				return nullptr;
			}
		}

		return open_file(archive_ptr, asset_ptr);
	}

	std::shared_ptr<rivet_data_array>
	rivet_game::open_file(const std::shared_ptr<rivet_archive> &archive,
						  const std::shared_ptr<rivet_asset> &asset) const {
		if (!archive->data_stream) {
			archive->data_stream = std::make_shared<data_stream_archive>(root, archive);
		}

		return archive->data_stream->read_file(asset);
	}
}
