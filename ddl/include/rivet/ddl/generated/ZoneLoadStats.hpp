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
	struct RIVET_DDL_SHARED ZoneLoadStats : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ZoneLoadStats";
		constexpr static rivet::rivet_type_id type_id = 0x61c86c;

		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr static std::string_view LoadRequested_type_name = "LoadRequested";
		constexpr static rivet::rivet_type_id LoadRequested_type_id = 0x4b7e549b;
		constexpr static std::string_view LoadFinished_type_name = "LoadFinished";
		constexpr static rivet::rivet_type_id LoadFinished_type_id = 0x539e147d;
		constexpr static std::string_view Initialized_type_name = "Initialized";
		constexpr static rivet::rivet_type_id Initialized_type_id = 0x166ff4f5;
		constexpr static std::string_view Instantiated_type_name = "Instantiated";
		constexpr static rivet::rivet_type_id Instantiated_type_id = 0xfe5d1e35;
		constexpr static std::string_view InitOverhead_type_name = "InitOverhead";
		constexpr static rivet::rivet_type_id InitOverhead_type_id = 0xad2699bd;
		constexpr static std::string_view ZoneIds_type_name = "ZoneIds";
		constexpr static rivet::rivet_type_id ZoneIds_type_id = 0xb01078db; 

		explicit ZoneLoadStats() = default;
		explicit ZoneLoadStats([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<float> Time {};
		std::vector<float> LoadRequested {};
		std::vector<float> LoadFinished {};
		std::vector<float> Initialized {};
		std::vector<float> Instantiated {};
		float InitOverhead {};
		std::vector<uint64_t> ZoneIds {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZoneLoadStats>;
	};
} // namespace rivet::ddl::generated

// clang-format on
