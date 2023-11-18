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

#include <rivet/ddl/generated/PrimStyleBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED PrimStyleProgramatic : PrimStyleBase {
		constexpr static std::string_view type_name = "PrimStyleProgramatic";
		constexpr static rivet::rivet_type_id type_id = 0x22b993a6;

		constexpr static std::string_view Style_type_name = "Style";
		constexpr static rivet::rivet_type_id Style_type_id = 0x2aee74ab;
		constexpr static std::string_view PosA_type_name = "PosA";
		constexpr static rivet::rivet_type_id PosA_type_id = 0x3ca9681e;
		constexpr static std::string_view PosB_type_name = "PosB";
		constexpr static rivet::rivet_type_id PosB_type_id = 0xa5a039a4;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d; 

		explicit PrimStyleProgramatic() = default;
		explicit PrimStyleProgramatic([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Style {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> PosA {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> PosB {};
		float Radius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrimStyleProgramatic>;
	};
} // namespace rivet::ddl::generated

// clang-format on
