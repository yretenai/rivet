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

#include <rivet/ddl/generated/NodeGraphDebugDataBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DefaultLocalHeroNodeDebugData : NodeGraphDebugDataBase {
		constexpr static std::string_view type_name = "DefaultLocalHeroNodeDebugData";
		constexpr static rivet::rivet_type_id type_id = 0xf02b2c2d;

		constexpr static std::string_view HeroActorName_type_name = "HeroActorName";
		constexpr static rivet::rivet_type_id HeroActorName_type_id = 0x78e146d3;
		constexpr static std::string_view HeroActorTuid_type_name = "HeroActorTuid";
		constexpr static rivet::rivet_type_id HeroActorTuid_type_id = 0x4f010f16;
		constexpr static std::string_view HeroActorHandle_type_name = "HeroActorHandle";
		constexpr static rivet::rivet_type_id HeroActorHandle_type_id = 0x4149d20;
		constexpr static std::string_view HeroUserIndex_type_name = "HeroUserIndex";
		constexpr static rivet::rivet_type_id HeroUserIndex_type_id = 0x5040e029;
		constexpr static std::string_view HeroUserName_type_name = "HeroUserName";
		constexpr static rivet::rivet_type_id HeroUserName_type_id = 0x2d8d1c5; 

		explicit DefaultLocalHeroNodeDebugData() = default;
		explicit DefaultLocalHeroNodeDebugData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view HeroActorName {};
		uint64_t HeroActorTuid {};
		uint32_t HeroActorHandle {};
		int32_t HeroUserIndex {};
		std::string_view HeroUserName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DefaultLocalHeroNodeDebugData>;
	};
} // namespace rivet::ddl::generated

// clang-format on