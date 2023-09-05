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

#include <rivet/ddl/generated/TriggerEffectSequenceBase.hpp> 

namespace rivet::ddl::generated {
	struct TriggerEffectKeyFrameDataPosition; 

	struct RIVET_DDL_SHARED TriggerEffectSequencePosition : TriggerEffectSequenceBase {
		constexpr const static std::string_view type_name = "TriggerEffectSequencePosition";
		constexpr const static rivet::rivet_type_id type_id = 0x1ec6596a;

		constexpr const static std::string_view KeyFrameData_type_name = "KeyFrameData";
		constexpr const static rivet::rivet_type_id KeyFrameData_type_id = 0x6d456e08; 

		explicit TriggerEffectSequencePosition() = default;
		explicit TriggerEffectSequencePosition([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::TriggerEffectKeyFrameDataPosition>> KeyFrameData {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectSequencePosition>;
	};
} // namespace rivet::ddl::generated

// clang-format on
