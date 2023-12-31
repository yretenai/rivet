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

#include <rivet/ddl/generated/enums/xc74f3c1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED Cinematic2Settings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2Settings";
		constexpr static rivet::rivet_type_id type_id = 0x17a28287;

		constexpr static std::string_view TimecodeMode_type_name = "TimecodeMode";
		constexpr static rivet::rivet_type_id TimecodeMode_type_id = 0x71f2be5e;
		constexpr static std::string_view VfxUISpawnDelay_type_name = "VfxUISpawnDelay";
		constexpr static rivet::rivet_type_id VfxUISpawnDelay_type_id = 0x7d223a82;
		constexpr static std::string_view MovieUIUpdateDelay_type_name = "MovieUIUpdateDelay";
		constexpr static rivet::rivet_type_id MovieUIUpdateDelay_type_id = 0x78f3d516; 

		explicit Cinematic2Settings() = default;
		explicit Cinematic2Settings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc74f3c1 TimecodeMode {};
		float VfxUISpawnDelay {};
		float MovieUIUpdateDelay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2Settings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
