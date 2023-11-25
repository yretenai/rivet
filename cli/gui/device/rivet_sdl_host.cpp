// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <iostream>
#include <memory>
#include <cmath>
#include <algorithm>
#include <string_view>

#include "rivet_sdl_host.hpp"

#include <chrono>
#include <format>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_vulkan.h>
#include <imgui.h>
#include <imgui_impl_sdl3.h>
#include <imgui_impl_sdlrenderer3.h>
#include <imgui_internal.h>
#include <rivet/rivet.hpp>

#include <rivet/rivet_keywords.hpp>
#include <rivet/ddl/rivet_ddl.hpp>

#if __EMSCRIPTEN__
#include <emscripten.h>
#endif

using namespace std::literals;
using namespace std::chrono;

namespace rivet::gui::device {
	struct sdl_surface_deleter {
		void
		operator()(SDL_Surface *surface) const {
			SDL_DestroySurface(surface);
		}
	};

	template <class... T>
	auto
	surface_ptr(T &&... args) -> std::shared_ptr<SDL_Surface> {
		return std::shared_ptr<SDL_Surface>(SDL_CreateSurface(std::forward<T>(args)...), sdl_surface_deleter{});
	}

	void
	rivet_sdl_crash(const std::string &message) {
		SDL_LogError(to_underlying(rivet_sdl_category::error), "Unexpected error %s", message.c_str());
		exit(static_cast<int>(0xDEE7CAFE));
	}

	rivet_sdl_host::rivet_sdl_host()
		: exiting(false) {
		if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMEPAD) != 0) {
			// NOLINT(*-signed-bitwise)
			rivet_sdl_crash();
		}

		SDL_SetHint(SDL_HINT_IME_SHOW_UI, "1");

		{
			window = SDL_CreateWindow("rivet", 800, 600, SDL_WINDOW_RESIZABLE | SDL_WINDOW_VULKAN);
			if (window == nullptr) {
				rivet_sdl_crash();
			}
		}

		{
			renderer = SDL_CreateRenderer(window, nullptr, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
			if (renderer == nullptr) {
				rivet_sdl_crash();
			}
		}

		SDL_SetWindowPosition(window, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED); // NOLINT(*-signed-bitwise)
		SDL_ShowWindow(window);
		SDL_LogMessage(to_underlying(rivet_sdl_category::generic), SDL_LOG_PRIORITY_INFO, "started");

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();
		ImGuiIO &flags = ImGui::GetIO();
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

	void
	rivet_sdl_host::render() {
		if (renderer == nullptr || window == nullptr) {
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

			if (event.type == SDL_EVENT_WINDOW_RESIZED && event.window.windowID == SDL_GetWindowID(window)) {
				SDL_Rect viewport = {};
				if (SDL_GetWindowSize(window, &viewport.w, &viewport.h) == 0) {
					SDL_SetRenderViewport(renderer, &viewport);
				}
			}
		}

		ImGui_ImplSDLRenderer3_NewFrame();
		ImGui_ImplSDL3_NewFrame();
		ImGui::NewFrame();

		std::vector<std::shared_ptr<ui::element>> sorted_elements = elements;
		std::ranges::sort(sorted_elements,
		                  [](const std::shared_ptr<ui::element> &lhs, const std::shared_ptr<ui::element> &rhs) {
			                  return lhs->priority > rhs->priority;
		                  });

		elements.clear();

		ImGui::BeginMainMenuBar();

		for (const auto &element : sorted_elements) {
			element->draw_menu();
		}

		bool should_screenshot = false;
		if (ImGui::MenuItem("screenshot", nullptr, false, true)) {
			should_screenshot = true;
		}

		ImGui::MenuItem("rivet", nullptr, false, false);
		ImGui::MenuItem(local_version_detailed.data(), nullptr, false, false);
		ImGui::MenuItem(ddl::local_ddl_version_detailed.data(), nullptr, false, false);

		ImGui::EndMainMenuBar();

		for (const auto &element : sorted_elements) {
			if (element->draw()) {
				elements.push_back(element);
			}
		}

		if (ImGui::BeginViewportSideBar("##MainStatusBar",
		                                ImGui::GetMainViewport(),
		                                ImGuiDir_Down,
		                                ImGui::GetFrameHeight(),
		                                ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_MenuBar)) {
			// NOLINT(*-signed-bitwise)
			if (ImGui::BeginMenuBar()) {
				ImGui::Text("nothing to report"); // todo: g_log->last_status;
				ImGui::EndMenuBar();
			}
			ImGui::End();
		}

		ImGui::Render();

		SDL_SetRenderDrawColor(renderer,
		                       static_cast<uint8_t>(clear_color.x * 255),
		                       static_cast<uint8_t>(clear_color.y * 255),
		                       static_cast<uint8_t>(clear_color.z * 255),
		                       static_cast<uint8_t>(clear_color.w * 255));
		SDL_RenderClear(renderer);
		ImGui_ImplSDLRenderer3_RenderDrawData(ImGui::GetDrawData());

		if (should_screenshot) {
			SDL_Rect viewport;
			if (SDL_GetRenderViewport(renderer, &viewport) == 0) {
				const std::shared_ptr surf = surface_ptr(viewport.w, viewport.h, SDL_PIXELFORMAT_ARGB8888);
				if (SDL_RenderReadPixels(renderer, nullptr, surf->format->format, surf->pixels, surf->pitch) == 0) {
					auto time = std::to_string(duration_cast<milliseconds>(utc_clock::now().time_since_epoch()).count());
					SDL_SaveBMP(surf.get(), std::format("screenshot_{}.bmp", time).c_str());
				}
			}
		}

		SDL_RenderPresent(renderer);
	}
} // namespace rivet::gui::device
