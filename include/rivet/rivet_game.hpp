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
	} // namespace structures

	namespace data {
		struct dependency_dag;
		struct archive_toc;
	} // namespace data

	struct RIVET_SHARED rivet_game : std::enable_shared_from_this<rivet_game> {
		std::shared_ptr<data::dependency_dag> dag = nullptr;
		std::shared_ptr<data::archive_toc> toc = nullptr;
		std::filesystem::path root;

		explicit rivet_game(const std::filesystem::path &root);

		[[nodiscard]] auto
		open_file(const std::shared_ptr<rivet::structures::rivet_asset> &asset) const -> std::shared_ptr<rivet_data_array>;
		auto
		prepare_archive(const std::shared_ptr<rivet::structures::rivet_asset> &asset) const noexcept -> bool;
		void
		load_streamed_files_list(const std::filesystem::path &path) const;
	};
} // namespace rivet
