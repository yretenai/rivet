// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct HoudiniConfigDataFileGroup;
	struct HoudiniConfigDataFile;
	struct HoudiniConfigDataInteger;
	struct HoudiniConfigDataFloat;
	struct HoudiniConfigDataString; 

	struct RIVET_DDL_SHARED HoudiniConfig : ConfigBase {
		constexpr const static std::string_view type_name = "HoudiniConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x2029034f;

		constexpr const static std::string_view FileGroups_type_name = "FileGroups";
		constexpr const static rivet::rivet_type_id FileGroups_type_id = 0xc4c3ed4;
		constexpr const static std::string_view Files_type_name = "Files";
		constexpr const static rivet::rivet_type_id Files_type_id = 0x1f668c98;
		constexpr const static std::string_view Floats_type_name = "Floats";
		constexpr const static rivet::rivet_type_id Floats_type_id = 0xa5da43f9;
		constexpr const static std::string_view Integers_type_name = "Integers";
		constexpr const static rivet::rivet_type_id Integers_type_id = 0x7687a458;
		constexpr const static std::string_view Strings_type_name = "Strings";
		constexpr const static rivet::rivet_type_id Strings_type_id = 0xb57009cd; 

		explicit HoudiniConfig() = default;
		explicit HoudiniConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::HoudiniConfigDataFileGroup>> FileGroups {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HoudiniConfigDataFile>> Files {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HoudiniConfigDataFloat>> Floats {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HoudiniConfigDataInteger>> Integers {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HoudiniConfigDataString>> Strings {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoudiniConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
