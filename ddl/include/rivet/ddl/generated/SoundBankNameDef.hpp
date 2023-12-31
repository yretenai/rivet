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
	struct SoundGroupNameDef; 

	struct RIVET_DDL_SHARED SoundBankNameDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundBankNameDef";
		constexpr static rivet::rivet_type_id type_id = 0x24095c8f;

		constexpr static std::string_view BankName_type_name = "BankName";
		constexpr static rivet::rivet_type_id BankName_type_id = 0x2365a4dc;
		constexpr static std::string_view EventNames_type_name = "EventNames";
		constexpr static rivet::rivet_type_id EventNames_type_id = 0xaa2a04cd;
		constexpr static std::string_view TriggerNames_type_name = "TriggerNames";
		constexpr static rivet::rivet_type_id TriggerNames_type_id = 0x9c339bf2;
		constexpr static std::string_view StateGroupNames_type_name = "StateGroupNames";
		constexpr static rivet::rivet_type_id StateGroupNames_type_id = 0xe2afa42;
		constexpr static std::string_view SwitchGroupNames_type_name = "SwitchGroupNames";
		constexpr static rivet::rivet_type_id SwitchGroupNames_type_id = 0xc007ebbf;
		constexpr static std::string_view GameParameterNames_type_name = "GameParameterNames";
		constexpr static rivet::rivet_type_id GameParameterNames_type_id = 0xa9451eea;
		constexpr static std::string_view EnvironmentNames_type_name = "EnvironmentNames";
		constexpr static rivet::rivet_type_id EnvironmentNames_type_id = 0x9593fd9b; 

		explicit SoundBankNameDef() = default;
		explicit SoundBankNameDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BankName {};
		std::vector<std::string_view> EventNames {};
		std::vector<std::string_view> TriggerNames {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SoundGroupNameDef>> StateGroupNames {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SoundGroupNameDef>> SwitchGroupNames {};
		std::vector<std::string_view> GameParameterNames {};
		std::vector<std::string_view> EnvironmentNames {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundBankNameDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
