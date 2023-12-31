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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TimeScaleActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TimeScaleActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x2da67b8a;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view TimeScale_type_name = "TimeScale";
		constexpr static rivet::rivet_type_id TimeScale_type_id = 0x5fe2ecba;
		constexpr static std::string_view Context_type_name = "Context";
		constexpr static rivet::rivet_type_id Context_type_id = 0xe3b7e646;
		constexpr static std::string_view RampTime_type_name = "RampTime";
		constexpr static rivet::rivet_type_id RampTime_type_id = 0xffcda789;
		constexpr static std::string_view UseFX_type_name = "UseFX";
		constexpr static rivet::rivet_type_id UseFX_type_id = 0x1a46639f; 

		explicit TimeScaleActionPrius() = default;
		explicit TimeScaleActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		float TimeScale {};
		std::string_view Context {};
		float RampTime {};
		bool UseFX {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
