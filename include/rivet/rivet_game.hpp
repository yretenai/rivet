// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <filesystem>
#include <memory>
#include <string>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet {
	namespace structures {
		struct rivet_asset;
		struct rivet_archive;
	}

	namespace data {
		struct dependency_dag;
		struct archive_toc;
	}

	struct RIVET_SHARED rivet_game : std::enable_shared_from_this<rivet_game> {
		std::shared_ptr<data::dependency_dag> dag = nullptr;
		std::shared_ptr<data::archive_toc> toc = nullptr;
		std::filesystem::path root;

		explicit rivet_game(std::filesystem::path &&root);

		[[nodiscard]] std::shared_ptr<rivet_data_array> open_file(const std::string &path, rivet_size sub_file_id) const;
		[[nodiscard]] std::shared_ptr<rivet_data_array> open_file(rivet_asset_id id, rivet_size sub_file_id) const;
		[[nodiscard]] std::shared_ptr<rivet_data_array> open_file(const std::shared_ptr<rivet::structures::rivet_archive> &archive, const std::shared_ptr<rivet::structures::rivet_asset> &asset) const;
	};
}