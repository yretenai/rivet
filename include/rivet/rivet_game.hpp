// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <filesystem>
#include <memory>

#include <rivet/data/dag.hpp>  // IWYU pragma: keep
#include <rivet/data/dsar.hpp> // IWYU pragma: keep
#include <rivet/data/toc.hpp>  // IWYU pragma: keep
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp> // IWYU pragma: keep

namespace rivet {
	struct RIVET_SHARED rivet_game : std::enable_shared_from_this<rivet_game> {
		std::shared_ptr<data::dependency_dag> dag = nullptr;
		std::shared_ptr<data::archive_toc> toc = nullptr;
		std::filesystem::path root;

		explicit
		rivet_game(const std::filesystem::path &root);

		[[nodiscard]] auto
		open_file(const std::shared_ptr<rivet::structures::rivet_asset> &asset) const -> std::shared_ptr<rivet_data_array>;
		auto
		prepare_archive(const std::shared_ptr<rivet::structures::rivet_asset> &asset) const noexcept -> bool;
		void
		load_streamed_files_list(const std::filesystem::path &path) const;
	};
} // namespace rivet
