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
	struct StatusEffectsData; 

	struct RIVET_DDL_SHARED StatusEmitterBasePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StatusEmitterBasePrius";
		constexpr static rivet::rivet_type_id type_id = 0xa041059e;

		constexpr static std::string_view StatusEffectsData_type_name = "StatusEffectsData";
		constexpr static rivet::rivet_type_id StatusEffectsData_type_id = 0x3436174e;
		constexpr static std::string_view ApplyEffectsWhileDead_type_name = "ApplyEffectsWhileDead";
		constexpr static rivet::rivet_type_id ApplyEffectsWhileDead_type_id = 0x7b27a8fa; 

		explicit StatusEmitterBasePrius() = default;
		explicit StatusEmitterBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::StatusEffectsData> StatusEffectsData {};
		bool ApplyEffectsWhileDead {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEmitterBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
