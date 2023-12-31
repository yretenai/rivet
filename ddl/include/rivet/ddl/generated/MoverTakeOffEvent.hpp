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
	struct RIVET_DDL_SHARED MoverTakeOffEvent : EventBase {
		constexpr static std::string_view type_name = "MoverTakeOffEvent";
		constexpr static rivet::rivet_type_id type_id = 0xcba7688f;

		constexpr static std::string_view GroundMaterial_type_name = "GroundMaterial";
		constexpr static rivet::rivet_type_id GroundMaterial_type_id = 0x4ba3454c; 

		explicit MoverTakeOffEvent() = default;
		explicit MoverTakeOffEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10b3c4cf GroundMaterial {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverTakeOffEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
