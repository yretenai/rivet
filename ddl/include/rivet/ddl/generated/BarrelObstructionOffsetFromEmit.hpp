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

#include <rivet/ddl/generated/enums/x77a4e9ba.hpp>
#include <rivet/ddl/generated/BarrelObstructionBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED BarrelObstructionOffsetFromEmit : BarrelObstructionBase {
		constexpr static std::string_view type_name = "BarrelObstructionOffsetFromEmit";
		constexpr static rivet::rivet_type_id type_id = 0x8c268224;

		constexpr static std::string_view EmitterIndex_type_name = "EmitterIndex";
		constexpr static rivet::rivet_type_id EmitterIndex_type_id = 0x23b96c51;
		constexpr static std::string_view LocalSpaceOffset_type_name = "LocalSpaceOffset";
		constexpr static rivet::rivet_type_id LocalSpaceOffset_type_id = 0x1f64e101; 

		explicit BarrelObstructionOffsetFromEmit() = default;
		explicit BarrelObstructionOffsetFromEmit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x77a4e9ba EmitterIndex {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> LocalSpaceOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BarrelObstructionOffsetFromEmit>;
	};
} // namespace rivet::ddl::generated

// clang-format on
