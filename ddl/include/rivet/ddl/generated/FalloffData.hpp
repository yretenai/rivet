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
	struct RIVET_DDL_SHARED FalloffData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "FalloffData";
		constexpr const static rivet::rivet_type_id type_id = 0xc4a8c5a1;

		constexpr const static std::string_view FalloffStart_type_name = "FalloffStart";
		constexpr const static rivet::rivet_type_id FalloffStart_type_id = 0x387842a8;
		constexpr const static std::string_view FalloffEnd_type_name = "FalloffEnd";
		constexpr const static rivet::rivet_type_id FalloffEnd_type_id = 0x52627f04;
		constexpr const static std::string_view FalloffCurve_type_name = "FalloffCurve";
		constexpr const static rivet::rivet_type_id FalloffCurve_type_id = 0xf0984a90;
		constexpr const static std::string_view FalloffFactor_type_name = "FalloffFactor";
		constexpr const static rivet::rivet_type_id FalloffFactor_type_id = 0x9a97b7f1;
		constexpr const static std::string_view ApplyToStatus_type_name = "ApplyToStatus";
		constexpr const static rivet::rivet_type_id ApplyToStatus_type_id = 0xcf27e502; 

		explicit FalloffData() = default;
		explicit FalloffData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FalloffStart {};
		float FalloffEnd {};
		float FalloffCurve {};
		float FalloffFactor {};
		bool ApplyToStatus {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FalloffData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
