// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <memory>
#include <chrono>

#include "gui.hpp"
#include "ui/archive_viewer.hpp"

#if __EMSCRIPTEN__
#include <emscripten.h>
#endif

namespace rivet::gui {
	inline auto
	cctor_archive() noexcept -> std::shared_ptr<ui::archive_viewer> {
		try {
			return std::make_shared<ui::archive_viewer>();
		} catch (std::exception &) {
			return nullptr;
		}
	}

	inline auto
	cctor_host() noexcept -> std::shared_ptr<device::rivet_sdl_host> {
		try {
			auto host = std::make_shared<device::rivet_sdl_host>();

			host->elements.push_back(g_archive);

			return host;
		} catch (std::exception &) {
			return nullptr;
		}
	}

	const std::shared_ptr<ui::archive_viewer> g_archive = cctor_archive();
	const std::shared_ptr<device::rivet_sdl_host> g_host = cctor_host();
} // namespace rivet::gui

auto
main() -> int {
	#if __EMSCRIPTEN__
	emscripten_set_main_loop(host->render, 0, 1);
	#else
	while (!rivet::gui::g_host->exiting) {
		rivet::gui::g_host->render();
	}
	#endif

	return 0;
}
