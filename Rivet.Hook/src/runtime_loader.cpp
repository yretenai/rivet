// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <unordered_map>
#include <string>
#include <algorithm>

#include "runtime_loader.hpp"
#include "runtime.hpp"
#include "settings.hpp"
#include "signature.hpp"

namespace rivet_hook {
	std::unordered_map<AssetId, std::string> mod_files = {};

	std::array<AssetId, 7> known_important_assets = {
		0x8e7f2fafc675d9ef,
		0xa5fd9d73bb4f722e,
		0xb575e9facf1a38bc,
		0xabe81779b7c45edf,
		0x82ce4031e142c7f3,
		0x8323511e0074e322,
		0x98aa90ad5ea29cf5,
	}; // todo

	create_asset_id_t game_create_asset_id = nullptr;
	is_valid_asset_t game_is_valid_asset = nullptr;
	is_valid_asset_t game_is_installed_asset = nullptr;
	open_file_t game_open_file = nullptr;
	read_file_t game_read_file = nullptr;
	close_file_t game_close_file = nullptr;
	decode_url_t game_decode_url = nullptr;
	mgr_load_asset_t game_mgr_load_asset = nullptr;
	sort_t game_sort = nullptr;
	mount_archive_t game_mount_archive = nullptr;
	commit_assets_t game_commit_assets = nullptr;
	alloc_asset_t game_alloc_asset = nullptr;
	resolve_asset_t game_resolve_asset = nullptr;
	get_language_t game_get_text_language = nullptr;
	get_language_t game_get_audio_language = nullptr;

	create_asset_t *game_create_asset = nullptr;
	void* game_create_asset_data = nullptr;
	LoadOperation* game_load_ops = 0;
	SortFunc game_sort_op = {};

	auto
	create_asset_id(AssetId* asset_id, char* asset_name) -> AssetId* {
		auto result = game_create_asset_id(asset_id, asset_name);

		if (asset_name && *asset_name && asset_id) {
			g_output << "[asset id] " << std::hex << *asset_id << " " << asset_name << std::endl;
			g_output.flush();
		}

		return result;
	}

	auto
	decode_url(const char* url, unsigned int urlLen, char* decoded, unsigned int* decodedSize) -> void {
		if (url != nullptr) {
			g_output << "[cohtml] " << url << std::endl;
			g_output.flush();
		}

		game_decode_url(url, urlLen, decoded, decodedSize);
	}

	auto
	mgr_load_asset(intptr_t self, AssetId asset_id, AssetId parent_asset_id, const char* asset_name, intptr_t referencing_asset, intptr_t unknown6, int32_t unknown7) -> intptr_t {
		g_output << "[load asset] " << std::hex << asset_id << " ";

		if (asset_name && *asset_name) {
			g_output << asset_name << " from ";
		} else {
			g_output << "(null) from ";
		}

		if (referencing_asset) {
			auto upper_path = reinterpret_cast<const char**>(referencing_asset + 0x10);

			if (upper_path && *upper_path && **upper_path) {
				g_output << *upper_path;
			} else {
				g_output << "(null)";
			}
		} else {
			g_output << "(nowhere)";
		}

		g_output << std::endl;
		g_output.flush();

		return game_mgr_load_asset(self, asset_id, parent_asset_id, asset_name, referencing_asset, unknown6, unknown7);
	}

	auto
	hook_cohtml() -> void {
		HMODULE mod = GetModuleHandleA("cohtml.WindowsDesktop.dll");
		if (!mod) {
			g_output << "cannot hook cohtml, not loaded yet." << std::endl;
			return;
		}

		LPVOID proc = reinterpret_cast<LPVOID>(GetProcAddress(mod, decode_url_string_name));
		if (!proc) {
			g_output << "cannot hook cohtml, export not found." << std::endl;
			return;
		}

		create_hook("cohtml", proc, reinterpret_cast<LPVOID*>(decode_url), reinterpret_cast<LPVOID*>(&game_decode_url));
	}

	auto
	load_mod_assets() -> void {
		// todo
	}

	auto
	load_asset(AssetHeader* header, const std::string &path) -> void {
		// todo
		// special considerations: .texture.stream should be appended?
		// todo: find allocator? -> NxStorage seems to just malloc???
	}

	auto
	open_file(intptr_t self, AssetFile* file, AssetId asset_id, int32_t type, int32_t platform, uint8_t manager_id) -> void {
		if (g_settings.log_loose_opens) {
			g_output << "[open loose] " << std::hex << asset_id << " type: " << type << " manager: " << static_cast<uint32_t>(manager_id) << std::endl;
			g_output.flush();
		}

		// todo
		game_open_file(self, file, asset_id, type, platform, manager_id);
	}

	auto
	read_file(intptr_t self, AssetFile* file, char* buffer, size_t offset, size_t size, int32_t unknown1, int32_t unknown2) -> void {
		// todo
		game_read_file(self, file, buffer, offset, size, unknown1, unknown2);
	}

	auto
	close_file(intptr_t self, AssetFile* file) -> void {
		// todo
		game_close_file(self, file);
	}

	auto
	reimpl_load_ops(ArchiveFileSystem* self, int64_t* assetIds, LoadMetadata* metadata, int32_t assetCount) -> int64_t {
		if (assetCount <= 0) {
			return 0;
		}

		int32_t loadIndex = 0;
		uint32_t textLanguage = game_get_text_language();
		uint32_t audioLanguage = game_get_audio_language();

		for(int32_t i = 0; i < assetCount; ++i) {
			LoadMetadata meta = metadata[i];
			uint64_t assetId = assetIds[i];

			if (g_settings.log_asset_opens) {
				g_output << "[open asset] " << std::hex << assetId << " type: " << static_cast<uint32_t>(meta.type) << std::endl;
				g_output.flush();
			}

			auto mod_index = mod_files.find(assetId);
			if (mod_index != mod_files.end()) {
				AssetHeader* header = game_alloc_asset(0, 1, assetId, &meta, meta.language);
				if (header) {
					load_asset(header, (*mod_index).second);
					game_commit_assets(1);
				}

				continue;
			}

			FoundAsset* asset = nullptr;
			uint32_t selectedLanguage = audioLanguage;
			if (meta.type == 0xE /* soundbank */) {
				asset = game_resolve_asset(&self->toc, assetId, audioLanguage, 0);
			}

			if (!asset) {
				asset = game_resolve_asset(&self->toc, assetId, textLanguage, 0);
				selectedLanguage = textLanguage;
			}

			if (!asset) {
				asset = game_resolve_asset(&self->toc, assetId, audioLanguage, 0);
				selectedLanguage = audioLanguage;
			}

			if (!asset) {
				asset = game_resolve_asset(&self->toc, assetId, 0, 0);
				selectedLanguage = 0;
			}

			if(!asset || asset->header == -1) {
				// here in case of crash becasue i haven't seen this yet
				// there's 3 different ways it fails early prior to this so if it happens here something really bad happened

				g_output << "[reimpl_load_ops] invalid path " << std::hex << assetId << std::endl;
				g_output.flush();

				if (game_alloc_asset(0, 1, assetId, &meta, meta.language)) {
					game_commit_assets(1);
				}

				g_output << "[reimpl_load_ops] skipped " << std::hex << assetId << std::endl;
				g_output.flush();

				continue;
			}

			ArchiveAsset archiveAsset = asset->asset;

			if (!self->mountedTable[archiveAsset.index]) {
				game_mount_archive(self, archiveAsset.index);
			}

			game_load_ops[loadIndex].index = i;
			game_load_ops[loadIndex].asset = archiveAsset;
			game_load_ops[loadIndex].size = asset->size;
			game_load_ops[loadIndex].header = asset->header;
			game_load_ops[loadIndex].language = selectedLanguage;
			game_load_ops[loadIndex].priority |= 1;

			if (std::ranges::contains(known_important_assets, assetId)) {
				game_load_ops[loadIndex].priority &= ~1;
			}

			loadIndex += 1;
		}

		game_sort((intptr_t) game_load_ops, loadIndex, 0x18, game_sort_op);

		return loadIndex;
	}

	auto
	is_valid_asset(ArchiveFileSystem* self, AssetId asset_id) -> bool {
		return mod_files.contains(asset_id) || game_is_valid_asset(self, asset_id);
	}

	auto
	is_installed_asset(ArchiveFileSystem* self, AssetId asset_id) -> bool {
		return mod_files.contains(asset_id) || game_is_installed_asset(self, asset_id);
	}

	auto
	AssetLoader::init() -> void {
		auto create_asset_id_ptrs = find_function("asset ids", g_game_module, CREATE_ASSET_ID_SIGNATURE);
		if (!create_asset_id_ptrs.empty()) {
			if (g_settings.log_asset_ids) {
				create_hook("asset ids", create_asset_id_ptrs[0], reinterpret_cast<LPVOID>(&create_asset_id), reinterpret_cast<LPVOID *>(&game_create_asset_id));
			} else {
				game_create_asset_id = (create_asset_id_t) create_asset_id_ptrs[0];
			}
		}

		if (g_settings.log_paths) {
			create_hook("asset paths", g_game_module, LOAD_ASSET_SIGNATURE, reinterpret_cast<LPVOID>(&mgr_load_asset), reinterpret_cast<LPVOID *>(&game_mgr_load_asset));
		}

		if (g_settings.log_cohtml) {
			hook_cohtml();
		}

		if (!g_settings.enable_asset_loader) {
			return;
		}

		load_mod_assets();

		#define RVA(n) ((intptr_t) g_game_module + n - 0x140000000)

		// todo: find signatures for all of these aaaaaahhhhhhh!!!

		game_resolve_asset = (resolve_asset_t) RVA(0x141057420);
		game_get_text_language = (get_language_t) RVA(0x14158e140);
		game_get_audio_language = (get_language_t) RVA(0x14158dad0);
		game_alloc_asset = (alloc_asset_t) RVA(0x140fa2a80);
		game_commit_assets = (commit_assets_t) RVA(0x140fa2c00);
		game_mount_archive = (mount_archive_t) RVA(0x1410597e0);
		game_sort_op.func = RVA(0x141058480);
		game_sort_op.target = 0;

		game_sort = (sort_t) RVA(0x141598f30);
		game_load_ops = (LoadOperation*) RVA(0x14628fdc0);
		game_create_asset = (create_asset_t*) RVA(0x14640fe18);
		game_create_asset_data = (void*) RVA(0x14640fe20);

		create_hook("preload file op", reinterpret_cast<LPVOID>(RVA(0x1410599c0)), reinterpret_cast<LPVOID>(&reimpl_load_ops), nullptr);
		create_hook("is valid asset", reinterpret_cast<LPVOID>(RVA(0x141059530)), reinterpret_cast<LPVOID>(&is_valid_asset), reinterpret_cast<LPVOID *>(&game_is_valid_asset));
		create_hook("is installed asset", reinterpret_cast<LPVOID>(RVA(0x141059480)), reinterpret_cast<LPVOID>(&is_installed_asset), reinterpret_cast<LPVOID *>(&game_is_installed_asset));

		create_hook("open file", reinterpret_cast<LPVOID>(RVA(0x141059900)), reinterpret_cast<LPVOID>(&open_file), reinterpret_cast<LPVOID *>(&game_open_file));
		create_hook("read file", reinterpret_cast<LPVOID>(RVA(0x141059c70)), reinterpret_cast<LPVOID>(&read_file), reinterpret_cast<LPVOID *>(&game_read_file));
		create_hook("close file", reinterpret_cast<LPVOID>(RVA(0x141058720)), reinterpret_cast<LPVOID>(&close_file), reinterpret_cast<LPVOID *>(&game_close_file));

		#undef RVA
	}
}
