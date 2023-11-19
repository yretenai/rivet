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

#include <rivet/ddl/generated/DoorPrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED DoorSlidePrius : DoorPrius {
		constexpr static std::string_view type_name = "DoorSlidePrius";
		constexpr static rivet::rivet_type_id type_id = 0xe6ee6743;

		constexpr static std::string_view OpenOffset_type_name = "OpenOffset";
		constexpr static rivet::rivet_type_id OpenOffset_type_id = 0x44155d45;
		constexpr static std::string_view SlideTime_type_name = "SlideTime";
		constexpr static rivet::rivet_type_id SlideTime_type_id = 0x18e59566; 

		explicit DoorSlidePrius() = default;
		explicit DoorSlidePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> OpenOffset {};
		float SlideTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DoorSlidePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on