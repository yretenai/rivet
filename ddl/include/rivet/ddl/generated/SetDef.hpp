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

#include <rivet/ddl/generated/enums/xa57aac73.hpp>
#include <rivet/ddl/generated/enums/BonusType.hpp>
#include <rivet/ddl/generated/enums/x507460e6.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetDef : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SetDef";
		constexpr const static rivet::rivet_type_id type_id = 0x7c4b21ce;

		constexpr const static std::string_view SetID_type_name = "SetID";
		constexpr const static rivet::rivet_type_id SetID_type_id = 0x6e0917bb;
		constexpr const static std::string_view SetNameLocTag_type_name = "SetNameLocTag";
		constexpr const static rivet::rivet_type_id SetNameLocTag_type_id = 0x1edca0ff;
		constexpr const static std::string_view TempSetName_type_name = "TempSetName";
		constexpr const static rivet::rivet_type_id TempSetName_type_id = 0x711dcf9;
		constexpr const static std::string_view SetDescLocTag_type_name = "SetDescLocTag";
		constexpr const static rivet::rivet_type_id SetDescLocTag_type_id = 0x5ef37719;
		constexpr const static std::string_view TempSetDesc_type_name = "TempSetDesc";
		constexpr const static rivet::rivet_type_id TempSetDesc_type_id = 0x52870eab;
		constexpr const static std::string_view CardIDs_type_name = "CardIDs";
		constexpr const static rivet::rivet_type_id CardIDs_type_id = 0xf074f9f2;
		constexpr const static std::string_view Bonus_type_name = "Bonus";
		constexpr const static rivet::rivet_type_id Bonus_type_id = 0x86cbb3bb;
		constexpr const static std::string_view BonusAmount_type_name = "BonusAmount";
		constexpr const static rivet::rivet_type_id BonusAmount_type_id = 0x5b514b90; 

		explicit SetDef() = default;
		explicit SetDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xa57aac73 SetID {};
		std::string_view SetNameLocTag {};
		std::string_view TempSetName {};
		std::string_view SetDescLocTag {};
		std::string_view TempSetDesc {};
		std::vector<rivet::ddl::generated::x507460e6> CardIDs {};
		rivet::ddl::generated::BonusType Bonus {};
		float BonusAmount {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
