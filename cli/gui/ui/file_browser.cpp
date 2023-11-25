// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include "file_browser.hpp"

#include <imgui.h>
#include <misc/cpp/imgui_stdlib.h>
#include <utility>

namespace rivet::gui::ui {
	file_browser::file_browser(file_browser_options options, callback_t callback)
		: options(std::move(options)),
		  callback(std::move(callback)),
		  current_path(std::filesystem::current_path()) {
		regen();
	}

	void
	file_browser::regen() {
		paths.clear();

		if (!exists(current_path)) {
			return;
		}

		input_buffer.clear();
		input_buffer.append(current_path.string());

		if (current_path.has_parent_path() && current_path.has_root_path() && current_path != current_path.root_path()) {
			paths.emplace_back(file_browser_entry{ current_path.parent_path(), ".." });
		}

		for (const auto &dir : std::filesystem::directory_iterator(current_path,
		                                                           std::filesystem::directory_options::skip_permission_denied | std::filesystem::directory_options::follow_directory_symlink)) {
			const auto &dir_path = dir.path();
			if (const auto is_file = is_regular_file(dir_path); !is_file || options.select_file) {
				if (is_file && !options.filters.empty()) {
					const auto &ext = dir_path.extension().string();
					const auto &filename = dir_path.filename().string();
					bool found = false;
					for (const auto &filter : options.filters) {
						if (filter.starts_with('.') && dir_path.has_extension()) {
							if (filter.ends_with('*')) {
								if (ext.length() >= filter.size() - 1 && ext.starts_with(filter.substr(0, filter.size() - 1))) {
									found = true;
									break;
								}
							} else {
								if (ext == filter) {
									found = true;
									break;
								}
							}
						} else {
							if (filter.ends_with('*')) {
								if (filename.length() >= filter.size() - 1 && filename.starts_with(filter.substr(0, filter.size() - 1))) {
									found = true;
									break;
								}
							} else {
								if (filename == filter) {
									found = true;
									break;
								}
							}
						}
					}
					if (!found) {
						continue;
					}
				}
				paths.emplace_back(file_browser_entry{ dir_path, dir_path.filename() });
			}
		}

		index = SIZE_MAX;
	}


	auto
	file_browser::draw() -> bool {
		bool open = true;
		bool deeper = false;
		if (ImGui::Begin(options.title.data(), &open, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_HorizontalScrollbar)) {
			if (ImGui::Button("update")) {
				current_path = input_buffer;
				regen();
			}

			ImGui::SameLine();

			if (ImGui::InputText("path", &input_buffer, ImGuiInputTextFlags_EnterReturnsTrue, nullptr, nullptr)) {
				current_path = input_buffer;
				regen();
			}

			if (!ImGui::BeginChild("##file_browser_lisst", ImVec2{ 0, 0 }, ImGuiChildFlags_Border | ImGuiChildFlags_AutoResizeY | ImGuiChildFlags_AlwaysAutoResize | ImGuiChildFlags_FrameStyle)) {
				ImGui::End();
			}

			ImGuiListClipper clipper;
			clipper.Begin(static_cast<int>(paths.size()), ImGui::GetTextLineHeightWithSpacing());
			while (clipper.Step()) {
				for (auto i = clipper.DisplayStart; i < clipper.DisplayEnd; i++) {
					ImGui::PushID(i);
					const auto item_selected = static_cast<size_t>(i) == index;
					if (ImGui::Selectable(paths[i].label.c_str(), item_selected, ImGuiSelectableFlags_AllowDoubleClick)) {
						deeper = static_cast<size_t>(i) == index && !is_regular_file(paths[i].path);
						open = static_cast<size_t>(i) != index || !is_regular_file(paths[i].path);
						index = i;
					}

					if (item_selected) {
						ImGui::SetItemDefaultFocus();
					}

					ImGui::PopID();
				}
			}

			ImGui::EndChild();

			ImGui::NewLine();

			if (ImGui::Button("ok")) {
				open = false;
				if (index != SIZE_MAX && index < paths.size()) {
					if (!is_directory(paths[index].path) || options.select_directory) {
						selected = paths[index].path;
					}
				} else if (options.select_directory) {
					selected = current_path;
				}
			}

			ImGui::SameLine();

			if (ImGui::Button("cancel")) {
				open = false;
			}
		}

		if (deeper && index != SIZE_MAX && index < paths.size()) {
			current_path = paths[index].path;
			regen();
		}

		if (!open) {
			callback(shared_from_this());
		}

		ImGui::End();

		return open;
	}
} // namespace rivet::gui::ui
