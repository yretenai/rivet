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
	struct TargetedAttack; 

	struct RIVET_DDL_SHARED AttackTargeterPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AttackTargeterPrius";
		constexpr static rivet::rivet_type_id type_id = 0x48b4e612;

		constexpr static std::string_view Attacks_type_name = "Attacks";
		constexpr static rivet::rivet_type_id Attacks_type_id = 0xaba8853a;
		constexpr static std::string_view TargetedLayer_type_name = "TargetedLayer";
		constexpr static rivet::rivet_type_id TargetedLayer_type_id = 0xfbffead5; 

		explicit AttackTargeterPrius() = default;
		explicit AttackTargeterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::TargetedAttack>> Attacks {};
		uint32_t TargetedLayer {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttackTargeterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
