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
	struct CardPickup;
	struct RaritaniumPickup;
	struct CashPickup; 

	struct RIVET_DDL_SHARED LootDropConfig : ConfigBase {
		constexpr static std::string_view type_name = "LootDropConfig";
		constexpr static rivet::rivet_type_id type_id = 0xd636ee58;

		constexpr static std::string_view CashPickups_type_name = "CashPickups";
		constexpr static rivet::rivet_type_id CashPickups_type_id = 0x51fa022f;
		constexpr static std::string_view RaritaniumPickups_type_name = "RaritaniumPickups";
		constexpr static rivet::rivet_type_id RaritaniumPickups_type_id = 0xb69a23fd;
		constexpr static std::string_view CardPickups_type_name = "CardPickups";
		constexpr static rivet::rivet_type_id CardPickups_type_id = 0x112e0323; 

		explicit LootDropConfig() = default;
		explicit LootDropConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::CashPickup>> CashPickups {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RaritaniumPickup>> RaritaniumPickups {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CardPickup>> CardPickups {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LootDropConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on