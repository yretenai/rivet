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
	struct RIVET_DDL_SHARED WeakspotModelData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "WeakspotModelData";
		constexpr const static rivet::rivet_type_id type_id = 0xd1bd73ea;

		constexpr const static std::string_view Model_type_name = "Model";
		constexpr const static rivet::rivet_type_id Model_type_id = 0xcec6be18;
		constexpr const static std::string_view HpThreshold_type_name = "HpThreshold";
		constexpr const static rivet::rivet_type_id HpThreshold_type_id = 0x7587ae49; 

		explicit WeakspotModelData() = default;
		explicit WeakspotModelData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Model {};
		float HpThreshold {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeakspotModelData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
