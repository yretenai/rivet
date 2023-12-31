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

#include <rivet/ddl/generated/TargetingBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct TierData; 

	struct RIVET_DDL_SHARED TieredAggroTargetingPrius : TargetingBasePrius {
		constexpr static std::string_view type_name = "TieredAggroTargetingPrius";
		constexpr static rivet::rivet_type_id type_id = 0x749ba1b6;

		constexpr static std::string_view Data_type_name = "Data";
		constexpr static rivet::rivet_type_id Data_type_id = 0x9d6333d3; 

		explicit TieredAggroTargetingPrius() = default;
		explicit TieredAggroTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::TierData> Data {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TieredAggroTargetingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
