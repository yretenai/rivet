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
	struct RIVET_DDL_SHARED DamageIntelConfig : ConfigBase {
		constexpr const static std::string_view type_name = "DamageIntelConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x202a4d5;

		constexpr const static std::string_view DigitActor_type_name = "DigitActor";
		constexpr const static rivet::rivet_type_id DigitActor_type_id = 0x755c419;
		constexpr const static std::string_view Spacing_type_name = "Spacing";
		constexpr const static rivet::rivet_type_id Spacing_type_id = 0xa84b3f5c;
		constexpr const static std::string_view MinDist_type_name = "MinDist";
		constexpr const static rivet::rivet_type_id MinDist_type_id = 0x7f14a608;
		constexpr const static std::string_view StartScale_type_name = "StartScale";
		constexpr const static rivet::rivet_type_id StartScale_type_id = 0x942d4960;
		constexpr const static std::string_view EndScale_type_name = "EndScale";
		constexpr const static rivet::rivet_type_id EndScale_type_id = 0xa4614baf;
		constexpr const static std::string_view PathEndSide_type_name = "PathEndSide";
		constexpr const static rivet::rivet_type_id PathEndSide_type_id = 0x62957ab3;
		constexpr const static std::string_view PathEndForward_type_name = "PathEndForward";
		constexpr const static rivet::rivet_type_id PathEndForward_type_id = 0x7a6104fc;
		constexpr const static std::string_view PathEndUp_type_name = "PathEndUp";
		constexpr const static rivet::rivet_type_id PathEndUp_type_id = 0xe76b7d85;
		constexpr const static std::string_view PathSpeed_type_name = "PathSpeed";
		constexpr const static rivet::rivet_type_id PathSpeed_type_id = 0x7c53b7b2;
		constexpr const static std::string_view ScaleDistance_type_name = "ScaleDistance";
		constexpr const static rivet::rivet_type_id ScaleDistance_type_id = 0xa44c44f6;
		constexpr const static std::string_view ScaleExponent_type_name = "ScaleExponent";
		constexpr const static rivet::rivet_type_id ScaleExponent_type_id = 0xb3c3a627;
		constexpr const static std::string_view GroupingDist_type_name = "GroupingDist";
		constexpr const static rivet::rivet_type_id GroupingDist_type_id = 0x739fb439;
		constexpr const static std::string_view GroupingTime_type_name = "GroupingTime";
		constexpr const static rivet::rivet_type_id GroupingTime_type_id = 0x9d77fc8b;
		constexpr const static std::string_view NormalScale_type_name = "NormalScale";
		constexpr const static rivet::rivet_type_id NormalScale_type_id = 0xe8fc2920;
		constexpr const static std::string_view WeakspotScale_type_name = "WeakspotScale";
		constexpr const static rivet::rivet_type_id WeakspotScale_type_id = 0x9cb0936a;
		constexpr const static std::string_view SpawnOffsetY_type_name = "SpawnOffsetY";
		constexpr const static rivet::rivet_type_id SpawnOffsetY_type_id = 0x6ec5b4e2; 

		explicit DamageIntelConfig() = default;
		explicit DamageIntelConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DigitActor {};
		float Spacing {};
		float MinDist {};
		float StartScale {};
		float EndScale {};
		float PathEndSide {};
		float PathEndForward {};
		float PathEndUp {};
		float PathSpeed {};
		float ScaleDistance {};
		float ScaleExponent {};
		float GroupingDist {};
		float GroupingTime {};
		float NormalScale {};
		float WeakspotScale {};
		float SpawnOffsetY {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageIntelConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
