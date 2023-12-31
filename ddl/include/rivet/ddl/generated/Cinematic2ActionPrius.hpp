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
	struct RIVET_DDL_SHARED Cinematic2ActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2ActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdd0277fb;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view EndCameraDelay_type_name = "EndCameraDelay";
		constexpr static rivet::rivet_type_id EndCameraDelay_type_id = 0x1d52754d;
		constexpr static std::string_view ResetFollowCam_type_name = "ResetFollowCam";
		constexpr static rivet::rivet_type_id ResetFollowCam_type_id = 0x511bf753;
		constexpr static std::string_view ApplyCameraTranslationOnEnter_type_name = "ApplyCameraTranslationOnEnter";
		constexpr static rivet::rivet_type_id ApplyCameraTranslationOnEnter_type_id = 0x721951ac;
		constexpr static std::string_view SkipIntermediateShotsOnJump_type_name = "SkipIntermediateShotsOnJump";
		constexpr static rivet::rivet_type_id SkipIntermediateShotsOnJump_type_id = 0x4311320f; 

		explicit Cinematic2ActionPrius() = default;
		explicit Cinematic2ActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		int32_t EndCameraDelay {};
		bool ResetFollowCam {};
		bool ApplyCameraTranslationOnEnter {};
		bool SkipIntermediateShotsOnJump {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2ActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
