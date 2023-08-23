// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <unordered_map>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet {
	namespace data {
		struct dependency_dag;
		struct archive_toc;
	}

	struct RIVET_SHARED rivet_game {
		std::shared_ptr<data::dependency_dag> dag = nullptr;
		std::shared_ptr<data::archive_toc> toc = nullptr;
		std::filesystem::path root;

		explicit rivet_game(std::filesystem::path &root);

		std::shared_ptr<rivet_data_array> open_file(std::string &path);
		std::shared_ptr<rivet_data_array> open_file(rivet_asset_id id);
	};
}