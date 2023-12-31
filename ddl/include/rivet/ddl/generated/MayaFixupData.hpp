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

#include <rivet/ddl/generated/enums/xed092e3a.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MayaFixupData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MayaFixupData";
		constexpr static rivet::rivet_type_id type_id = 0x427c9dc5;

		constexpr static std::string_view Op_type_name = "Op";
		constexpr static rivet::rivet_type_id Op_type_id = 0xc6d13976;
		constexpr static std::string_view ReplaceElementChars_type_name = "ReplaceElementChars";
		constexpr static rivet::rivet_type_id ReplaceElementChars_type_id = 0x67402938;
		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view OldMayaPath_type_name = "OldMayaPath";
		constexpr static rivet::rivet_type_id OldMayaPath_type_id = 0x7227df2b;
		constexpr static std::string_view NewMayaPath_type_name = "NewMayaPath";
		constexpr static rivet::rivet_type_id NewMayaPath_type_id = 0xdaf15595;
		constexpr static std::string_view ScriptCmd_type_name = "ScriptCmd";
		constexpr static rivet::rivet_type_id ScriptCmd_type_id = 0x526d184c; 

		explicit MayaFixupData() = default;
		explicit MayaFixupData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xed092e3a Op {};
		std::string_view ReplaceElementChars {};
		std::string_view AssetPath {};
		std::string_view OldMayaPath {};
		std::string_view NewMayaPath {};
		std::string_view ScriptCmd {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MayaFixupData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
