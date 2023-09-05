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

#include <rivet/ddl/generated/DimensionalPulseTargetBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct PulseNavObstruction; 

	struct RIVET_DDL_SHARED DimensionalPulseTargetPrius : DimensionalPulseTargetBasePrius {
		constexpr const static std::string_view type_name = "DimensionalPulseTargetPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x783b402e;

		constexpr const static std::string_view PreCompositeShader_type_name = "PreCompositeShader";
		constexpr const static rivet::rivet_type_id PreCompositeShader_type_id = 0x76e460d;
		constexpr const static std::string_view PostCompositeShader_type_name = "PostCompositeShader";
		constexpr const static rivet::rivet_type_id PostCompositeShader_type_id = 0xe2b72d5f;
		constexpr const static std::string_view ReactDriver_type_name = "ReactDriver";
		constexpr const static rivet::rivet_type_id ReactDriver_type_id = 0xdd88dafa;
		constexpr const static std::string_view NavObstruction_type_name = "NavObstruction";
		constexpr const static rivet::rivet_type_id NavObstruction_type_id = 0xb89f80a5; 

		explicit DimensionalPulseTargetPrius() = default;
		explicit DimensionalPulseTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PreCompositeShader {};
		std::string_view PostCompositeShader {};
		std::string_view ReactDriver {};
		std::shared_ptr<rivet::ddl::generated::PulseNavObstruction> NavObstruction {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseTargetPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
