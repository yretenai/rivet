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
	struct TriggerEffectKeyFrameBlendBase;
	struct TriggerEffectDataBase; 

	struct RIVET_DDL_SHARED TriggerEffectKeyFrameDataBase : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TriggerEffectKeyFrameDataBase";
		constexpr static rivet::rivet_type_id type_id = 0xd8e4ea8f;

		constexpr static std::string_view TriggerEffect_type_name = "TriggerEffect";
		constexpr static rivet::rivet_type_id TriggerEffect_type_id = 0x4163ac0d;
		constexpr static std::string_view BlendStyle_type_name = "BlendStyle";
		constexpr static rivet::rivet_type_id BlendStyle_type_id = 0xb34024ea; 

		explicit TriggerEffectKeyFrameDataBase() = default;
		explicit TriggerEffectKeyFrameDataBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::TriggerEffectDataBase> TriggerEffect {};
		std::shared_ptr<rivet::ddl::generated::TriggerEffectKeyFrameBlendBase> BlendStyle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectKeyFrameDataBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
