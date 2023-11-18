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

#include <rivet/ddl/generated/enums/x34a3a095.hpp>
#include <rivet/ddl/generated/enums/x1bcabc6d.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DebugScreenCaptureActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugScreenCaptureActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x104ab849;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view CaptureDepth_type_name = "CaptureDepth";
		constexpr static rivet::rivet_type_id CaptureDepth_type_id = 0x17f51ac1;
		constexpr static std::string_view CaptureFormat_type_name = "CaptureFormat";
		constexpr static rivet::rivet_type_id CaptureFormat_type_id = 0xd458e08e;
		constexpr static std::string_view Resolution_type_name = "Resolution";
		constexpr static rivet::rivet_type_id Resolution_type_id = 0x26e551b3; 

		explicit DebugScreenCaptureActionPrius() = default;
		explicit DebugScreenCaptureActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		bool CaptureDepth {};
		rivet::ddl::generated::x1bcabc6d CaptureFormat {};
		rivet::ddl::generated::x34a3a095 Resolution {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugScreenCaptureActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
