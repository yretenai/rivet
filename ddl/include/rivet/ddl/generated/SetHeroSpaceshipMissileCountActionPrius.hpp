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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetHeroSpaceshipMissileCountActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetHeroSpaceshipMissileCountActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x2b1285cc;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view NumMissiles_type_name = "NumMissiles";
		constexpr static rivet::rivet_type_id NumMissiles_type_id = 0x10a27bf5; 

		explicit SetHeroSpaceshipMissileCountActionPrius() = default;
		explicit SetHeroSpaceshipMissileCountActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		uint32_t NumMissiles {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetHeroSpaceshipMissileCountActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
