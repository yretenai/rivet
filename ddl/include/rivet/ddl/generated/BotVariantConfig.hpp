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
	struct BotVariantEntry; 

	struct RIVET_DDL_SHARED BotVariantConfig : ConfigBase {
		constexpr static std::string_view type_name = "BotVariantConfig";
		constexpr static rivet::rivet_type_id type_id = 0x93b9f6ad;

		constexpr static std::string_view Variants_type_name = "Variants";
		constexpr static rivet::rivet_type_id Variants_type_id = 0x4999ee91; 

		explicit BotVariantConfig() = default;
		explicit BotVariantConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::BotVariantEntry>> Variants {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotVariantConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
