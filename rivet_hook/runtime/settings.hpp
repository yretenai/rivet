// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <array>
#include <string_view>

namespace rivet_hook {
	constexpr static const char *settings_name = R"(.\rivet.ini)";
	constexpr static const char *settings_namespace = "rivet";

#define LOAD_SETTING_BOOL(name, default) (settings.name = GetPrivateProfileIntA(settings_namespace, #name, default, settings_name) != 0)
#define LOAD_SETTING_INT(name, default) (settings.name = GetPrivateProfileIntA(settings_namespace, #name, default, settings_name))
#define LOAD_SETTING(name)                                                                                                                                  \
	if (GetPrivateProfileStringA(settings_namespace, #name, NULL, settings.name.data(), static_cast<DWORD>(settings.name.size()), settings_name) == NULL) { \
		settings.name[0] = '\0';                                                                                                                            \
	}

#define SAVE_SETTING_BOOL(name) WritePrivateProfileStringA(settings_namespace, #name, name ? "1" : "0", settings_name)
#define SAVE_SETTING_INT(name) WritePrivateProfileStringA(settings_namespace, #name, std::to_string(name).c_str(), settings_name)
#define SAVE_SETTING(name) WritePrivateProfileStringA(settings_namespace, #name, name.data(), settings_name)

	struct settings {
		bool load_renderdoc = false; // disable by default because it kills ReShade and performance in general.
		bool dump_ddl = false;		 // disable by default for clutter reasons
		std::array<char, 128>
			exe_name {}; // name of the exe we are patching, used to find the exe in the same directory. If this is not set, the exe will be searched for in the same directory as the dll.

		// load the settings from the ini file
		static auto
		load() -> settings {
			settings settings;

			LOAD_SETTING_BOOL(load_renderdoc, 0);
			LOAD_SETTING_BOOL(dump_ddl, 0);
			LOAD_SETTING(exe_name);

			settings.exe_name[127] = '\0';

			return settings;
		}

		// save the settings to the ini file
		void
		save() {
			exe_name[127] = '\0';
			SAVE_SETTING_BOOL(load_renderdoc);
			SAVE_SETTING_BOOL(dump_ddl);
			SAVE_SETTING(exe_name);
		}
	};
} // namespace rivet_hook
