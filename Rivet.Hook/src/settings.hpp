// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#include <string>
#include <vector>

namespace rivet_hook {
	constexpr static const char *settings_name = R"(.\rivet.toml)";

	struct Settings {
		bool suppress_crash_handler = true;
		bool enable_asset_loader = true;
		std::vector<std::string> asset_paths = { "mods/default" };
		bool load_renderdoc = false;
		std::string renderdoc_path { "renderdoc.dll"};
		bool list_versions = false;
		bool dump_ddl = false;
		bool debug_ddl = false;
		bool attach_context_log = false;
		bool attach_log = false;
		bool log_cohtml = false;
		bool log_paths = false;
		bool log_loose_io = false;
		bool log_asset_opens = false;
		bool log_asset_ids = false;
		bool log_mod_access = false;
		bool log_mod_state = false;

		static auto load() -> Settings;
		auto save() -> void;
	};
} // namespace rivet_hook
