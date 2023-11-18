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
	struct LODLimiterPerfSpecData; 

	struct RIVET_DDL_SHARED LODLimiterPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LODLimiterPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe1dac700;

		constexpr static std::string_view MinLOD_type_name = "MinLOD";
		constexpr static rivet::rivet_type_id MinLOD_type_id = 0xbdbc4ab;
		constexpr static std::string_view DisableDuringCinematics_type_name = "DisableDuringCinematics";
		constexpr static rivet::rivet_type_id DisableDuringCinematics_type_id = 0x860699a4;
		constexpr static std::string_view MinLODsPerSpec_type_name = "MinLODsPerSpec";
		constexpr static rivet::rivet_type_id MinLODsPerSpec_type_id = 0x5b05a821; 

		explicit LODLimiterPrius() = default;
		explicit LODLimiterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t MinLOD {};
		bool DisableDuringCinematics {};
		std::vector<std::shared_ptr<rivet::ddl::generated::LODLimiterPerfSpecData>> MinLODsPerSpec {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LODLimiterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
