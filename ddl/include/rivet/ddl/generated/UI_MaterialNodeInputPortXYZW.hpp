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
	struct RIVET_DDL_SHARED UI_MaterialNodeInputPortXYZW : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_MaterialNodeInputPortXYZW";
		constexpr static rivet::rivet_type_id type_id = 0xdb089e8b;

		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view Values_type_name = "Values";
		constexpr static rivet::rivet_type_id Values_type_id = 0x4df0281;
		constexpr static std::string_view TestingOnly_type_name = "TestingOnly";
		constexpr static rivet::rivet_type_id TestingOnly_type_id = 0x1837e13b;
		constexpr static std::string_view IsConnected_type_name = "IsConnected";
		constexpr static rivet::rivet_type_id IsConnected_type_id = 0xaef3f8a9;
		constexpr static std::string_view InternalSortOrder_type_name = "InternalSortOrder";
		constexpr static rivet::rivet_type_id InternalSortOrder_type_id = 0x15d6f320;
		constexpr static std::string_view UserDefinedLabels_type_name = "UserDefinedLabels";
		constexpr static rivet::rivet_type_id UserDefinedLabels_type_id = 0xb47ed490;
		constexpr static std::string_view LinearFilter_type_name = "LinearFilter";
		constexpr static rivet::rivet_type_id LinearFilter_type_id = 0xc95c1d5c;
		constexpr static std::string_view Exposed_type_name = "Exposed";
		constexpr static rivet::rivet_type_id Exposed_type_id = 0x3c0cbb98;
		constexpr static std::string_view Global_type_name = "Global";
		constexpr static rivet::rivet_type_id Global_type_id = 0xd67dc5e4;
		constexpr static std::string_view Group_type_name = "Group";
		constexpr static rivet::rivet_type_id Group_type_id = 0x74938804;
		constexpr static std::string_view SortOrder_type_name = "SortOrder";
		constexpr static rivet::rivet_type_id SortOrder_type_id = 0xbd9f03f1;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view Labels_type_name = "Labels";
		constexpr static rivet::rivet_type_id Labels_type_id = 0x8ba94c76;
		constexpr static std::string_view ShowExposed_type_name = "ShowExposed";
		constexpr static rivet::rivet_type_id ShowExposed_type_id = 0x9d378ff;
		constexpr static std::string_view ShowGlobal_type_name = "ShowGlobal";
		constexpr static rivet::rivet_type_id ShowGlobal_type_id = 0xbc1658cc;
		constexpr static std::string_view Minimums_type_name = "Minimums";
		constexpr static rivet::rivet_type_id Minimums_type_id = 0xee16155a;
		constexpr static std::string_view Maximums_type_name = "Maximums";
		constexpr static rivet::rivet_type_id Maximums_type_id = 0x876babb;
		constexpr static std::string_view X_type_name = "X";
		constexpr static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr static std::string_view Y_type_name = "Y";
		constexpr static rivet::rivet_type_id Y_type_id = 0x2934711b;
		constexpr static std::string_view Z_type_name = "Z";
		constexpr static rivet::rivet_type_id Z_type_id = 0xb03d20a1;
		constexpr static std::string_view W_type_name = "W";
		constexpr static rivet::rivet_type_id W_type_id = 0xce8c5c1c; 

		explicit UI_MaterialNodeInputPortXYZW() = default;
		explicit UI_MaterialNodeInputPortXYZW([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DisplayName {};
		std::string_view Values {};
		bool TestingOnly {};
		bool IsConnected {};
		int32_t InternalSortOrder {};
		bool UserDefinedLabels {};
		bool LinearFilter {};
		bool Exposed {};
		bool Global {};
		std::string_view Group {};
		int32_t SortOrder {};
		std::string_view Description {};
		std::string_view Labels {};
		bool ShowExposed {};
		bool ShowGlobal {};
		std::string_view Minimums {};
		std::string_view Maximums {};
		float X {};
		float Y {};
		float Z {};
		float W {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_MaterialNodeInputPortXYZW>;
	};
} // namespace rivet::ddl::generated

// clang-format on
