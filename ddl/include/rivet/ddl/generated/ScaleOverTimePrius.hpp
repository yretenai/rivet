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
	struct RIVET_DDL_SHARED ScaleOverTimePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScaleOverTimePrius";
		constexpr static rivet::rivet_type_id type_id = 0xa9cad9a0;

		constexpr static std::string_view InitialScale_type_name = "InitialScale";
		constexpr static rivet::rivet_type_id InitialScale_type_id = 0xf9496656;
		constexpr static std::string_view FinalScale_type_name = "FinalScale";
		constexpr static rivet::rivet_type_id FinalScale_type_id = 0x68b6b2e3;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view AccountForDynamicPhysics_type_name = "AccountForDynamicPhysics";
		constexpr static rivet::rivet_type_id AccountForDynamicPhysics_type_id = 0x20e68846; 

		explicit ScaleOverTimePrius() = default;
		explicit ScaleOverTimePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float InitialScale {};
		float FinalScale {};
		float Duration {};
		bool AccountForDynamicPhysics {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScaleOverTimePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
