#include <fstream>
#include <iostream>

#include <rivet/data/toc.hpp>
#include <rivet/data/dag.hpp>
#include <rivet/structures/rivet_asset.hpp>

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

std::string get_rivet_asset_type(rivet_asset_type &type) {
	if(rivet_asset_type_lookup.find(type) != rivet_asset_type_lookup.end()) {
		return rivet_asset_type_lookup.at(type);
	}

	return std::string("UNKNOWN_") + std::to_string(static_cast<int>(type));
}

int main(int argv, char** argc) {
	if (argv < 2) {
		std::cout << "usage: rivet-cli path/to/toc path/to/dag" << std::endl;
		return 1;
	}

 	auto toc = std::make_shared<rivet::data::archive_toc>(rivet::rivet_data_array::from_file(argc[1]));
		auto dag = std::make_shared<rivet::data::dependency_dag>(rivet::rivet_data_array::from_file(argc[2]), toc);

		for(const auto& archive : toc->archives) {
			std::cout << archive->name << std::endl;
			for (const auto &asset: archive->assets) {
				std::cout << "\t" << std::hex << asset->id << "\t" << std::dec << asset->sub_files.size() << "\t" << asset->name << "\t" << get_rivet_asset_type(asset->type) << std::endl;
				std::cout << "\t\t\t\t\t" << asset->size << "\t" << asset->offset << std::endl;
				for(const auto &sub : asset->sub_files) {
					auto sub_file = sub.lock();
					std::cout << "\t\t\t\t\t" << sub_file->size << "\t" << sub_file->offset << std::endl;
				}
			}
			std::cout << std::endl;
		}

		std::cout << "missing" << std::endl;
		for(const auto& pair : dag->missing_assets) {
			std::cout << "\t" << std::hex << pair.first << "\t" << "\t" << pair.second->name << std::endl;
		}
		std::cout << std::endl;

		std::cout << "groups" << std::endl;
		for(const auto& group : dag->groups) {
			if(group.empty()) {
				continue;
			}

			for(const auto &pair : group) {
				std::cout << "\t" << pair.first << std::endl;
			}
			std::cout << std::endl;
		}

	return 0;
}
