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

#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ExplodedEvent : EventBase {
		constexpr static std::string_view type_name = "ExplodedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x95b390d9;

		constexpr static std::string_view LastDamageType_type_name = "LastDamageType";
		constexpr static rivet::rivet_type_id LastDamageType_type_id = 0x186cc71b;
		constexpr static std::string_view HideDelay_type_name = "HideDelay";
		constexpr static rivet::rivet_type_id HideDelay_type_id = 0xde52bd13;
		constexpr static std::string_view SmokePuff_type_name = "SmokePuff";
		constexpr static rivet::rivet_type_id SmokePuff_type_id = 0xa66a5725; 

		explicit ExplodedEvent() = default;
		explicit ExplodedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x8d7e44cf LastDamageType {};
		float HideDelay {};
		bool SmokePuff {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplodedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
