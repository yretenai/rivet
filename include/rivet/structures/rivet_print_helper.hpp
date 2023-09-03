// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <ostream>
#include <string_view>
#include <utility>
#include <vector>

#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

auto
operator<<(std::ostream &out, const rivet::structures::rivet_archive &archive) -> std::ostream & {
	return out << "rivet_archive { "
			   << "name: " << archive.name << ", "
			   << "time: " << archive.time << ", "
			   << "version: " << archive.version << ", "
			   << "unknown: " << archive.unknown << ", "
			   << "load_priority: " << archive.load_priority << " }";
}

auto
operator<<(std::ostream &out, const rivet::rivet_locale &locale) -> std::ostream & {
	switch (locale) {
		case rivet::rivet_locale::None: return out << "None";
		case rivet::rivet_locale::English: return out << "English";
		case rivet::rivet_locale::EnglishGB: return out << "EnglishGB";
		case rivet::rivet_locale::Danish: return out << "Danish";
		case rivet::rivet_locale::Dutch: return out << "Dutch";
		case rivet::rivet_locale::Finnish: return out << "Finnish";
		case rivet::rivet_locale::French: return out << "French";
		case rivet::rivet_locale::German: return out << "German";
		case rivet::rivet_locale::Italian: return out << "Italian";
		case rivet::rivet_locale::Japanese: return out << "Japanese";
		case rivet::rivet_locale::Korean: return out << "Korean";
		case rivet::rivet_locale::Norwegian: return out << "Norwegian";
		case rivet::rivet_locale::Polish: return out << "Polish";
		case rivet::rivet_locale::Portuguese: return out << "Portuguese";
		case rivet::rivet_locale::Russian: return out << "Russian";
		case rivet::rivet_locale::Spanish: return out << "Spanish";
		case rivet::rivet_locale::Swedish: return out << "Swedish";
		case rivet::rivet_locale::PortugueseBR: return out << "PortugueseBR";
		case rivet::rivet_locale::Arabic: return out << "Arabic";
		case rivet::rivet_locale::Turkish: return out << "Turkish";
		case rivet::rivet_locale::SpanishLATAM: return out << "SpanishLATAM";
		case rivet::rivet_locale::ChineseSimplified: return out << "ChineseSimplified";
		case rivet::rivet_locale::ChineseTraditional: return out << "ChineseTraditional";
		case rivet::rivet_locale::FrenchCA: return out << "FrenchCA";
		case rivet::rivet_locale::Czech: return out << "Czech";
		case rivet::rivet_locale::Hungarian: return out << "Hungarian";
		case rivet::rivet_locale::Greek: return out << "Greek";
		case rivet::rivet_locale::Romanian: return out << "Romanian";
		case rivet::rivet_locale::Thai: return out << "Thai";
		case rivet::rivet_locale::Vietnamese: return out << "Vietnamese";
		case rivet::rivet_locale::Indonesian: return out << "Indonesian";
		case rivet::rivet_locale::Croatian: return out << "Croatian";
		default: return out << "Unknown";
	}
}

auto
operator<<(std::ostream &out, const rivet::structures::rivet_asset_type &type) -> std::ostream & {
	switch (type) {
		case rivet::structures::rivet_asset_type::LEVEL: return out << "LEVEL";
		case rivet::structures::rivet_asset_type::ZONE: return out << "ZONE";
		case rivet::structures::rivet_asset_type::ACTOR: return out << "ACTOR";
		case rivet::structures::rivet_asset_type::CONDUIT: return out << "CONDUIT";
		case rivet::structures::rivet_asset_type::CONFIG: return out << "CONFIG";
		case rivet::structures::rivet_asset_type::CINEMATIC2: return out << "CINEMATIC2";
		case rivet::structures::rivet_asset_type::MODEL: return out << "MODEL";
		case rivet::structures::rivet_asset_type::ANIMATION_CLIP: return out << "ANIMATION_CLIP";
		case rivet::structures::rivet_asset_type::ANIMATION_SET: return out << "ANIMATION_SET";
		case rivet::structures::rivet_asset_type::MATERIAL: return out << "MATERIAL";
		case rivet::structures::rivet_asset_type::MATERIAL_GRAPH: return out << "MATERIAL_GRAPH";
		case rivet::structures::rivet_asset_type::TEXTURE: return out << "TEXTURE";
		case rivet::structures::rivet_asset_type::ATMOSPHERE: return out << "ATMOSPHERE";
		case rivet::structures::rivet_asset_type::EFFECT: return out << "EFFECT";
		case rivet::structures::rivet_asset_type::SOUNDBANK: return out << "SOUNDBANK";
		case rivet::structures::rivet_asset_type::LOCALIZATION: return out << "LOCALIZATION";
		case rivet::structures::rivet_asset_type::ZONE_LIGHTING: return out << "ZONE_LIGHTING";
		case rivet::structures::rivet_asset_type::LEVEL_LIGHTING: return out << "LEVEL_LIGHTING";
		case rivet::structures::rivet_asset_type::NODE_GRAPH: return out << "NODE_GRAPH";
		case rivet::structures::rivet_asset_type::WWISE_LOOKUP: return out << "WWISE_LOOKUP";
		default: return out << "UNKNOWN_" << static_cast<uint32_t>(type);
	}
}

auto
operator<<(std::ostream &out, const rivet::rivet_asset_category &category) -> std::ostream & {
	switch (category) {
		case rivet::rivet_asset_category::Game: return out << "Game";
		case rivet::rivet_asset_category::AudioStream: return out << "AudioStream";
		case rivet::rivet_asset_category::AnimationStream: return out << "AnimationStream";
		case rivet::rivet_asset_category::ZoneLightBin: return out << "ZoneLightBin";
		default: return out << "Unknown";
	}
}

auto
operator<<(std::ostream &out, const rivet::structures::rivet_asset_flags &flags) -> std::ostream & {
	return out << "rivet_asset_flags { "
			   << "is_stream: " << flags.is_stream << ", "
			   << "is_texture: " << flags.is_texture << ", "
			   << "has_header: " << flags.has_header << ", "
			   << "is_virtual: " << flags.is_virtual << ", "
			   << "is_key: " << flags.is_key << " }";
}

auto
operator<<(std::ostream &out, const std::vector<std::pair<std::string_view, rivet::rivet_asset_id>> &dependencies) -> std::ostream & {
	out << "{ ";
	for (auto i = 0; i < dependencies.size(); i++) {
		out << dependencies.at(i).first;
		if (i != dependencies.size() - 1) {
			out << ", ";
		}
	}
	return out << " }";
}

auto
operator<<(std::ostream &out, const rivet::structures::rivet_asset &asset) -> std::ostream & {
	return out << "rivet_asset { "
			   << "name: " << asset.name.value_or("null") << ", "
			   << "size: " << asset.size << ", "
			   << "archive: " << asset.archive->name << ", "
			   << "offset: " << asset.offset << ", "
			   << "locale: " << asset.locale << ", "
			   << "category: " << asset.category << ", "
			   << "flags: " << asset.flags << ", "
			   << "dependencies: " << asset.dependencies << " }";
}
