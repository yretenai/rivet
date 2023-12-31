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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ChangeShotTargetEvent : EventBase {
		constexpr static std::string_view type_name = "ChangeShotTargetEvent";
		constexpr static rivet::rivet_type_id type_id = 0x89ccc49d;

		constexpr static std::string_view TargetPosition_type_name = "TargetPosition";
		constexpr static rivet::rivet_type_id TargetPosition_type_id = 0x52222f11; 

		explicit ChangeShotTargetEvent() = default;
		explicit ChangeShotTargetEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> TargetPosition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeShotTargetEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
