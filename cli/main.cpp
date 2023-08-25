#include <fstream>
#include <iostream>
#include <array>

#include <rivet/data/toc.hpp>
#include <rivet/data/dag.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/rivet_game.hpp>

using namespace rivet;
using namespace rivet::structures;

std::unordered_map<rivet_asset_type, std::string> rivet_asset_type_lookup {
	{rivet_asset_type::LEVEL, "LEVEL"},
	{rivet_asset_type::ZONE, "ZONE"},
	{rivet_asset_type::ACTOR, "ACTOR"},
	{rivet_asset_type::CONDUIT, "CONDUIT"},
	{rivet_asset_type::CONFIG, "CONFIG"},
	{rivet_asset_type::CINEMATIC, "CINEMATIC"},
	{rivet_asset_type::MODEL, "MODEL"},
	{rivet_asset_type::ANIMATION_CLIP, "ANIMATION_CLIP"},
	{rivet_asset_type::ANIMATION_SET, "ANIMATION_SET"},
	{rivet_asset_type::MATERIAL, "MATERIAL"},
	{rivet_asset_type::MATERIAL_GRAPH, "MATERIAL_GRAPH"},
	{rivet_asset_type::TEXTURE, "TEXTURE"},
	{rivet_asset_type::ATMOSPHERE, "ATMOSPHERE"},
	{rivet_asset_type::EFFECT, "EFFECT"},
	{rivet_asset_type::SOUNDBANK, "SOUNDBANK"},
	{rivet_asset_type::LOCALIZATION, "LOCALIZATION"},
	{rivet_asset_type::ZONE_LIGHTING, "ZONE_LIGHTING"},
	{rivet_asset_type::LEVEL_LIGHTING, "LEVEL_LIGHTING"},
	{rivet_asset_type::NODE_GRAPH, "NODE_GRAPH"},
	{rivet_asset_type::WWISE_LOOKUP, "WWISE_LOOKUP"},
	{rivet_asset_type::NONE, "NONE"},
};

std::array<std::string, 31> localization_enum {
	"us",
	"gb",
	"dk",
	"nl",
	"fi",
	"fr",
	"de",
	"it",
	"jp",
	"kr",
	"no",
	"pl",
	"pt",
	"ru",
	"es",
	"se",
	"br",
	"ar",
	"tr",
	"la",
	"cs",
	"ct",
	"fc",
	"cz",
	"hu",
	"el",
	"ro",
	"th",
	"vi",
	"id",
	"hr"
};

int main(int argv, char** argc) {
	if (argv < 2) {
		std::cout << "usage: rivet-cli path/to/game path/to/dump" << std::endl;
		return 1;
	}

	try {
		auto game = std::make_shared<rivet_game>(std::filesystem::path(argc[1]));
		if (argv < 3) {
			std::cout << "no output path provided, exiting" << std::endl;
			return 0;
		}

		std::filesystem::path dump(argc[2]);
		for (const auto &archive: game->toc->archives) {
			for (const auto &pair: archive->assets) {
				if (pair.second->is_sub_file) {
					continue;
				}

				auto name = pair.second->name;
				if (name.empty()) {
					if ((pair.second->id & 0x4000000000000000) != 0) {
						auto locale = std::string("");
						if (archive->name.find('.') != std::string::npos) {
							locale = archive->name.substr(archive->name.find('.') + 1) + std::string("/");
						}

						name = std::string("sound/wem/") + locale + std::to_string(pair.second->id & 0xFFFFFFFF) +
							   std::string(".wem");
					} else {
						name = archive->name + std::string("/") + std::to_string(pair.second->id);
					}
				}

				try {
					std::cout << "Writing " << name << std::endl;
					std::filesystem::path asset_path = dump / name;
					if (archive->name.find('.') != std::string::npos) {
						asset_path += archive->name.substr(archive->name.find('.'));
					}

					std::filesystem::create_directories(asset_path.parent_path());
					{
						auto asset = game->open_file(archive, pair.second);
						if (!asset) {
							std::cout << "Failed to open asset " << name << std::endl;
							continue;
						}

						std::ofstream asset_file(asset_path, std::ios::binary | std::ios::out);
						asset_file.write(reinterpret_cast<const char *>(asset->data()),
										 static_cast<std::streamsize>(asset->byte_size()));
						asset_file.close();
					}

					if (pair.second->id & 0x80000000) {
						continue;
					}
					for (rivet_size i = 0; i < pair.second->sub_files.size(); i++) {
						auto stream_path = name;
						if (pair.second->sub_files.size() == 31) {
							stream_path += std::string(".") + localization_enum[i];
						} else {
							stream_path += std::string(".stream");
							if (i > 0) {
								stream_path += std::to_string(i + 1);
							}
						}
						std::cout << "Writing " << stream_path << std::endl;
						auto asset = game->open_file(pair.first, i + 1);
						if (!asset) {
							std::cout << "Failed to open asset " << name << std::endl;
							continue;
						}

						std::ofstream asset_file(dump / stream_path, std::ios::binary | std::ios::out);
						asset_file.write(reinterpret_cast<const char *>(asset->data()),
										 static_cast<std::streamsize>(asset->byte_size()));
						asset_file.close();
					}
				} catch (std::exception &e) {
					std::cout << "Failed to write asset " << name << ": " << e.what() << std::endl;
				}
			}
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}
