// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <functional>
#include <filesystem>
#include <memory>

#include "imgui_element.hpp"


namespace rivet::gui::ui {
	struct file_browser_options {
		std::string_view title;
		std::vector<std::string_view> filters;
		bool select_directory;
		bool select_file;
	};

	struct file_browser_entry {
		std::filesystem::path path;
		std::string label;
	};

	struct file_browser final : element, std::enable_shared_from_this<file_browser> {
		using callback_t = std::function<void(const std::shared_ptr<file_browser> &instance)>;

		file_browser(file_browser_options options, callback_t callback);
		~file_browser() override = default;
		file_browser(const file_browser &) = delete;
		auto
		operator=(const file_browser &) -> element & = delete;
		file_browser(file_browser &&) = default;
		auto
		operator=(file_browser &&) -> file_browser & = default;
		auto
		draw() -> bool override;

		file_browser_options options;
		callback_t callback;
		std::filesystem::path current_path;
		std::filesystem::path selected;
		size_t index = SIZE_MAX;
		std::vector<file_browser_entry> paths;
		std::string input_buffer;

		void
		regen();
	};
} // namespace rivet::gui::ui
