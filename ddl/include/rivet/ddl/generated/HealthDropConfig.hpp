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
	struct HealthDropTier; 

	struct RIVET_DDL_SHARED HealthDropConfig : ConfigBase {
		constexpr static std::string_view type_name = "HealthDropConfig";
		constexpr static rivet::rivet_type_id type_id = 0x10db3c65;

		constexpr static std::string_view HealthDropActor_type_name = "HealthDropActor";
		constexpr static rivet::rivet_type_id HealthDropActor_type_id = 0x7b468726;
		constexpr static std::string_view InWorldHealthDropScale_type_name = "InWorldHealthDropScale";
		constexpr static rivet::rivet_type_id InWorldHealthDropScale_type_id = 0x8b878e97;
		constexpr static std::string_view DropTiers_type_name = "DropTiers";
		constexpr static rivet::rivet_type_id DropTiers_type_id = 0xec761f91; 

		explicit HealthDropConfig() = default;
		explicit HealthDropConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view HealthDropActor {};
		float InWorldHealthDropScale {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HealthDropTier>> DropTiers {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthDropConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
