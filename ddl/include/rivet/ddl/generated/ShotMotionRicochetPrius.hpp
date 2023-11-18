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

#include <rivet/ddl/generated/BasicShotMotionPrius.hpp> 

namespace rivet::ddl::generated {
	struct RicochetData; 

	struct RIVET_DDL_SHARED ShotMotionRicochetPrius : BasicShotMotionPrius {
		constexpr static std::string_view type_name = "ShotMotionRicochetPrius";
		constexpr static rivet::rivet_type_id type_id = 0x9cc91e8f;

		constexpr static std::string_view RicochetDataList_type_name = "RicochetDataList";
		constexpr static rivet::rivet_type_id RicochetDataList_type_id = 0x461557c4; 

		explicit ShotMotionRicochetPrius() = default;
		explicit ShotMotionRicochetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::RicochetData>> RicochetDataList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionRicochetPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
