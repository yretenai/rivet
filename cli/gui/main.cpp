// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <iostream>
#include <memory>
#include <cmath>

#include "rivet_sdl_host.h"

#include <SDL3/SDL_main.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_vulkan.h>
#include <imgui.h>
#include <imgui_impl_sdl3.h>
#include <imgui_impl_sdlrenderer3.h>

#include <rivet/rivet_keywords.hpp>

#if __EMSCRIPTEN__
#include <emscripten.h>
#endif

namespace rivet::sdl {
	void
	rivet_sdl_crash(const std::string &message) {
		SDL_LogError(rivet::to_underlying(rivet_sdl_category::error), "Unexpected error %s", message.c_str());
		exit(static_cast<int>(0xDEE7CAFE));
	}

	rivet_sdl_host::rivet_sdl_host() : exiting(false), show_demo_window(true) {
		if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMEPAD) != 0) { // NOLINT(*-signed-bitwise)
			rivet_sdl_crash();
		}

		SDL_SetHint(SDL_HINT_IME_SHOW_UI, "1");

		{
			window = SDL_CreateWindow("rivet", 800, 600, SDL_WINDOW_RESIZABLE | SDL_WINDOW_VULKAN);
			if(window == nullptr) {
				rivet_sdl_crash();
			}
		}

		{
			renderer = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
			if(renderer == nullptr) {
				rivet_sdl_crash();
			}
		}

		SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED); // NOLINT(*-signed-bitwise)
		SDL_ShowWindow(window);
		SDL_LogMessage(rivet::to_underlying(rivet_sdl_category::generic), SDL_LOG_PRIORITY_INFO, "started");

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();
		ImGuiIO& flags = ImGui::GetIO();
		flags.IniFilename = nullptr;
		flags.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard; // NOLINT(*-signed-bitwise)
		flags.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad; // NOLINT(*-signed-bitwise)

		ImGui::StyleColorsDark();
		ImGui_ImplSDL3_InitForSDLRenderer(window, renderer);
		ImGui_ImplSDLRenderer3_Init(renderer);
	}

	rivet_sdl_host::~rivet_sdl_host() {
		ImGui_ImplSDLRenderer3_Shutdown();
		ImGui_ImplSDL3_Shutdown();
		ImGui::DestroyContext();
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();

		renderer = nullptr;
		window = nullptr;
	}

	void rivet_sdl_host::render() {
		if(renderer == nullptr || window == nullptr) {
			return;
		}

		constexpr auto clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

		SDL_Event event;
		while (SDL_PollEvent(&event) == SDL_TRUE) {
			ImGui_ImplSDL3_ProcessEvent(&event);
			if (event.type == SDL_EVENT_QUIT) {
				exiting = true;
			}

			if (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED && event.window.windowID == SDL_GetWindowID(window)) {
				exiting = true;
			}
		}

		ImGui_ImplSDLRenderer3_NewFrame();
		ImGui_ImplSDL3_NewFrame();
		ImGui::NewFrame();

		ImGui::ShowDemoWindow(&show_demo_window);

		ImGui::Render();

        SDL_SetRenderDrawColor(renderer, static_cast<uint8_t>(clear_color.x * 255), static_cast<uint8_t>(clear_color.y * 255), static_cast<uint8_t>(clear_color.z * 255), static_cast<uint8_t>(clear_color.w * 255));
        SDL_RenderClear(renderer);
        ImGui_ImplSDLRenderer3_RenderDrawData(ImGui::GetDrawData());
        SDL_RenderPresent(renderer);
	}

	std::shared_ptr<rivet_sdl_host> host;
}

auto main() -> int {
	rivet::sdl::host = std::make_shared<rivet::sdl::rivet_sdl_host>();

	#if __EMSCRIPTEN__
	emscripten_set_main_loop(host->render, 0, 1);
	#else
	while (!rivet::sdl::host->exiting) {
		rivet::sdl::host->render();
	}
	#endif

	return 0;
}
