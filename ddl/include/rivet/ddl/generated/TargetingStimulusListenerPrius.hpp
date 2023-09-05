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
	struct EventStimulus;
	struct TargetingStimulusListenerAddOnEntry; 

	struct RIVET_DDL_SHARED TargetingStimulusListenerPrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "TargetingStimulusListenerPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x89f5de50;

		constexpr const static std::string_view GenericEventHandlers_type_name = "GenericEventHandlers";
		constexpr const static rivet::rivet_type_id GenericEventHandlers_type_id = 0x1cb9421f;
		constexpr const static std::string_view AddOns_type_name = "AddOns";
		constexpr const static rivet::rivet_type_id AddOns_type_id = 0xdd502eb0; 

		explicit TargetingStimulusListenerPrius() = default;
		explicit TargetingStimulusListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::EventStimulus>> GenericEventHandlers {};
		std::vector<std::shared_ptr<rivet::ddl::generated::TargetingStimulusListenerAddOnEntry>> AddOns {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingStimulusListenerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
