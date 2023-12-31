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

#include <rivet/ddl/generated/bitsets/x442dee57.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED StructuredLogAnimTreePerformanceClipNodeGesture : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StructuredLogAnimTreePerformanceClipNodeGesture";
		constexpr static rivet::rivet_type_id type_id = 0xe63d6d1c;

		constexpr static std::string_view ClipName_type_name = "ClipName";
		constexpr static rivet::rivet_type_id ClipName_type_id = 0x842d53a9;
		constexpr static std::string_view ModelFrom_type_name = "ModelFrom";
		constexpr static rivet::rivet_type_id ModelFrom_type_id = 0x837de247;
		constexpr static std::string_view ModelTo_type_name = "ModelTo";
		constexpr static rivet::rivet_type_id ModelTo_type_id = 0xad182c8d;
		constexpr static std::string_view ClipTime_type_name = "ClipTime";
		constexpr static rivet::rivet_type_id ClipTime_type_id = 0xb59ab5ea;
		constexpr static std::string_view ClipWeight_type_name = "ClipWeight";
		constexpr static rivet::rivet_type_id ClipWeight_type_id = 0x2a5461e3;
		constexpr static std::string_view Flags_type_name = "Flags";
		constexpr static rivet::rivet_type_id Flags_type_id = 0x12568d7b; 

		explicit StructuredLogAnimTreePerformanceClipNodeGesture() = default;
		explicit StructuredLogAnimTreePerformanceClipNodeGesture([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ClipName {};
		std::string_view ModelFrom {};
		std::string_view ModelTo {};
		float ClipTime {};
		float ClipWeight {};
		rivet::ddl::generated::x442dee57 Flags {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogAnimTreePerformanceClipNodeGesture>;
	};
} // namespace rivet::ddl::generated

// clang-format on
