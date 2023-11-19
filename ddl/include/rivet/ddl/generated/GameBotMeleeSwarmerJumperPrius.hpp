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

#include <rivet/ddl/generated/GameBotMeleeSwarmerPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameBotMeleeSwarmerJumperPrius : GameBotMeleeSwarmerPrius {
		constexpr static std::string_view type_name = "GameBotMeleeSwarmerJumperPrius";
		constexpr static rivet::rivet_type_id type_id = 0x28015bfe;

		constexpr static std::string_view JumpDistMin_type_name = "JumpDistMin";
		constexpr static rivet::rivet_type_id JumpDistMin_type_id = 0xe6dbb73a;
		constexpr static std::string_view JumpDistMax_type_name = "JumpDistMax";
		constexpr static rivet::rivet_type_id JumpDistMax_type_id = 0xdad68863;
		constexpr static std::string_view JumpDistVarName_type_name = "JumpDistVarName";
		constexpr static rivet::rivet_type_id JumpDistVarName_type_id = 0x87ed9537;
		constexpr static std::string_view JumpDistVarMin_type_name = "JumpDistVarMin";
		constexpr static rivet::rivet_type_id JumpDistVarMin_type_id = 0xb6a0801f;
		constexpr static std::string_view JumpDistVarMax_type_name = "JumpDistVarMax";
		constexpr static rivet::rivet_type_id JumpDistVarMax_type_id = 0x8aadbf46;
		constexpr static std::string_view MaxSingleJumpDist_type_name = "MaxSingleJumpDist";
		constexpr static rivet::rivet_type_id MaxSingleJumpDist_type_id = 0x437f7525; 

		explicit GameBotMeleeSwarmerJumperPrius() = default;
		explicit GameBotMeleeSwarmerJumperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float JumpDistMin {};
		float JumpDistMax {};
		std::string_view JumpDistVarName {};
		float JumpDistVarMin {};
		float JumpDistVarMax {};
		float MaxSingleJumpDist {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMeleeSwarmerJumperPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on