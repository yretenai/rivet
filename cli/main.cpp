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

std::array<std::string, 32> localization_enum {
	"none",
	"en",
	"en-gb",
	"da",
	"nl",
	"fi",
	"fr",
	"de",
	"it",
	"ja",
	"ko",
	"no",
	"pl",
	"pt",
	"ru",
	"es",
	"sv",
	"pt-br",
	"ar",
	"tr",
	"es-mx",
	"zh-hans",
	"zh-hant",
	"fr-ca",
	"cs",
	"hu",
	"el",
	"ro",
	"th",
	"vi",
	"id",
	"hr"
};

std::string get_rivet_asset_type(rivet_asset_type &type) {
	if(rivet_asset_type_lookup.find(type) != rivet_asset_type_lookup.end()) {
		return rivet_asset_type_lookup.at(type);
	}

	return std::string("UNKNOWN_") + std::to_string(static_cast<int>(type));
}

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
		for(const auto &archive : game->toc->archives) {
			// skip wem, soundbank, and movie archives for now
			if(archive->name.find("wem_") != std::string::npos) {
				continue;
			}

			if(archive->name.find("soundbank.") != std::string::npos) {
				continue;
			}

			if(archive->name.find("movie.") != std::string::npos) {
				continue;
			}

			for(const auto &pair : archive->assets) {
				if(pair.second->is_sub_file) {
					continue;
				}

				auto name = pair.second->name;
				if(name.empty()) {
					name = archive->name + std::string("/") + std::to_string(pair.second->id);
				}

				try {
					std::cout << "Dumping " << name << " (" << get_rivet_asset_type(pair.second->type) << ")"
							  << std::endl;
					std::filesystem::path asset_path = dump / name;
					if(pair.second->sub_files.size() == 31) {
						asset_path += std::string(".") + localization_enum[0];
					}

					std::filesystem::create_directories(asset_path.parent_path());
					{
						auto asset = game->open_file(pair.first, 0);
						if (!asset) {
							std::cout << "Failed to open asset " << name << std::endl;
							continue;
						}

						std::ofstream asset_file(asset_path, std::ios::binary | std::ios::out);
						asset_file.write(reinterpret_cast<const char *>(asset->data()),
										 static_cast<std::streamsize>(asset->byte_size()));
						asset_file.close();
					}

					if(pair.second->id & 0x80000000) {
						continue;
					}
					for(rivet_size i = 0; i < pair.second->sub_files.size(); i++) {
						auto stream_path = name;
						if(pair.second->sub_files.size() == 31) {
							stream_path += std::string(".") + localization_enum[i + 1];
						} else {
							stream_path += std::string(".stream");
							if(i > 0) {
								stream_path += std::to_string(i + 1);
							}
						}
						std::cout << "Dumping " << stream_path << " (" << get_rivet_asset_type(pair.second->type) << ")"
								  << std::endl;
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
					std::cout << "Failed to dump asset " << name << ": " << e.what() << std::endl;
				}
			}
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}
