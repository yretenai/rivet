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

#include <rivet/ddl/generated/enums/x1e271f24.hpp>
#include <rivet/ddl/generated/enums/x787c02d3.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DeactivateCameraActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DeactivateCameraActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x3ec7d45f;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view TransitionType_type_name = "TransitionType";
		constexpr static rivet::rivet_type_id TransitionType_type_id = 0x125f2c3b;
		constexpr static std::string_view BlendTime_type_name = "BlendTime";
		constexpr static rivet::rivet_type_id BlendTime_type_id = 0xf805a3f6;
		constexpr static std::string_view BlendEaseIn_type_name = "BlendEaseIn";
		constexpr static rivet::rivet_type_id BlendEaseIn_type_id = 0xceb44e2c;
		constexpr static std::string_view BlendEaseOut_type_name = "BlendEaseOut";
		constexpr static rivet::rivet_type_id BlendEaseOut_type_id = 0xc8c5daa0;
		constexpr static std::string_view PruneType_type_name = "PruneType";
		constexpr static rivet::rivet_type_id PruneType_type_id = 0xaaf6900a;
		constexpr static std::string_view ResetNext_type_name = "ResetNext";
		constexpr static rivet::rivet_type_id ResetNext_type_id = 0x2e18bc60;
		constexpr static std::string_view DeactivateLocal_type_name = "DeactivateLocal";
		constexpr static rivet::rivet_type_id DeactivateLocal_type_id = 0xa877811c; 

		explicit DeactivateCameraActionPrius() = default;
		explicit DeactivateCameraActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::x787c02d3 TransitionType {};
		float BlendTime {};
		float BlendEaseIn {};
		float BlendEaseOut {};
		rivet::ddl::generated::x1e271f24 PruneType {};
		bool ResetNext {};
		bool DeactivateLocal {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeactivateCameraActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
