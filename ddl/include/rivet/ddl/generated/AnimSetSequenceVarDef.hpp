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

#include <rivet/ddl/generated/enums/xdf8f8d7a.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector2; 

	struct RIVET_DDL_SHARED AnimSetSequenceVarDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimSetSequenceVarDef";
		constexpr static rivet::rivet_type_id type_id = 0x4de23a79;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr static std::string_view VarName_type_name = "VarName";
		constexpr static rivet::rivet_type_id VarName_type_id = 0x8cd13823;
		constexpr static std::string_view VarType_type_name = "VarType";
		constexpr static rivet::rivet_type_id VarType_type_id = 0x5e2c110c;
		constexpr static std::string_view VarValue_type_name = "VarValue";
		constexpr static rivet::rivet_type_id VarValue_type_id = 0x84a391b8; 

		explicit AnimSetSequenceVarDef() = default;
		explicit AnimSetSequenceVarDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		float Time {};
		std::string_view VarName {};
		rivet::ddl::generated::xdf8f8d7a VarType {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> VarValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSetSequenceVarDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
