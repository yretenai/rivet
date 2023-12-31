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

#include <rivet/ddl/generated/PortalPrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED PortalPassiveShiftPrius : PortalPrius {
		constexpr static std::string_view type_name = "PortalPassiveShiftPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc53dc290;

		constexpr static std::string_view GrindOffset_type_name = "GrindOffset";
		constexpr static rivet::rivet_type_id GrindOffset_type_id = 0xc834b5ec;
		constexpr static std::string_view GravityWellRange_type_name = "GravityWellRange";
		constexpr static rivet::rivet_type_id GravityWellRange_type_id = 0x14325366;
		constexpr static std::string_view GravityWellTargetingAngle_type_name = "GravityWellTargetingAngle";
		constexpr static rivet::rivet_type_id GravityWellTargetingAngle_type_id = 0x94aaf35; 

		explicit PortalPassiveShiftPrius() = default;
		explicit PortalPassiveShiftPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> GrindOffset {};
		float GravityWellRange {};
		float GravityWellTargetingAngle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalPassiveShiftPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
