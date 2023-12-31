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

#include <rivet/ddl/generated/enums/MotionTypes.hpp>
#include <rivet/ddl/generated/bitsets/xf37a71ae.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SimpleMoverActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SimpleMoverActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc8ae0d44;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Flags_type_name = "Flags";
		constexpr static rivet::rivet_type_id Flags_type_id = 0x12568d7b;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view MaxTimes_type_name = "MaxTimes";
		constexpr static rivet::rivet_type_id MaxTimes_type_id = 0x449291b;
		constexpr static std::string_view UseOverrideMotionType_type_name = "UseOverrideMotionType";
		constexpr static rivet::rivet_type_id UseOverrideMotionType_type_id = 0xae04c39e;
		constexpr static std::string_view OverrideMotionType_type_name = "OverrideMotionType";
		constexpr static rivet::rivet_type_id OverrideMotionType_type_id = 0x7cb3834d; 

		explicit SimpleMoverActionPrius() = default;
		explicit SimpleMoverActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::xf37a71ae Flags {};
		float Duration {};
		int32_t MaxTimes {};
		bool UseOverrideMotionType {};
		rivet::ddl::generated::MotionTypes OverrideMotionType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleMoverActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
