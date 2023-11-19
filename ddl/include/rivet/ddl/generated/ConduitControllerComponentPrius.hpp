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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ConduitControllerComponentPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ConduitControllerComponentPrius";
		constexpr static rivet::rivet_type_id type_id = 0x211bdb98;

		constexpr static std::string_view StartOnFlag_type_name = "StartOnFlag";
		constexpr static rivet::rivet_type_id StartOnFlag_type_id = 0x4bfdec38;
		constexpr static std::string_view RandomActivateFlag_type_name = "RandomActivateFlag";
		constexpr static rivet::rivet_type_id RandomActivateFlag_type_id = 0x630331a;
		constexpr static std::string_view RandomActivateDelayMin_type_name = "RandomActivateDelayMin";
		constexpr static rivet::rivet_type_id RandomActivateDelayMin_type_id = 0xbb8fb610;
		constexpr static std::string_view RandomActivateDelayMax_type_name = "RandomActivateDelayMax";
		constexpr static rivet::rivet_type_id RandomActivateDelayMax_type_id = 0x87828949;
		constexpr static std::string_view RandomActivateOnceFlag_type_name = "RandomActivateOnceFlag";
		constexpr static rivet::rivet_type_id RandomActivateOnceFlag_type_id = 0xc0f61c25;
		constexpr static std::string_view ActiveDurationFlag_type_name = "ActiveDurationFlag";
		constexpr static rivet::rivet_type_id ActiveDurationFlag_type_id = 0x6d79e5cc;
		constexpr static std::string_view ActiveDurationMin_type_name = "ActiveDurationMin";
		constexpr static rivet::rivet_type_id ActiveDurationMin_type_id = 0x459c2147;
		constexpr static std::string_view ActiveDurationMax_type_name = "ActiveDurationMax";
		constexpr static rivet::rivet_type_id ActiveDurationMax_type_id = 0x79911e1e; 

		explicit ConduitControllerComponentPrius() = default;
		explicit ConduitControllerComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartOnFlag {};
		bool RandomActivateFlag {};
		float RandomActivateDelayMin {};
		float RandomActivateDelayMax {};
		bool RandomActivateOnceFlag {};
		bool ActiveDurationFlag {};
		float ActiveDurationMin {};
		float ActiveDurationMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitControllerComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on