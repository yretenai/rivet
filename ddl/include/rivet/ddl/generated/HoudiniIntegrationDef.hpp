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
	struct TweakVarFile;
	struct HoudiniIntegrationPlugin;
	struct HoudiniIntegrationLicense; 

	struct RIVET_DDL_SHARED HoudiniIntegrationDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HoudiniIntegrationDef";
		constexpr static rivet::rivet_type_id type_id = 0x880bf299;

		constexpr static std::string_view License_type_name = "License";
		constexpr static rivet::rivet_type_id License_type_id = 0x56829721;
		constexpr static std::string_view Plugin_type_name = "Plugin";
		constexpr static rivet::rivet_type_id Plugin_type_id = 0xd71669f3;
		constexpr static std::string_view Parameters_type_name = "Parameters";
		constexpr static rivet::rivet_type_id Parameters_type_id = 0xdda516c7;
		constexpr static std::string_view SavedParameters_type_name = "SavedParameters";
		constexpr static rivet::rivet_type_id SavedParameters_type_id = 0x32627343; 

		explicit HoudiniIntegrationDef() = default;
		explicit HoudiniIntegrationDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HoudiniIntegrationLicense> License {};
		std::shared_ptr<rivet::ddl::generated::HoudiniIntegrationPlugin> Plugin {};
		std::shared_ptr<rivet::ddl::generated::TweakVarFile> Parameters {};
		std::vector<std::shared_ptr<rivet::ddl::generated::TweakVarFile>> SavedParameters {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoudiniIntegrationDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
