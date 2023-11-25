// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <memory>
#include <string>

#include "device/rivet_sdl_host.hpp"

// all global are here.
namespace rivet::gui {
	namespace ui {
		struct archive_viewer;
	}

	// controllers
	const extern std::shared_ptr<ui::archive_viewer> g_archive; // needs to be global to access the archives.
	const extern std::shared_ptr<device::rivet_sdl_host> g_host;

	void set_log_message(const std::string &message);
}
