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

#include <rivet/ddl/generated/enums/x7b87880c.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ControlRemapSet : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ControlRemapSet";
		constexpr static rivet::rivet_type_id type_id = 0x260ca207;

		constexpr static std::string_view DpadUp_type_name = "DpadUp";
		constexpr static rivet::rivet_type_id DpadUp_type_id = 0xbe8069f0;
		constexpr static std::string_view DpadDown_type_name = "DpadDown";
		constexpr static rivet::rivet_type_id DpadDown_type_id = 0x1579f118;
		constexpr static std::string_view DpadLeft_type_name = "DpadLeft";
		constexpr static rivet::rivet_type_id DpadLeft_type_id = 0x73e1864b;
		constexpr static std::string_view DpadRight_type_name = "DpadRight";
		constexpr static rivet::rivet_type_id DpadRight_type_id = 0xc4a66d8a;
		constexpr static std::string_view FaceBottom_type_name = "FaceBottom";
		constexpr static rivet::rivet_type_id FaceBottom_type_id = 0x1786c5b4;
		constexpr static std::string_view FaceRight_type_name = "FaceRight";
		constexpr static rivet::rivet_type_id FaceRight_type_id = 0x682b635;
		constexpr static std::string_view FaceLeft_type_name = "FaceLeft";
		constexpr static rivet::rivet_type_id FaceLeft_type_id = 0x80c59ef7;
		constexpr static std::string_view FaceTop_type_name = "FaceTop";
		constexpr static rivet::rivet_type_id FaceTop_type_id = 0xbcf793f2;
		constexpr static std::string_view ShoulderLeft_type_name = "ShoulderLeft";
		constexpr static rivet::rivet_type_id ShoulderLeft_type_id = 0x43c764ff;
		constexpr static std::string_view ShoulderRight_type_name = "ShoulderRight";
		constexpr static rivet::rivet_type_id ShoulderRight_type_id = 0x89a3cfd;
		constexpr static std::string_view TriggerLeft_type_name = "TriggerLeft";
		constexpr static rivet::rivet_type_id TriggerLeft_type_id = 0x1ed9c2d9;
		constexpr static std::string_view TriggerRight_type_name = "TriggerRight";
		constexpr static rivet::rivet_type_id TriggerRight_type_id = 0xdacaa7a6;
		constexpr static std::string_view StickLeft_type_name = "StickLeft";
		constexpr static rivet::rivet_type_id StickLeft_type_id = 0x7d4e0c;
		constexpr static std::string_view StickRight_type_name = "StickRight";
		constexpr static rivet::rivet_type_id StickRight_type_id = 0x2c6d2571;
		constexpr static std::string_view SwapSticks_type_name = "SwapSticks";
		constexpr static rivet::rivet_type_id SwapSticks_type_id = 0x84dbb58a; 

		explicit ControlRemapSet() = default;
		explicit ControlRemapSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x7b87880c DpadUp {};
		rivet::ddl::generated::x7b87880c DpadDown {};
		rivet::ddl::generated::x7b87880c DpadLeft {};
		rivet::ddl::generated::x7b87880c DpadRight {};
		rivet::ddl::generated::x7b87880c FaceBottom {};
		rivet::ddl::generated::x7b87880c FaceRight {};
		rivet::ddl::generated::x7b87880c FaceLeft {};
		rivet::ddl::generated::x7b87880c FaceTop {};
		rivet::ddl::generated::x7b87880c ShoulderLeft {};
		rivet::ddl::generated::x7b87880c ShoulderRight {};
		rivet::ddl::generated::x7b87880c TriggerLeft {};
		rivet::ddl::generated::x7b87880c TriggerRight {};
		rivet::ddl::generated::x7b87880c StickLeft {};
		rivet::ddl::generated::x7b87880c StickRight {};
		bool SwapSticks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ControlRemapSet>;
	};
} // namespace rivet::ddl::generated

// clang-format on