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

#include <rivet/ddl/generated/enums/x29c933e2.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED Cinematic2MaterialOverrideMaterialActionDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2MaterialOverrideMaterialActionDef";
		constexpr static rivet::rivet_type_id type_id = 0xbca59346;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr static std::string_view DurationType_type_name = "DurationType";
		constexpr static rivet::rivet_type_id DurationType_type_id = 0x41e2529f;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr static std::string_view MaterialAsset_type_name = "MaterialAsset";
		constexpr static rivet::rivet_type_id MaterialAsset_type_id = 0xf55a8ae3; 

		explicit Cinematic2MaterialOverrideMaterialActionDef() = default;
		explicit Cinematic2MaterialOverrideMaterialActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		float Time {};
		rivet::ddl::generated::x29c933e2 DurationType {};
		float Duration {};
		std::string_view MaterialMappingName {};
		std::string_view MaterialAsset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2MaterialOverrideMaterialActionDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
