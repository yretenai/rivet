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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VfxDurationEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VfxDurationEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0xa9131045;

		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view VfxPath_type_name = "VfxPath";
		constexpr static rivet::rivet_type_id VfxPath_type_id = 0x8e13e533; 

		explicit VfxDurationEngineItem() = default;
		explicit VfxDurationEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Duration {};
		std::string_view VfxPath {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VfxDurationEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
