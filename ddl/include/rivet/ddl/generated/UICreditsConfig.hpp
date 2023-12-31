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
	struct UISongData; 

	struct RIVET_DDL_SHARED UICreditsConfig : ConfigBase {
		constexpr static std::string_view type_name = "UICreditsConfig";
		constexpr static rivet::rivet_type_id type_id = 0x580b2a48;

		constexpr static std::string_view CreditsStartIndex_type_name = "CreditsStartIndex";
		constexpr static rivet::rivet_type_id CreditsStartIndex_type_id = 0x5aaad564;
		constexpr static std::string_view PostInsomnaicCreditsStartIndex_type_name = "PostInsomnaicCreditsStartIndex";
		constexpr static rivet::rivet_type_id PostInsomnaicCreditsStartIndex_type_id = 0x5b786e02;
		constexpr static std::string_view CreditsEnableSkipIndex_type_name = "CreditsEnableSkipIndex";
		constexpr static rivet::rivet_type_id CreditsEnableSkipIndex_type_id = 0xdcef1100;
		constexpr static std::string_view CreditsSongData_type_name = "CreditsSongData";
		constexpr static rivet::rivet_type_id CreditsSongData_type_id = 0x3ad94972; 

		explicit UICreditsConfig() = default;
		explicit UICreditsConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t CreditsStartIndex {};
		int32_t PostInsomnaicCreditsStartIndex {};
		int32_t CreditsEnableSkipIndex {};
		std::shared_ptr<rivet::ddl::generated::UISongData> CreditsSongData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICreditsConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
