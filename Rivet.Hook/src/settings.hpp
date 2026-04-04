// SPDX-FileCopyrightText: 2025 Legiayayana
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <array>
#include <string_view>

namespace rivet_hook {
	constexpr static const char *settings_name = R"(.\rivet.ini)";
	constexpr static const char *settings_namespace = "rivet";

#define LOAD_SETTING_BOOL(name) (settings.name = GetPrivateProfileIntA(settings_namespace, #name, static_cast<int>(settings.name), settings_name) != 0)
#define LOAD_SETTING_INT(name) (settings.name = GetPrivateProfileIntA(settings_namespace, #name, settings.name, settings_name))
#define LOAD_SETTING(name) \
	if (GetPrivateProfileStringA(settings_namespace, #name, nullptr, settings.name.data(), static_cast<DWORD>(settings.name.size()), settings_name) == 0) { \
		settings.name[0] = '\0'; \
	}

#define SAVE_SETTING_BOOL(name) WritePrivateProfileStringA(settings_namespace, #name, name ? "1" : "0", settings_name)
#define SAVE_SETTING_INT(name) WritePrivateProfileStringA(settings_namespace, #name, std::to_string(name).c_str(), settings_name)
#define SAVE_SETTING(name) WritePrivateProfileStringA(settings_namespace, #name, name.data(), settings_name)

	struct settings {
		bool load_renderdoc = false;		// loads renderdoc.dll into the game; disable by default because it kills ReShade and performance in general.
		bool list_versions = false;			// dumps versions to json; disable by default for clutter reasons
		bool dump_ddl = false;				// dumps DDL structures to json; disable by default for clutter reasons
		bool debug_dll = false;				// dumps generated DDL classes for manual introspection
		bool attach_context_log = false;	// redirect the internal logger context state to rivet.log; disable by default for clutter reasons
		bool attach_log = false;			// redirect the internal logger to rivet.log; disable by default because the same line is printed frequently
		bool suppress_crash_handler = true; // disable the exception handler allowing for debuggers to attach without invoking the crash handler
		bool log_cohtml = false;            // logs cohtml url decode requests
		bool log_paths = false;             // logs asset paths as they are loaded
		bool log_asset_ids = false;         // logs asset ids as they are hashed

		std::array<char, MAX_PATH + 1> renderdoc_path {}; // path to renderdoc/dll

		// load the settings from the ini file
		static auto
		load() -> settings {
			settings settings;

			LOAD_SETTING_BOOL(load_renderdoc);
			LOAD_SETTING_BOOL(list_versions);
			LOAD_SETTING_BOOL(dump_ddl);
			LOAD_SETTING_BOOL(debug_dll);
			LOAD_SETTING_BOOL(attach_context_log);
			LOAD_SETTING_BOOL(attach_log);
			LOAD_SETTING_BOOL(suppress_crash_handler);
			LOAD_SETTING_BOOL(log_cohtml);
			LOAD_SETTING_BOOL(log_paths);
			LOAD_SETTING_BOOL(log_asset_ids);
			LOAD_SETTING(renderdoc_path);

			settings.renderdoc_path[MAX_PATH] = '\0';

			return settings;
		}

		// save the settings to the ini file
		void
		save() {
			renderdoc_path[MAX_PATH] = '\0';
			SAVE_SETTING_BOOL(load_renderdoc);
			SAVE_SETTING_BOOL(list_versions);
			SAVE_SETTING_BOOL(dump_ddl);
			SAVE_SETTING_BOOL(debug_dll);
			SAVE_SETTING_BOOL(attach_context_log);
			SAVE_SETTING_BOOL(attach_log);
			SAVE_SETTING_BOOL(suppress_crash_handler);
			SAVE_SETTING_BOOL(log_cohtml);
			SAVE_SETTING_BOOL(log_paths);
			SAVE_SETTING_BOOL(log_asset_ids);
			SAVE_SETTING(renderdoc_path);
		}
	};
} // namespace rivet_hook
