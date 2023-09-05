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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct ClassModifierDef; 

	struct RIVET_DDL_SHARED TradingCardClassConfig : ConfigBase {
		constexpr const static std::string_view type_name = "TradingCardClassConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xb0c9dd34;

		constexpr const static std::string_view ClassA_type_name = "ClassA";
		constexpr const static rivet::rivet_type_id ClassA_type_id = 0x8dfc1520;
		constexpr const static std::string_view ClassB_type_name = "ClassB";
		constexpr const static rivet::rivet_type_id ClassB_type_id = 0x14f5449a;
		constexpr const static std::string_view ClassC_type_name = "ClassC";
		constexpr const static rivet::rivet_type_id ClassC_type_id = 0x63f2740c; 

		explicit TradingCardClassConfig() = default;
		explicit TradingCardClassConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ClassModifierDef> ClassA {};
		std::shared_ptr<rivet::ddl::generated::ClassModifierDef> ClassB {};
		std::shared_ptr<rivet::ddl::generated::ClassModifierDef> ClassC {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TradingCardClassConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
