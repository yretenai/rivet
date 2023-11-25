// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <memory>
#include <vector>

#include <SDL3/SDL.h>

#include "../ui/imgui_element.hpp"

namespace rivet::gui::device {
	enum class rivet_sdl_category : uint32_t { // NOLINT(*-enum-size)
		error = SDL_LOG_CATEGORY_CUSTOM,
		generic,
		archive,
		graphics,
	};

	void
	rivet_sdl_crash(const std::string &message = SDL_GetError());

	struct rivet_sdl_host {
		rivet_sdl_host();
		~rivet_sdl_host();
		rivet_sdl_host(const rivet_sdl_host &) = delete;
		auto operator=(const rivet_sdl_host &) -> rivet_sdl_host & = delete;
		rivet_sdl_host(rivet_sdl_host&&) = default;
		auto operator=(rivet_sdl_host&&) -> rivet_sdl_host& = default;
		void render();

		std::vector<std::shared_ptr<ui::element>> elements;

		SDL_Renderer *renderer;
		SDL_Window *window;
		bool exiting;
	};
} // namespace rivet::gui::device
