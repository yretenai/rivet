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

#include <rivet/ddl/generated/UDSEventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MechanicMitigateEvent : UDSEventBase {
		constexpr static std::string_view type_name = "MechanicMitigateEvent";
		constexpr static rivet::rivet_type_id type_id = 0x72209a19;

		constexpr static std::string_view usedMechanics_type_name = "usedMechanics";
		constexpr static rivet::rivet_type_id usedMechanics_type_id = 0xd8ad4a41;
		constexpr static std::string_view initiatorActor_type_name = "initiatorActor";
		constexpr static rivet::rivet_type_id initiatorActor_type_id = 0x556b1ac5;
		constexpr static std::string_view targetActors_type_name = "targetActors";
		constexpr static rivet::rivet_type_id targetActors_type_id = 0x35ab613b; 

		explicit MechanicMitigateEvent() = default;
		explicit MechanicMitigateEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> usedMechanics {};
		std::string_view initiatorActor {};
		std::vector<std::string_view> targetActors {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MechanicMitigateEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on