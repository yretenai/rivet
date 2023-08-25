// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet_game.hpp>
#include <rivet/hash/asset_id.hpp>

using namespace rivet::data;
using namespace rivet::hash;

namespace rivet {
	rivet_game::rivet_game(std::filesystem::path &root) : root(root) {

	}

	std::shared_ptr<rivet_data_array> rivet_game::open_file(std::string &path) {
		return open_file(hash_asset_id(path));
	}

	std::shared_ptr<rivet_data_array> rivet_game::open_file(rivet_asset_id id) {
		return nullptr;
	}
}
