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

#include <rivet/ddl/generated/enums/xd2b6d7dc.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AnimClipIKEvent : EventBase {
		constexpr static std::string_view type_name = "AnimClipIKEvent";
		constexpr static rivet::rivet_type_id type_id = 0x7800f5c;

		constexpr static std::string_view CurveType_type_name = "CurveType";
		constexpr static rivet::rivet_type_id CurveType_type_id = 0x1f5c59df;
		constexpr static std::string_view Value_type_name = "Value";
		constexpr static rivet::rivet_type_id Value_type_id = 0x42494f5;
		constexpr static std::string_view BlendTime_type_name = "BlendTime";
		constexpr static rivet::rivet_type_id BlendTime_type_id = 0xf805a3f6;
		constexpr static std::string_view IKName_type_name = "IKName";
		constexpr static rivet::rivet_type_id IKName_type_id = 0x5037d62a; 

		explicit AnimClipIKEvent() = default;
		explicit AnimClipIKEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd2b6d7dc CurveType {};
		float Value {};
		float BlendTime {};
		std::string_view IKName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClipIKEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
