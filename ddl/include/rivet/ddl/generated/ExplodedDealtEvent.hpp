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

#include <rivet/ddl/generated/enums/DamageTypes.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ExplodedDealtEvent : EventBase {
		constexpr static std::string_view type_name = "ExplodedDealtEvent";
		constexpr static rivet::rivet_type_id type_id = 0xa79c1a7d;

		constexpr static std::string_view LastDamageType_type_name = "LastDamageType";
		constexpr static rivet::rivet_type_id LastDamageType_type_id = 0x186cc71b;
		constexpr static std::string_view SmokePuff_type_name = "SmokePuff";
		constexpr static rivet::rivet_type_id SmokePuff_type_id = 0xa66a5725;
		constexpr static std::string_view ExplodedActorLocation_type_name = "ExplodedActorLocation";
		constexpr static rivet::rivet_type_id ExplodedActorLocation_type_id = 0x164a1f81; 

		explicit ExplodedDealtEvent() = default;
		explicit ExplodedDealtEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::DamageTypes LastDamageType {};
		bool SmokePuff {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> ExplodedActorLocation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplodedDealtEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
