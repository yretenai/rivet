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
	struct RIVET_DDL_SHARED HammerCrankAnimListenerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HammerCrankAnimListenerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xb3c680a2;

		constexpr static std::string_view HammerCrank_type_name = "HammerCrank";
		constexpr static rivet::rivet_type_id HammerCrank_type_id = 0xfda1f175;
		constexpr static std::string_view AnimDriverName_type_name = "AnimDriverName";
		constexpr static rivet::rivet_type_id AnimDriverName_type_id = 0x45f98c1e;
		constexpr static std::string_view TriggerAnimEvents_type_name = "TriggerAnimEvents";
		constexpr static rivet::rivet_type_id TriggerAnimEvents_type_id = 0x5224a336; 

		explicit HammerCrankAnimListenerPrius() = default;
		explicit HammerCrankAnimListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t HammerCrank {};
		std::string_view AnimDriverName {};
		bool TriggerAnimEvents {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HammerCrankAnimListenerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
