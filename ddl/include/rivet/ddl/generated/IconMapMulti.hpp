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

#include <rivet/ddl/generated/IconMapBase.hpp> 

namespace rivet::ddl::generated {
	struct IconMapMultiChild; 

	struct RIVET_DDL_SHARED IconMapMulti : IconMapBase {
		constexpr static std::string_view type_name = "IconMapMulti";
		constexpr static rivet::rivet_type_id type_id = 0x26d25b34;

		constexpr static std::string_view IconMaps_type_name = "IconMaps";
		constexpr static rivet::rivet_type_id IconMaps_type_id = 0xf32183d5; 

		explicit IconMapMulti() = default;
		explicit IconMapMulti([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::IconMapMultiChild>> IconMaps {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapMulti>;
	};
} // namespace rivet::ddl::generated

// clang-format on
