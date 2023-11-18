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

#include <rivet/ddl/generated/enums/x445aeabc.hpp>
#include <rivet/ddl/generated/IconMapBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED IconMapStickSwap : IconMapBase {
		constexpr static std::string_view type_name = "IconMapStickSwap";
		constexpr static rivet::rivet_type_id type_id = 0x44c5ae1d;

		constexpr static std::string_view NormalIconId_type_name = "NormalIconId";
		constexpr static rivet::rivet_type_id NormalIconId_type_id = 0x97e90ae;
		constexpr static std::string_view SwappedIconId_type_name = "SwappedIconId";
		constexpr static rivet::rivet_type_id SwappedIconId_type_id = 0xab0e13f1; 

		explicit IconMapStickSwap() = default;
		explicit IconMapStickSwap([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x445aeabc NormalIconId {};
		rivet::ddl::generated::x445aeabc SwappedIconId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapStickSwap>;
	};
} // namespace rivet::ddl::generated

// clang-format on
