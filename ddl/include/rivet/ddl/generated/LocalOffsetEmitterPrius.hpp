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

#include <rivet/ddl/generated/WeaponEmitterBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED LocalOffsetEmitterPrius : WeaponEmitterBasePrius {
		constexpr static std::string_view type_name = "LocalOffsetEmitterPrius";
		constexpr static rivet::rivet_type_id type_id = 0xb9099797;

		constexpr static std::string_view EmitFromUser_type_name = "EmitFromUser";
		constexpr static rivet::rivet_type_id EmitFromUser_type_id = 0x13b721db;
		constexpr static std::string_view Offset_type_name = "Offset";
		constexpr static rivet::rivet_type_id Offset_type_id = 0x677284b7; 

		explicit LocalOffsetEmitterPrius() = default;
		explicit LocalOffsetEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool EmitFromUser {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Offset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LocalOffsetEmitterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
