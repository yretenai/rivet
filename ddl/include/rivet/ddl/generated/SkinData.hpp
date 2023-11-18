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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SkinData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinData";
		constexpr static rivet::rivet_type_id type_id = 0x1131f88a;

		constexpr static std::string_view BodyLookGroup_type_name = "BodyLookGroup";
		constexpr static rivet::rivet_type_id BodyLookGroup_type_id = 0xaab66ede;
		constexpr static std::string_view GloveLookGroup_type_name = "GloveLookGroup";
		constexpr static rivet::rivet_type_id GloveLookGroup_type_id = 0xc1a6779f;
		constexpr static std::string_view BootsLookGroup_type_name = "BootsLookGroup";
		constexpr static rivet::rivet_type_id BootsLookGroup_type_id = 0x8a133d52;
		constexpr static std::string_view CapLookGroup_type_name = "CapLookGroup";
		constexpr static rivet::rivet_type_id CapLookGroup_type_id = 0xc407913a;
		constexpr static std::string_view HelmetModel_type_name = "HelmetModel";
		constexpr static rivet::rivet_type_id HelmetModel_type_id = 0x537019f1;
		constexpr static std::string_view OxygenTankModel_type_name = "OxygenTankModel";
		constexpr static rivet::rivet_type_id OxygenTankModel_type_id = 0xce8dd78b; 

		explicit SkinData() = default;
		explicit SkinData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BodyLookGroup {};
		std::string_view GloveLookGroup {};
		std::string_view BootsLookGroup {};
		std::string_view CapLookGroup {};
		std::string_view HelmetModel {};
		std::string_view OxygenTankModel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
