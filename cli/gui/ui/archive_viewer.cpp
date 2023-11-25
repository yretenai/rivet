// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include "archive_viewer.hpp"

#include <climits>
#include <imgui.h>

#include <rivet/rivet_game.hpp>

#include "gui.hpp"
#include "file_browser.hpp"

namespace {
	bool open_archive = false;
	bool open_save = false;
} // anonymous namespace

namespace rivet::gui::ui {
	archive_viewer::archive_viewer() {
		priority = INT_MAX - 1;
	}

	auto
	archive_viewer::draw() -> bool {
		if (!filetree_open) {
			return true;
		}

		if (game == nullptr) {
			filetree_open = false;
			return true;
		}

		return true; // todo.
	}

	void
	archive_viewer::draw_menu() {
		if (ImGui::BeginMenu("file", !g_host->exiting)) {
			if (ImGui::MenuItem("open archive", nullptr, false, !open_archive)) {
				open_archive = true;
				file_browser_options opts{ "select game directory", {}, true, false };
				g_host->elements.push_back(std::make_shared<file_browser>(opts,
				                                                          [&](const std::shared_ptr<file_browser> &browser) {
					                                                          open_archive = !open_archive;
					                                                          if (!browser->selected.empty()) {
						                                                          // todo: spawn this in a thread
						                                                          game = std::make_shared<rivet_game>(browser->selected);
					                                                          }
				                                                          }));
			}

			if (ImGui::MenuItem("open save", nullptr, false, !open_save)) {
				open_save = true;
				file_browser_options opts{ "select game save", { ".save", ".backup*" }, false, true };
				g_host->elements.push_back(std::make_shared<file_browser>(opts,
				                                                          [&](const std::shared_ptr<file_browser> &browser) {
					                                                          open_save = !open_save;
					                                                          if (!browser->selected.empty()) {
						                                                          // todo: open save editor
					                                                          }
				                                                          }));
			}

			ImGui::Separator();

			if (ImGui::MenuItem("view file tree", nullptr, false, game != nullptr)) {
				filetree_open = true;
			}

			if (ImGui::MenuItem("view log", nullptr, false, true)) {
				// todo: log_viewer->visible = true;
			}

			ImGui::Separator();

			if (ImGui::MenuItem("exit", nullptr, false, true)) {
				g_host->exiting = true;
			}

			ImGui::EndMenu();
		}
	}
} // namespace rivet::gui::ui
