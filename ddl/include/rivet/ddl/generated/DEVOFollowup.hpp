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

#include <rivet/ddl/generated/enums/x6be956dd.hpp>
#include <rivet/ddl/generated/enums/Voice.hpp>
#include <rivet/ddl/generated/enums/xb3a943f0.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DEVOFollowup : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DEVOFollowup";
		constexpr static rivet::rivet_type_id type_id = 0x7fe1e8;

		constexpr static std::string_view ToWhom_type_name = "ToWhom";
		constexpr static rivet::rivet_type_id ToWhom_type_id = 0xc5138781;
		constexpr static std::string_view SpecificTargetVoice_type_name = "SpecificTargetVoice";
		constexpr static rivet::rivet_type_id SpecificTargetVoice_type_id = 0x5a2d0eb;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view FollowupTrigger_type_name = "FollowupTrigger";
		constexpr static rivet::rivet_type_id FollowupTrigger_type_id = 0x5ec33922; 

		explicit DEVOFollowup() = default;
		explicit DEVOFollowup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xb3a943f0 ToWhom {};
		rivet::ddl::generated::Voice SpecificTargetVoice {};
		float Radius {};
		rivet::ddl::generated::x6be956dd FollowupTrigger {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DEVOFollowup>;
	};
} // namespace rivet::ddl::generated

// clang-format on
