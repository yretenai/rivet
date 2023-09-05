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

#include <rivet/ddl/generated/ShotBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BeamShotPrius : ShotBasePrius {
		constexpr const static std::string_view type_name = "BeamShotPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xdbeb5902;

		constexpr const static std::string_view ImpactJoint_type_name = "ImpactJoint";
		constexpr const static rivet::rivet_type_id ImpactJoint_type_id = 0xb5c2190b; 

		explicit BeamShotPrius() = default;
		explicit BeamShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ImpactJoint {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamShotPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
