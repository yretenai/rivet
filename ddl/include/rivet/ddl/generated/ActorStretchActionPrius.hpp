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

#include <rivet/ddl/generated/enums/x726217e6.hpp>
#include <rivet/ddl/generated/enums/xfa97354e.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActorStretchActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActorStretchActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc6295eb6;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view ContinuousMode_type_name = "ContinuousMode";
		constexpr static rivet::rivet_type_id ContinuousMode_type_id = 0x678540d;
		constexpr static std::string_view UseBoundsSize_type_name = "UseBoundsSize";
		constexpr static rivet::rivet_type_id UseBoundsSize_type_id = 0x988cb041;
		constexpr static std::string_view OriginMode_type_name = "OriginMode";
		constexpr static rivet::rivet_type_id OriginMode_type_id = 0x58f5eb2d;
		constexpr static std::string_view StretchDirection_type_name = "StretchDirection";
		constexpr static rivet::rivet_type_id StretchDirection_type_id = 0xb9185f9c; 

		explicit ActorStretchActionPrius() = default;
		explicit ActorStretchActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		bool ContinuousMode {};
		bool UseBoundsSize {};
		rivet::ddl::generated::xfa97354e OriginMode {};
		rivet::ddl::generated::x726217e6 StretchDirection {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorStretchActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
