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

#include <rivet/ddl/generated/enums/x10b3c4cf.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ProjectileHitEvent : EventBase {
		constexpr static std::string_view type_name = "ProjectileHitEvent";
		constexpr static rivet::rivet_type_id type_id = 0xe385024;

		constexpr static std::string_view HitSpeed_type_name = "HitSpeed";
		constexpr static rivet::rivet_type_id HitSpeed_type_id = 0x1a75b919;
		constexpr static std::string_view Material_type_name = "Material";
		constexpr static rivet::rivet_type_id Material_type_id = 0x86bfc8e5;
		constexpr static std::string_view PerkName_type_name = "PerkName";
		constexpr static rivet::rivet_type_id PerkName_type_id = 0x9da07479;
		constexpr static std::string_view EdgeImpact_type_name = "EdgeImpact";
		constexpr static rivet::rivet_type_id EdgeImpact_type_id = 0x7f3a87a1; 

		explicit ProjectileHitEvent() = default;
		explicit ProjectileHitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HitSpeed {};
		rivet::ddl::generated::x10b3c4cf Material {};
		std::string_view PerkName {};
		bool EdgeImpact {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileHitEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
