#include <fstream>
#include <iostream>
#include <array>

#include <rivet/data/toc.hpp>
#include <rivet/data/dag.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/rivet_game.hpp>

using namespace rivet;
using namespace rivet::structures;

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

int main(int argv, char **argc) {
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

		auto streamed_files_path = std::filesystem::path("streamed_files.txt");
		if(std::filesystem::exists(streamed_files_path)) {
			game->load_streamed_files_list(streamed_files_path);
		}

		std::filesystem::path dump(argc[2]);
		for(auto locale_id = 0; locale_id < 32; locale_id++) {
			std::string local_path;
			if(locale_id > 0) {
				local_path += "locale/" + localization_enum[locale_id - 1] + "/";
			}

			auto locale = static_cast<rivet_locale>(locale_id);

			for(auto category_id = 0; category_id < 4; category_id++) {
				auto category = static_cast<rivet_asset_category>(category_id);
				for(auto subtype_id = 0; subtype_id < 2; subtype_id++) {
					auto assets = game->toc->get_group(locale, category, subtype_id == 1);

					for(const auto &asset: assets) {
						auto name = asset->name;
						if(name.empty()) {
							if(asset->id & 0x4000000000000000) {
								name = "sound/wem/" + std::to_string(asset->id & 0xFFFFFFFF) + std::string(".wem");
							} else {
								name = asset->archive->name + "/" + std::to_string(asset->id);
							}
						} else {
							rivet::hash::normalize_asset_path(name);
						}

						auto asset_path = local_path + name;
						if(subtype_id == 1 && asset->is_streamed_texture) {
							asset_path += ".stream";
						}

						std::cout << "Writing " << asset_path << std::endl;

						auto asset_data = game->open_file(asset);
						if (!asset_data) {
							std::cout << "Failed to open asset " << name << std::endl;
							continue;
						}

						// rename .movie to .bik
						if(asset_data->get<uint32_t>(0) == 0x6A32424B) {
							asset_path = asset_path.substr(0, asset_path.find_last_of('.')) + ".bik";
						}

						auto output_path = dump / asset_path;
						std::filesystem::create_directories(output_path.parent_path());
						std::ofstream asset_file(output_path, std::ios::binary | std::ios::out);
						asset_file.write(reinterpret_cast<const char *>(asset_data->data()),
										 static_cast<std::streamsize>(asset_data->byte_size()));
						asset_file.close();
					}
				}
			}
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	return 0;
}
