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
	struct RIVET_DDL_SHARED BeetleTrailStartEvent : EventBase {
		constexpr static std::string_view type_name = "BeetleTrailStartEvent";
		constexpr static rivet::rivet_type_id type_id = 0x6ef5e29f;

		constexpr static std::string_view AVMaterialType_type_name = "AVMaterialType";
		constexpr static rivet::rivet_type_id AVMaterialType_type_id = 0x8f07ee1c; 

		explicit BeetleTrailStartEvent() = default;
		explicit BeetleTrailStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10b3c4cf AVMaterialType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeetleTrailStartEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
