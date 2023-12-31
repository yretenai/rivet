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
	struct RIVET_DDL_SHARED DamageTunerBasePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageTunerBasePrius";
		constexpr static rivet::rivet_type_id type_id = 0x6731a781;

		constexpr static std::string_view LifeTime_type_name = "LifeTime";
		constexpr static rivet::rivet_type_id LifeTime_type_id = 0x67d422c6; 

		explicit DamageTunerBasePrius() = default;
		explicit DamageTunerBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float LifeTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageTunerBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
