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
	struct RIVET_DDL_SHARED DamageStateConfigDataHeartChamber : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageStateConfigDataHeartChamber";
		constexpr static rivet::rivet_type_id type_id = 0x4a9e21f;

		constexpr static std::string_view ChamberConfig_type_name = "ChamberConfig";
		constexpr static rivet::rivet_type_id ChamberConfig_type_id = 0xeba4835f;
		constexpr static std::string_view NodeAConfig_type_name = "NodeAConfig";
		constexpr static rivet::rivet_type_id NodeAConfig_type_id = 0xdd0989a7;
		constexpr static std::string_view NodeBConfig_type_name = "NodeBConfig";
		constexpr static rivet::rivet_type_id NodeBConfig_type_id = 0xece1933a; 

		explicit DamageStateConfigDataHeartChamber() = default;
		explicit DamageStateConfigDataHeartChamber([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ChamberConfig {};
		std::string_view NodeAConfig {};
		std::string_view NodeBConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateConfigDataHeartChamber>;
	};
} // namespace rivet::ddl::generated

// clang-format on