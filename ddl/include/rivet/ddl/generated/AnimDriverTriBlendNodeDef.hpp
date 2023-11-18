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

#include <rivet/ddl/generated/enums/xb417d8f1.hpp> 

namespace rivet::ddl::generated {
	struct AnimDriverConnectionDef;
	struct AnimDriverDefTriBlendWeights; 

	struct RIVET_DDL_SHARED AnimDriverTriBlendNodeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimDriverTriBlendNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x252b383d;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view x_type_name = "x";
		constexpr static rivet::rivet_type_id x_type_id = 0x655d6145;
		constexpr static std::string_view y_type_name = "y";
		constexpr static rivet::rivet_type_id y_type_id = 0x125a51d3;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Rate_type_name = "Rate";
		constexpr static rivet::rivet_type_id Rate_type_id = 0xef7cff89;
		constexpr static std::string_view Weights_type_name = "Weights";
		constexpr static rivet::rivet_type_id Weights_type_id = 0x1b381060;
		constexpr static std::string_view ConnectionA_type_name = "ConnectionA";
		constexpr static rivet::rivet_type_id ConnectionA_type_id = 0xfafdfc4e;
		constexpr static std::string_view ConnectionB_type_name = "ConnectionB";
		constexpr static rivet::rivet_type_id ConnectionB_type_id = 0x63f4adf4;
		constexpr static std::string_view ConnectionC_type_name = "ConnectionC";
		constexpr static rivet::rivet_type_id ConnectionC_type_id = 0x14f39d62; 

		explicit AnimDriverTriBlendNodeDef() = default;
		explicit AnimDriverTriBlendNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view DisplayName {};
		float x {};
		float y {};
		rivet::ddl::generated::xb417d8f1 Type {};
		float Rate {};
		std::shared_ptr<rivet::ddl::generated::AnimDriverDefTriBlendWeights> Weights {};
		std::shared_ptr<rivet::ddl::generated::AnimDriverConnectionDef> ConnectionA {};
		std::shared_ptr<rivet::ddl::generated::AnimDriverConnectionDef> ConnectionB {};
		std::shared_ptr<rivet::ddl::generated::AnimDriverConnectionDef> ConnectionC {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverTriBlendNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
