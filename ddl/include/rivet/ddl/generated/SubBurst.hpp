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
	struct Burst; 

	struct RIVET_DDL_SHARED SubBurst : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SubBurst";
		constexpr const static rivet::rivet_type_id type_id = 0x3c4ddd1e;

		constexpr const static std::string_view PauseDurationMin_type_name = "PauseDurationMin";
		constexpr const static rivet::rivet_type_id PauseDurationMin_type_id = 0x75c66c1e;
		constexpr const static std::string_view PauseDurationMax_type_name = "PauseDurationMax";
		constexpr const static rivet::rivet_type_id PauseDurationMax_type_id = 0x49cb5347;
		constexpr const static std::string_view PauseDuration_type_name = "PauseDuration";
		constexpr const static rivet::rivet_type_id PauseDuration_type_id = 0xa7fac1ca;
		constexpr const static std::string_view Burst_type_name = "Burst";
		constexpr const static rivet::rivet_type_id Burst_type_id = 0x646d6c71; 

		explicit SubBurst() = default;
		explicit SubBurst([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PauseDurationMin {};
		float PauseDurationMax {};
		float PauseDuration {};
		std::shared_ptr<rivet::ddl::generated::Burst> Burst {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SubBurst>;
	};
} // namespace rivet::ddl::generated

// clang-format on
