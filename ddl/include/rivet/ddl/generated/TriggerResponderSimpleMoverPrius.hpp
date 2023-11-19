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
#include <rivet/ddl/generated/TriggerResponderBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED TriggerResponderSimpleMoverPrius : TriggerResponderBasePrius {
		constexpr static std::string_view type_name = "TriggerResponderSimpleMoverPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1f1e61a9;

		constexpr static std::string_view PositionOffset_type_name = "PositionOffset";
		constexpr static rivet::rivet_type_id PositionOffset_type_id = 0xa063603;
		constexpr static std::string_view YawOffset_type_name = "YawOffset";
		constexpr static rivet::rivet_type_id YawOffset_type_id = 0xe21edee9;
		constexpr static std::string_view PitchOffset_type_name = "PitchOffset";
		constexpr static rivet::rivet_type_id PitchOffset_type_id = 0x919dc438;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view PositionActor_type_name = "PositionActor";
		constexpr static rivet::rivet_type_id PositionActor_type_id = 0xf470c52d;
		constexpr static std::string_view OverrideMotionType_type_name = "OverrideMotionType";
		constexpr static rivet::rivet_type_id OverrideMotionType_type_id = 0x7cb3834d; 

		explicit TriggerResponderSimpleMoverPrius() = default;
		explicit TriggerResponderSimpleMoverPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> PositionOffset {};
		float YawOffset {};
		float PitchOffset {};
		float Duration {};
		uint64_t PositionActor {};
		rivet::ddl::generated::MotionTypes OverrideMotionType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderSimpleMoverPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on