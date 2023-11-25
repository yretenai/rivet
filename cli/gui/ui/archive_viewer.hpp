// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once
#include "imgui_element.hpp"

#include <filesystem>
#include <memory>

namespace rivet {
	struct rivet_game;

	namespace gui::ui {
		struct archive_viewer final : element {
			archive_viewer();
			~archive_viewer() override = default;
			archive_viewer(const archive_viewer &) = delete;
			auto
			operator=(const archive_viewer &) -> element & = delete;
			archive_viewer(archive_viewer &&) = default;
			auto
			operator=(archive_viewer &&) -> archive_viewer & = default;
			auto
			draw() -> bool override;
			void
			draw_menu() override;

			bool filetree_open = false;
			std::shared_ptr<rivet_game> game;
		};
	} // namespace rivet::gui::ui
} // namespace rivet
