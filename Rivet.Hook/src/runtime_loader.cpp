// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#include <unordered_map>
#include <string>
#include <algorithm>
#include <filesystem>

#include "runtime_loader.hpp"
#include "runtime.hpp"
#include "settings.hpp"
#include "signature.hpp"

namespace rivet_hook {
	const uint64_t RIVET_SENTINEL = 0xffffffffffffff00;

	struct MemoryFile {
		const uint8_t* buffer = nullptr;
		HANDLE map = INVALID_HANDLE_VALUE;
		HANDLE file = INVALID_HANDLE_VALUE;
		size_t size = 0;
		AssetLanguage language = AssetLanguage::None;
		std::filesystem::path original_path;

		MemoryFile(std::filesystem::path path) : original_path(path) {
			file = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
			if (file == INVALID_HANDLE_VALUE) {
				g_output << "[io] cannot open " << path.string() << " got " << GetLastError() << std::endl;
				return;
			}

			GetFileSizeEx(file, reinterpret_cast<LARGE_INTEGER*>(&size));

			map = CreateFileMapping(file, nullptr, PAGE_READONLY, 0, 0, nullptr);
			if (file == INVALID_HANDLE_VALUE) {
				g_output << "[io] cannot map " << path.string() << " got " << GetLastError() << std::endl;
				return;
			}

			buffer = reinterpret_cast<const uint8_t*>(MapViewOfFile(map, FILE_MAP_READ, 0, 0, 0));
			if (buffer == nullptr) {
				g_output << "[io] cannot pin " << path.string() << " got " << GetLastError() << std::endl;
				return;
			}
		}

		MemoryFile(const MemoryFile&) = delete;
		MemoryFile& operator=(const MemoryFile&) = delete;

		auto valid() const -> bool {
			return buffer != nullptr && map != INVALID_HANDLE_VALUE && file != INVALID_HANDLE_VALUE && size > 0;
		}

		auto close() -> void {
			if (buffer != nullptr) {
				UnmapViewOfFile(buffer);
				buffer = nullptr;
			}

			if (map != INVALID_HANDLE_VALUE) {
				CloseHandle(map);
				map = INVALID_HANDLE_VALUE;
			}

			if (file != INVALID_HANDLE_VALUE) {
				CloseHandle(file);
				file = INVALID_HANDLE_VALUE;
			}
		}
	};

	using mod_file_list_t = std::unordered_map<AssetId, MemoryFile>;
	using mod_list_t = std::array<mod_file_list_t, static_cast<int32_t>(AssetType::Count)>;
	std::array<mod_list_t, static_cast<int32_t>(AssetLanguage::Count)> mod_files_combined = {};

	std::array<AssetId, 7> known_important_assets = {
		0x8e7f2fafc675d9ef,
		0xa5fd9d73bb4f722e,
		0xb575e9facf1a38bc,
		0xabe81779b7c45edf,
		0x82ce4031e142c7f3,
		0x8323511e0074e322,
		0x98aa90ad5ea29cf5,
	};

	std::array<std::string_view, static_cast<int32_t>(AssetLanguage::Count)> rivet_lang_prefix = {
		"none", "us", "gb", "dk", "nl", "fi", "fr", "de", "it", "jp", "kr", "no", "pl", "pt", "ru", "es",
		"se", "br", "ar", "tr", "la", "cs", "ct", "fc", "cz", "hu", "el", "ro", "th", "vi", "id", "hr",
	};

	std::array<std::string_view, static_cast<int32_t>(AssetType::Count)> rivet_exts = {
		"",
		".stream",
		".unk2strm",
		".wem",
		".unk4strm",
		".animstrm",
		".unk6strm",
		".lgstream",
	};

	AssetLanguage text_language = AssetLanguage::None;
	AssetLanguage audio_language = AssetLanguage::None;

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
	set_language_t game_set_text_language = nullptr;
	set_language_t game_set_audio_language = nullptr;
	window_init_t game_window_init = nullptr;
	is_asset_valid_t game_is_asset_valid = nullptr;

	create_asset_t *game_create_asset = nullptr;
	void* game_create_asset_data = nullptr;
	LoadOperation* game_load_ops = 0;
	SortFunc game_sort_op = {};
	bool* legacy_texture_loading = nullptr;
	bool* disable_directstorage = nullptr;

	auto
	create_asset_id(AssetId* asset_id, char* asset_name) -> AssetId* {
		auto result = game_create_asset_id(asset_id, asset_name);

		if (asset_name && *asset_name && asset_id) {
			g_output << "[asset id] " << std::hex << *asset_id << " " << asset_name << std::endl;
		}

		return result;
	}

	auto
	decode_url(const char* url, unsigned int urlLen, char* decoded, unsigned int* decodedSize) -> void {
		if (url != nullptr) {
			g_output << "[cohtml] " << url << std::endl;
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
	find_mod_asset(AssetId asset_id, AssetType type, AssetLanguage lang) -> MemoryFile* {
		if (lang >= AssetLanguage::Count || type >= AssetType::Count) {
			return nullptr;
		}

		auto &mod_list = mod_files_combined[static_cast<int32_t>(lang)][static_cast<int32_t>(type)];
		const auto &mod_index = mod_list.find(asset_id);

		if (mod_index == mod_list.end()) {
			return nullptr;
		}

		return &(mod_index->second);
	}

	auto
	find_mod_asset(AssetId asset_id, AssetType type) -> MemoryFile* {
		auto *mod_file = find_mod_asset(asset_id, type, text_language);
		if (mod_file) {
			return mod_file;
		}

		mod_file = find_mod_asset(asset_id, type, audio_language);
		if (mod_file) {
			return mod_file;
		}

		mod_file = find_mod_asset(asset_id, type, AssetLanguage::None);
		if (mod_file) {
			return mod_file;
		}

		return nullptr;
	}

	auto
	has_mod_asset(AssetId asset_id, AssetType type, AssetLanguage lang) -> bool {
		if (lang >= AssetLanguage::Count || type >= AssetType::Count) {
			return false;
		}

		auto &mod_list = mod_files_combined[static_cast<int32_t>(lang)][static_cast<int32_t>(type)];
		return mod_list.contains(asset_id);
	}

	auto
	has_mod_asset(AssetId asset_id, AssetType type) -> bool {
		return has_mod_asset(asset_id, type, text_language) || has_mod_asset(asset_id, type, audio_language) || has_mod_asset(asset_id, type, AssetLanguage::None);
	}

	auto
	rivet_get_asset_lang(const std::string_view stem) -> AssetLanguage {
		auto it = std::find(rivet_lang_prefix.begin(), rivet_lang_prefix.end(), stem);
		return static_cast<AssetLanguage>((it != rivet_lang_prefix.end()) ? std::distance(rivet_lang_prefix.begin(), it) : 0);
	}

	auto
	rivet_get_asset_type(const std::string_view ext) -> AssetType {
		auto it = std::find(rivet_exts.begin(), rivet_exts.end(), ext);
		return static_cast<AssetType>((it != rivet_exts.end()) ? std::distance(rivet_exts.begin(), it) : 0);
	}

	auto
	populate_mod_asset(const std::filesystem::path &path, std::string game_path, AssetId asset_id, AssetType type, AssetLanguage lang) -> void {
		g_output << std::hex << "[loader] " << path.string() << " resolved to " << game_path << " with asset id " << asset_id << ", type " << static_cast<int32_t>(type) << ", language" << static_cast<int32_t>(lang) << std::endl;

		auto &mod_list = mod_files_combined[static_cast<int32_t>(lang)][static_cast<int32_t>(type)];
		const auto &mod_index = mod_list.find(asset_id);

		if (mod_index != mod_list.end()) {
			g_output << "[loader] " << path << " has a collision with " << mod_index->second.original_path << "; unloading old..." << std::endl;

			mod_index->second.close();
			mod_list.erase(asset_id);
		}

		auto [it, inserted] = mod_list.emplace(asset_id, path);
		if (!inserted) {
			g_output << "[loader] " << path << " did not insert?? " << std::endl;
			return;
		}

		auto &created = it->second;
		created.language = lang;

		if (!created.valid()) {
			g_output << "[loader] " << path << " failed to init" << std::endl;
			created.close();
			mod_list.erase(asset_id);
		}
	}

	auto
	load_mod_assets_rivet(std::filesystem::path &base_dir) -> void {
		// localization/localization_us.localization -> localization/localization_all.localization (built, us)
		// sound/soundbank/us/init.bnk -> sound/soundbank/init.bnk (soundbank, us)
		// sound/wem/us/1.wem -> E000000000000001 (audio, us)
		// built/misc.texture.stream -> built/misc.texture (texture, none)
		// built/misc.texture -> built/misc.texture (built, none)
		for (const auto &entry : std::filesystem::recursive_directory_iterator(base_dir)) {
			if (!entry.is_regular_file()) {
				continue;
			}

			const auto &mod_path = entry.path();
			auto relative_path = std::filesystem::relative(mod_path, base_dir);

			AssetLanguage language = AssetLanguage::None;
			AssetType type = rivet_get_asset_type(relative_path.extension().string());

			if (relative_path.extension() == ".localization" && relative_path.filename() != "localization_all.localization") {
				std::string stem = relative_path.stem().string();
				size_t underscore_pos = stem.find_last_of('_');

				if (underscore_pos != std::string::npos) {
					language = rivet_get_asset_lang(std::string_view(stem).substr(underscore_pos + 1));
				}

				if (language == AssetLanguage::None) {
					continue; // malformed.
				}

				relative_path = relative_path.replace_filename("localization_all.localization");
			} else if (relative_path.has_parent_path()) {
				language = rivet_get_asset_lang(relative_path.parent_path().filename().string());
				if (language != AssetLanguage::None) {
					relative_path = relative_path.parent_path().parent_path() / relative_path.filename();
				}
			}

			AssetId asset_id = 0;
			if (type == AssetType::Audio) {
				try {
					asset_id = 0xE000000000000000 | std::stoul(relative_path.stem().string());
				} catch (const std::exception &e) {
					g_output << "could not parse asset id for path " << relative_path << ": " << e.what() << std::endl;
					continue;
				}
			} else {
				auto first_dir = *relative_path.begin();
				if (first_dir == "unknown") {
					try {
						asset_id = std::stoull(relative_path.stem().string());
					} catch (const std::exception &e) {
						g_output << "could not parse asset id for path " << relative_path << ": " << e.what() << std::endl;
						continue;
					}
				} else {
					if (type != AssetType::Built) {
						relative_path = relative_path.replace_extension("");
					}

					game_create_asset_id(&asset_id, relative_path.string().c_str());
				}
			}

			populate_mod_asset(mod_path, relative_path.string(), asset_id, type, language);
		}
	}

	auto
	load_mod_assets_common(std::filesystem::path &base_dir) -> void {
		// 0/... -> ... (built, none)
		// 1/... -> ... (texture, none)
		// 8/... -> ... (built, us)
		// 9/... -> ... (texture, us)
		for (const auto &entry : std::filesystem::directory_iterator(base_dir)) {
			if (!entry.is_directory()) {
				continue;
			}

			auto &entry_path = entry.path();

			uint32_t directory_id = 0;
			try {
				directory_id = std::stoul(entry_path.filename().string());
			} catch (const std::exception &e) {
				g_output << "could not parse group id for path " << entry_path << ": " << e.what() << std::endl;
				continue;
			}

			if (directory_id > 0xff) {
				g_output << "group id for " << entry_path << " is malformed. skipping" << std::endl;
				continue;
			}

			AssetLanguage language = static_cast<AssetLanguage>(directory_id / 8);
			AssetType type = static_cast<AssetType>(directory_id % 8);

			for (const auto &entry : std::filesystem::recursive_directory_iterator(entry_path)) {
				if (!entry.is_regular_file()) {
					continue;
				}

				const auto &mod_path = entry.path();
				auto relative_path = std::filesystem::relative(mod_path, entry_path);

				AssetId asset_id = 0;
				if (relative_path.extension() == "") {
					try {
						asset_id = std::stoull(relative_path.filename().string());
					} catch (const std::exception &e) {
						g_output << "could not parse asset id for path " << relative_path << ": " << e.what() << std::endl;
						continue;
					}
				} else {
					if (type == AssetType::Audio) {
						try {
							asset_id = 0xE000000000000000 | std::stoul(relative_path.stem().string());
						} catch (const std::exception &e) {
							g_output << "could not parse asset id for path " << relative_path << ": " << e.what() << std::endl;
							continue;
						}
					} else {
						game_create_asset_id(&asset_id, relative_path.string().c_str());
					}
				}

				populate_mod_asset(mod_path, relative_path.string(), asset_id, type, language);
			}
		}
	}

	auto
	load_mod_assets() -> void {
		auto cwd = std::filesystem::current_path();

		for (const auto &entry : g_settings.asset_paths) {
			auto path = std::filesystem::path(entry);

			if (!path.is_absolute()) {
				path = cwd / path;
			}

			if (!std::filesystem::is_directory(path)) {
				g_output << "[loader] mod path " << entry << " does not exist! skipping." << std::endl;
				continue;
			}

			if (std::filesystem::exists(path / "info.json")) {
				g_output << "[loader] mod path " << entry << " is common format." << std::endl;
				load_mod_assets_common(path);
			} else {
				g_output << "[loader] mod path " << entry << " is rivet format." << std::endl;
				load_mod_assets_rivet(path);
			}
		}
		g_output.flush();
	}

	auto
	has_mod_asset(AssetId asset_id) -> bool {
		for (auto type = 0; type < static_cast<int32_t>(AssetType::Count); type++) {
			if (has_mod_asset(asset_id, static_cast<AssetType>(type))) {
				return true;
			}
		}

		return false;
	}

	auto
	open_file(intptr_t self, AssetFile* file, AssetId asset_id, AssetType type, int32_t platform, uint8_t manager_id) -> void {
		if (g_settings.log_loose_io) {
			g_output << "[loose][open ] " << std::hex << asset_id << " type: " << static_cast<int32_t>(type) << " manager: " << static_cast<uint32_t>(manager_id) << " status: " << file->status << " padding: " << file->padding << " data: " << file->data << " asset_id: " << file->asset_id << std::endl;
		}

		if (type < AssetType::Count) {
			if (has_mod_asset(asset_id, type)) {
				if (g_settings.log_mod_access) {
					g_output << "[loose][open ] " << std::hex << asset_id << " is modded" << std::endl;
					g_output.flush();
				}

				file->status = 2;
				file->padding = 0;
				file->data = RIVET_SENTINEL | static_cast<uint8_t>(static_cast<int32_t>(type));
				file->asset_id = asset_id;
				return;
			}
		}

		g_output.flush();
		game_open_file(self, file, asset_id, type, platform, manager_id);
	}

	auto
	read_file(intptr_t self, AssetFile* file, char* buffer, size_t offset, size_t size, int32_t priority, int32_t unknown2) -> bool {
		if (g_settings.log_loose_io) {
			g_output << "[loose][read ] offset: " << std::hex << offset << " size: " << size << " status: " << file->status << " padding: " << file->padding << " data: " << file->data << " asset_id: " << file->asset_id << std::endl;
			g_output.flush();
		}

		auto type = static_cast<AssetType>(file->data & 0xFF);
		if ((file->data & RIVET_SENTINEL) == RIVET_SENTINEL && type < AssetType::Count) {
			file->status = 0x8000000a;
			const auto *mod_file = find_mod_asset(file->asset_id, type);

			if (mod_file != nullptr) {
				if (offset + size > mod_file->size) {
					return false;
				}

				std::copy_n(mod_file->buffer + offset, size, buffer);

				file->status = 3;
				return true;
			}

			return false;
		}

		return game_read_file(self, file, buffer, offset, size, priority, unknown2);
	}

	auto
	close_file(intptr_t self, AssetFile* file) -> void {
		if (g_settings.log_loose_io) {
			g_output << "[loose][close] status: " << file->status << " padding: " << file->padding << " data: " << file->data << " asset_id: " << file->asset_id << std::endl;
			g_output.flush();
		}

		auto type = static_cast<AssetType>(file->data & 0xFF);
		if ((file->data & RIVET_SENTINEL) == RIVET_SENTINEL && type < AssetType::Count) {
			file->data = 0;
		} else {
			game_close_file(self, file);
		}
	}

	auto
	reimpl_load_ops(ArchiveFileSystem* self, int64_t* assetIds, LoadMetadata* metadata, int32_t assetCount) -> int64_t {
		if (assetCount <= 0) {
			return 0;
		}

		int32_t loadIndex = 0;
		for(int32_t i = 0; i < assetCount; ++i) {
			LoadMetadata meta = metadata[i];
			uint64_t assetId = assetIds[i];

			if (g_settings.log_asset_opens) {
				g_output << "[built] " << std::hex << assetId << " type: " << static_cast<uint32_t>(meta.type) << std::endl;
			}

			const MemoryFile *mod_file = nullptr;
			if (meta.type == 0xE /* soundbank */) {
				mod_file = find_mod_asset(assetId, AssetType::Built, audio_language);
			}

			if (mod_file == nullptr) {
				mod_file = find_mod_asset(assetId, AssetType::Built);
			}

			if (mod_file != nullptr && mod_file->valid()) {
				if (g_settings.log_mod_access) {
					g_output << "[built] " << std::hex << assetId << " is modded" << std::endl;
				}

				if (g_settings.log_mod_access && g_settings.log_mod_state) {
					g_output << "[built] " << std::hex << assetId << " create header" << std::endl;
				}

				AssetHeader* header = game_alloc_asset(0, 1, assetId, &meta, static_cast<uint8_t>(mod_file->language));

				if (g_settings.log_mod_access && g_settings.log_mod_state) {
					g_output << "[built] " << std::hex << assetId << " header created" << std::endl;
				}

				if (header) {
					if (g_settings.log_mod_access && g_settings.log_mod_state) {
						g_output << "[built] " << std::hex << assetId << " check valid, ptr " << reinterpret_cast<intptr_t>(mod_file->buffer) << std::endl;
					}

					auto magic = *reinterpret_cast<const uint32_t*>(mod_file->buffer);
					if (g_settings.log_mod_access && g_settings.log_mod_state) {
						g_output << "[built] " << std::hex << assetId << " magic " << magic << std::endl;
					}

					if (mod_file->size <= 0x24 || !game_is_asset_valid(magic, meta.type, assetId)) {
						if (g_settings.log_mod_access && g_settings.log_mod_state) {
							g_output << "[built] " << std::hex << assetId << " not valid" << std::endl;
						}

						header->status = 7;
						goto commit;
					}

					if (g_settings.log_mod_access && g_settings.log_mod_state) {
						g_output << "[built] " << std::hex << assetId << " valid, create" << std::endl;
					}

					if ((*game_create_asset)(header, mod_file->buffer, game_create_asset_data)) {
						if (g_settings.log_mod_access && g_settings.log_mod_state) {
							g_output << "[built] " << std::hex << assetId << " created" << std::endl;
						}

						intptr_t offset = 0x24;
						for (int32_t i = 0; i < header->dataRangeCount; ++i) {
							if (static_cast<size_t>(offset + header->dataRanges[i].size) > mod_file->size) {
								if (g_settings.log_mod_access && g_settings.log_mod_state) {
									g_output << "[built] " << std::hex << assetId << " out of bounds" << std::endl;
								}

								header->status = 6;
								break;
							}

							if (g_settings.log_mod_access && g_settings.log_mod_state) {
								g_output << "[built] " << std::hex << assetId << " copy" << std::endl;
							}

							std::copy_n(mod_file->buffer + offset, header->dataRanges[i].size, header->dataRanges[i].buffer);
							offset += header->dataRanges[i].size;
						}

						if (g_settings.log_mod_access && g_settings.log_mod_state) {
							g_output << "[built] " << std::hex << assetId << " done" << std::endl;
						}

						header->status = 0;
						goto commit;
					}

					if (g_settings.log_mod_access && g_settings.log_mod_state) {
						g_output << "[built] " << std::hex << assetId << " cant create" << std::endl;
					}
					header->status = 4;

				commit:
					if (g_settings.log_mod_access && g_settings.log_mod_state) {
						g_output << "[built] " << std::hex << assetId << " commit header" << std::endl;
					}

					game_commit_assets(1);
				}

				continue;
			}

			FoundAsset* asset = nullptr;
			AssetLanguage selectedLanguage = audio_language;
			if (meta.type == 0xE /* soundbank */) {
				asset = game_resolve_asset(&self->toc, assetId, audio_language, AssetType::Built);
			}

			if (!asset) {
				asset = game_resolve_asset(&self->toc, assetId, text_language, AssetType::Built);
				selectedLanguage = text_language;
			}

			if (!asset) {
				asset = game_resolve_asset(&self->toc, assetId, audio_language, AssetType::Built);
				selectedLanguage = audio_language;
			}

			if (!asset) {
				asset = game_resolve_asset(&self->toc, assetId, AssetLanguage::None, AssetType::Built);
				selectedLanguage = AssetLanguage::None;
			}

			if(!asset || asset->header == -1) {
				// here in case of crash becasue i haven't seen this yet
				// there's 3 different ways it fails early prior to this so if it happens here something really bad happened

				g_output << "[built] invalid path " << std::hex << assetId << std::endl;

				if (game_alloc_asset(0, 1, assetId, &meta, meta.language)) {
					game_commit_assets(1);
				}

				g_output << "[built] skipped " << std::hex << assetId << std::endl;

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
			game_load_ops[loadIndex].language = static_cast<uint8_t>(selectedLanguage);
			game_load_ops[loadIndex].priority |= 1;

			if (std::ranges::contains(known_important_assets, assetId)) {
				game_load_ops[loadIndex].priority &= ~1;
			}

			loadIndex += 1;
		}

		game_sort((intptr_t) game_load_ops, loadIndex, 0x18, game_sort_op);

		g_output.flush();
		return loadIndex;
	}

	auto
	is_valid_asset(ArchiveFileSystem* self, AssetId asset_id) -> bool {
		return game_is_valid_asset(self, asset_id) || has_mod_asset(asset_id);
	}

	auto
	is_installed_asset(ArchiveFileSystem* self, AssetId asset_id) -> bool {
		return game_is_installed_asset(self, asset_id) || has_mod_asset(asset_id);
	}

	auto
	set_text_language(AssetLanguage lang) -> void {
		game_set_text_language(lang);
		text_language = lang;
	}

	auto
	set_audio_language(AssetLanguage lang) -> void {
		game_set_audio_language(lang);
		audio_language = lang;
	}

	auto
	window_init(intptr_t self) -> bool {
		auto result = game_window_init(self);

		// NOTE: This bricks DirectStorage, need to find a workaround for "next gen" texture fencing.
		*legacy_texture_loading = true;
		*disable_directstorage = true;

		return result;
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

		// functions we need to call for reimpl_load_ops
		game_resolve_asset = reinterpret_cast<resolve_asset_t>(RVA(0x141057420));
		game_alloc_asset = reinterpret_cast<alloc_asset_t>(RVA(0x140fa2a80));
		game_commit_assets = reinterpret_cast<commit_assets_t>(RVA(0x140fa2c00));
		game_mount_archive = reinterpret_cast<mount_archive_t>(RVA(0x1410597e0));
		game_is_asset_valid = reinterpret_cast<is_asset_valid_t>(RVA(0x14105a640));
		game_sort = reinterpret_cast<sort_t>(RVA(0x141598f30));
		game_sort_op.func = RVA(0x141058480);
		game_sort_op.target = 0;

		// vars we need to read/write to for reimpl_load_ops
		game_load_ops = reinterpret_cast<LoadOperation*>(RVA(0x14628fdc0));

		// vars we need to call/read to for asset header creation
		game_create_asset = reinterpret_cast<create_asset_t*>(RVA(0x14640fe18));
		game_create_asset_data = reinterpret_cast<void*>(RVA(0x14640fe20));

		// vars we need to overwrite to disable texture fencing
		disable_directstorage = reinterpret_cast<bool*>(RVA(0x146798084));
		legacy_texture_loading = reinterpret_cast<bool*>(RVA(0x1467c728b));

		// language tracking
		create_hook("set text lang", reinterpret_cast<LPVOID>(RVA(0x14158e5a0)), reinterpret_cast<LPVOID>(&set_text_language), reinterpret_cast<LPVOID *>(&game_set_text_language));
		create_hook("set audio lang", reinterpret_cast<LPVOID>(RVA(0x14158e550)), reinterpret_cast<LPVOID>(&set_audio_language), reinterpret_cast<LPVOID *>(&game_set_audio_language));

		// asset io
		create_hook("preload file op", reinterpret_cast<LPVOID>(RVA(0x1410599c0)), reinterpret_cast<LPVOID>(&reimpl_load_ops), nullptr);
		create_hook("is valid asset", reinterpret_cast<LPVOID>(RVA(0x141059530)), reinterpret_cast<LPVOID>(&is_valid_asset), reinterpret_cast<LPVOID *>(&game_is_valid_asset));
		create_hook("is installed asset", reinterpret_cast<LPVOID>(RVA(0x141059480)), reinterpret_cast<LPVOID>(&is_installed_asset), reinterpret_cast<LPVOID *>(&game_is_installed_asset));

		// loose io
		create_hook("open file", reinterpret_cast<LPVOID>(RVA(0x141059900)), reinterpret_cast<LPVOID>(&open_file), reinterpret_cast<LPVOID *>(&game_open_file));
		create_hook("read file", reinterpret_cast<LPVOID>(RVA(0x141059c70)), reinterpret_cast<LPVOID>(&read_file), reinterpret_cast<LPVOID *>(&game_read_file));
		create_hook("close file", reinterpret_cast<LPVOID>(RVA(0x141058720)), reinterpret_cast<LPVOID>(&close_file), reinterpret_cast<LPVOID *>(&game_close_file));

		// needed to reset fencing a second time once the game starts.
		create_hook("window init", reinterpret_cast<LPVOID>(RVA(0x141520370)), reinterpret_cast<LPVOID>(&window_init), reinterpret_cast<LPVOID *>(&game_window_init));

		// disable fencing
		// NOTE: This bricks DirectStorage, need to find a workaround for "next gen" texture fencing.
		*legacy_texture_loading = true;
		*disable_directstorage = true;

		#undef RVA
	}

	auto
	AssetLoader::fini() -> void {
		for (auto &type_mod_list : mod_files_combined) {
			for (auto &mod_list : type_mod_list) {
				for (auto &[_, value] : mod_list) {
					g_output << "[loader] closing " << value.original_path.string() << std::endl;
					value.close();
				}

				mod_list.clear();
			}
		}
	}
}
