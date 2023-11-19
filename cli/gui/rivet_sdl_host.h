// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <memory>

#include <SDL3/SDL.h>

namespace rivet::sdl {
	enum class rivet_sdl_category {
		error = SDL_LOG_CATEGORY_CUSTOM,
		generic,
		archive,
		graphics,
	};

	void rivet_sdl_crash(const std::string &message = SDL_GetError());

	struct rivet_sdl_host { // NOLINT(*-special-member-functions)
		rivet_sdl_host();
		~rivet_sdl_host();
		rivet_sdl_host(const rivet_sdl_host&) = delete;
		auto operator=(const rivet_sdl_host&) -> rivet_sdl_host& = delete;
		void render();

		SDL_Renderer* renderer;
		SDL_Window* window;
		bool exiting;
		bool show_demo_window;
	};

	extern std::shared_ptr<rivet_sdl_host> host;
}
