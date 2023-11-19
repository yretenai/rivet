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

#include <rivet/ddl/generated/enums/x940d80bd.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector2; 

	struct RIVET_DDL_SHARED OrderedListUIActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OrderedListUIActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x9b489baf;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view WindowPosition_type_name = "WindowPosition";
		constexpr static rivet::rivet_type_id WindowPosition_type_id = 0xca1fb3d7;
		constexpr static std::string_view WindowPosition3D_type_name = "WindowPosition3D";
		constexpr static rivet::rivet_type_id WindowPosition3D_type_id = 0x19cb9b48;
		constexpr static std::string_view WindowSize_type_name = "WindowSize";
		constexpr static rivet::rivet_type_id WindowSize_type_id = 0xa2979036;
		constexpr static std::string_view NumColumns_type_name = "NumColumns";
		constexpr static rivet::rivet_type_id NumColumns_type_id = 0xf8571729;
		constexpr static std::string_view ItemWidth_type_name = "ItemWidth";
		constexpr static rivet::rivet_type_id ItemWidth_type_id = 0x5a33c1c7;
		constexpr static std::string_view ItemHeight_type_name = "ItemHeight";
		constexpr static rivet::rivet_type_id ItemHeight_type_id = 0x8948494c;
		constexpr static std::string_view IndexNumbers_type_name = "IndexNumbers";
		constexpr static rivet::rivet_type_id IndexNumbers_type_id = 0x9b00d397;
		constexpr static std::string_view LabelType_type_name = "LabelType";
		constexpr static rivet::rivet_type_id LabelType_type_id = 0xd7982755;
		constexpr static std::string_view AutoFocus_type_name = "AutoFocus";
		constexpr static rivet::rivet_type_id AutoFocus_type_id = 0x4ffa5af6;
		constexpr static std::string_view ShowTitlebar_type_name = "ShowTitlebar";
		constexpr static rivet::rivet_type_id ShowTitlebar_type_id = 0x33c3586f;
		constexpr static std::string_view AllowResize_type_name = "AllowResize";
		constexpr static rivet::rivet_type_id AllowResize_type_id = 0xe099c984;
		constexpr static std::string_view AllowReposition_type_name = "AllowReposition";
		constexpr static rivet::rivet_type_id AllowReposition_type_id = 0x18582dcb; 

		explicit OrderedListUIActionPrius() = default;
		explicit OrderedListUIActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> WindowPosition {};
		bool WindowPosition3D {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> WindowSize {};
		int32_t NumColumns {};
		int32_t ItemWidth {};
		int32_t ItemHeight {};
		bool IndexNumbers {};
		rivet::ddl::generated::x940d80bd LabelType {};
		bool AutoFocus {};
		bool ShowTitlebar {};
		bool AllowResize {};
		bool AllowReposition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrderedListUIActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on