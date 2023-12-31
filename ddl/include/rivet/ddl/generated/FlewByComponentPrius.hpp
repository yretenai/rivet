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
	struct RIVET_DDL_SHARED FlewByComponentPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FlewByComponentPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8855e487;

		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b;
		constexpr static std::string_view FlewByDistStart_type_name = "FlewByDistStart";
		constexpr static rivet::rivet_type_id FlewByDistStart_type_id = 0x4cd1b259;
		constexpr static std::string_view FlewByDistStop_type_name = "FlewByDistStop";
		constexpr static rivet::rivet_type_id FlewByDistStop_type_id = 0xc82f4bf7;
		constexpr static std::string_view MinSpeedStart_type_name = "MinSpeedStart";
		constexpr static rivet::rivet_type_id MinSpeedStart_type_id = 0x26710649;
		constexpr static std::string_view MinSpeedStop_type_name = "MinSpeedStop";
		constexpr static rivet::rivet_type_id MinSpeedStop_type_id = 0xd8bba9e6; 

		explicit FlewByComponentPrius() = default;
		explicit FlewByComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartEnabled {};
		float FlewByDistStart {};
		float FlewByDistStop {};
		float MinSpeedStart {};
		float MinSpeedStop {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlewByComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
