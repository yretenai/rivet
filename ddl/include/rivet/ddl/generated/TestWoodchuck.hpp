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
	struct RIVET_DDL_SHARED TestWoodchuck : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TestWoodchuck";
		constexpr static rivet::rivet_type_id type_id = 0x753aaf9b;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view CanChuckWood_type_name = "CanChuckWood";
		constexpr static rivet::rivet_type_id CanChuckWood_type_id = 0x3ecb14eb;
		constexpr static std::string_view AmountOfWoodToChuck_type_name = "AmountOfWoodToChuck";
		constexpr static rivet::rivet_type_id AmountOfWoodToChuck_type_id = 0x5b5e1db2; 

		explicit TestWoodchuck() = default;
		explicit TestWoodchuck([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		bool CanChuckWood {};
		int32_t AmountOfWoodToChuck {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestWoodchuck>;
	};
} // namespace rivet::ddl::generated

// clang-format on
