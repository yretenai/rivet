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
	struct MulitConvOptions; 

	struct RIVET_DDL_SHARED MulitConvData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MulitConvData";
		constexpr static rivet::rivet_type_id type_id = 0xad4d5049;

		constexpr static std::string_view MinDelay_type_name = "MinDelay";
		constexpr static rivet::rivet_type_id MinDelay_type_id = 0x4d64e8ed;
		constexpr static std::string_view MaxDelay_type_name = "MaxDelay";
		constexpr static rivet::rivet_type_id MaxDelay_type_id = 0xab04470c;
		constexpr static std::string_view ConversationOptions_type_name = "ConversationOptions";
		constexpr static rivet::rivet_type_id ConversationOptions_type_id = 0x430a610f; 

		explicit MulitConvData() = default;
		explicit MulitConvData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinDelay {};
		float MaxDelay {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MulitConvOptions>> ConversationOptions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MulitConvData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
