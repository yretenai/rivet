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

#include <rivet/ddl/generated/enums/xaa9dd5a4.hpp>
#include <rivet/ddl/generated/enums/xd64fa9b1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameItemData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "GameItemData";
		constexpr const static rivet::rivet_type_id type_id = 0x7ccdfa11;

		constexpr const static std::string_view Icon_type_name = "Icon";
		constexpr const static rivet::rivet_type_id Icon_type_id = 0x5504e96b;
		constexpr const static std::string_view Video_type_name = "Video";
		constexpr const static rivet::rivet_type_id Video_type_id = 0x659416ed;
		constexpr const static std::string_view ScrapAmount_type_name = "ScrapAmount";
		constexpr const static rivet::rivet_type_id ScrapAmount_type_id = 0xadf8243c;
		constexpr const static std::string_view MissionUnlock_type_name = "MissionUnlock";
		constexpr const static rivet::rivet_type_id MissionUnlock_type_id = 0x489fe4ed;
		constexpr const static std::string_view ChallengeModePrepBehavior_type_name = "ChallengeModePrepBehavior";
		constexpr const static rivet::rivet_type_id ChallengeModePrepBehavior_type_id = 0x8e166dac;
		constexpr const static std::string_view DisplayNameTag_type_name = "DisplayNameTag";
		constexpr const static rivet::rivet_type_id DisplayNameTag_type_id = 0x7f9decd5;
		constexpr const static std::string_view DisplayNameUpperTag_type_name = "DisplayNameUpperTag";
		constexpr const static rivet::rivet_type_id DisplayNameUpperTag_type_id = 0xc7615daf;
		constexpr const static std::string_view DisplayDescriptionTag_type_name = "DisplayDescriptionTag";
		constexpr const static rivet::rivet_type_id DisplayDescriptionTag_type_id = 0x2182eb16;
		constexpr const static std::string_view UIDisplayObject_type_name = "UIDisplayObject";
		constexpr const static rivet::rivet_type_id UIDisplayObject_type_id = 0x966feb26;
		constexpr const static std::string_view IdleAnim_type_name = "IdleAnim";
		constexpr const static rivet::rivet_type_id IdleAnim_type_id = 0xe747921a; 

		explicit GameItemData() = default;
		explicit GameItemData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Icon {};
		std::string_view Video {};
		uint32_t ScrapAmount {};
		std::string_view MissionUnlock {};
		rivet::ddl::generated::xaa9dd5a4 ChallengeModePrepBehavior {};
		std::string_view DisplayNameTag {};
		std::string_view DisplayNameUpperTag {};
		std::string_view DisplayDescriptionTag {};
		rivet::ddl::generated::xd64fa9b1 UIDisplayObject {};
		std::string_view IdleAnim {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameItemData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
