// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include "device/rivet_sdl_host.hpp"

// all global are here.
namespace rivet::gui {
	namespace ui::window {
		struct archive_viewer;
		// struct log_viewer;
	}

	const extern std::shared_ptr<ui::window::archive_viewer> g_archive; // needs to be global to access the archives.
	// const extern std::shared_ptr<ui::window::log_viewer> g_log; // needs to be global to send log messages
	const extern std::shared_ptr<device::rivet_sdl_host> g_host;
}
