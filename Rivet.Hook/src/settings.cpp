// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <fstream>
#include <toml.hpp>

#include "settings.hpp"

#define LOAD_SETTING(type, name) settings.name = toml::find_or<type>(tbl, #name, settings.name)
#define SAVE_SETTING(name, comment) tbl[#name] = name; tbl.at(#name).comments().push_back(comment)

auto
rivet_hook::Settings::load() -> rivet_hook::Settings {
	rivet_hook::Settings settings;

	try {
		const auto tbl = toml::parse(settings_name);

		LOAD_SETTING(bool, suppress_crash_handler);
		LOAD_SETTING(bool, enable_asset_loader);
		LOAD_SETTING(std::vector<std::string>, asset_paths);
		LOAD_SETTING(bool, load_renderdoc);
		LOAD_SETTING(std::string, renderdoc_path);
		LOAD_SETTING(bool, list_versions);
		LOAD_SETTING(bool, dump_ddl);
		LOAD_SETTING(bool, debug_ddl);
		LOAD_SETTING(bool, attach_context_log);
		LOAD_SETTING(bool, attach_log);
		LOAD_SETTING(bool, log_cohtml);
		LOAD_SETTING(bool, log_paths);
		LOAD_SETTING(bool, log_loose_opens);
		LOAD_SETTING(bool, log_asset_opens);
		LOAD_SETTING(bool, log_asset_ids);
	} catch(const std::exception&) {
		// ignored
	}

	return settings;
}

auto
rivet_hook::Settings::save() -> void {
	toml::value tbl(toml::table {});

	SAVE_SETTING(suppress_crash_handler, "disable the exception handler allowing for debuggers to attach without invoking the crash handler");
	SAVE_SETTING(enable_asset_loader, "enables loose asset loading");
	SAVE_SETTING(asset_paths, "list of paths to load assets from");
	SAVE_SETTING(load_renderdoc, "loads renderdoc.dll into the game; disable by default because it has issues with ReShade");
	SAVE_SETTING(renderdoc_path, "path to renderdoc/dll");
	SAVE_SETTING(list_versions, "dumps versions to json; disable by default for clutter reasons");
	SAVE_SETTING(dump_ddl, "dumps DDL type structures to json; disable by default for clutter reasons");
	SAVE_SETTING(debug_ddl, "logs DDL type information; disable by default because log noise");
	SAVE_SETTING(attach_context_log, "redirect the internal logger context state to rivet.log; disable by default for clutter reasons");
	SAVE_SETTING(attach_log, "redirect the internal logger to rivet.log; disable by default because the same line is printed frequently");
	SAVE_SETTING(log_cohtml, "logs coherent ui url decode requests; disable by default because log noise");
	SAVE_SETTING(log_paths, "logs asset paths as they are loaded; disable by default because log noise");
	SAVE_SETTING(log_loose_opens, "logs loose paths as they are opened; disable by default because log noise");
	SAVE_SETTING(log_asset_opens, "logs asset paths as they are assets; disable by default because log noise");
	SAVE_SETTING(log_asset_ids, "logs asset ids as they are hashed; disable by default because log noise");

	std::ofstream file(settings_name, std::ios::trunc);
	if (file.is_open()) {
		file << tbl;
	}
}
