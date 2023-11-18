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

#include <rivet/ddl/generated/enums/x6310440e.hpp>
#include <rivet/ddl/generated/GamePickupItemPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PickupArachnodroidPrius : GamePickupItemPrius {
		constexpr static std::string_view type_name = "PickupArachnodroidPrius";
		constexpr static rivet::rivet_type_id type_id = 0x57883b24;

		constexpr static std::string_view PickupType_type_name = "PickupType";
		constexpr static rivet::rivet_type_id PickupType_type_id = 0x467560d9; 

		explicit PickupArachnodroidPrius() = default;
		explicit PickupArachnodroidPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x6310440e PickupType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupArachnodroidPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
