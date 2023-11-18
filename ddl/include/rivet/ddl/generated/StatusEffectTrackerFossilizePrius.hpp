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

#include <rivet/ddl/generated/StatusEffectTrackerBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED StatusEffectTrackerFossilizePrius : StatusEffectTrackerBasePrius {
		constexpr static std::string_view type_name = "StatusEffectTrackerFossilizePrius";
		constexpr static rivet::rivet_type_id type_id = 0x1cb5b6c7;

		constexpr static std::string_view BeardActor_type_name = "BeardActor";
		constexpr static rivet::rivet_type_id BeardActor_type_id = 0x4c1f8462;
		constexpr static std::string_view Shader_type_name = "Shader";
		constexpr static rivet::rivet_type_id Shader_type_id = 0xc18bd04f; 

		explicit StatusEffectTrackerFossilizePrius() = default;
		explicit StatusEffectTrackerFossilizePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BeardActor {};
		std::string_view Shader {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectTrackerFossilizePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
