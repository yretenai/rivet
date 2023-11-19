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
	struct RIVET_DDL_SHARED BeamOutEffectPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BeamOutEffectPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdfbe1151;

		constexpr static std::string_view DeleteAfterBeamOut_type_name = "DeleteAfterBeamOut";
		constexpr static rivet::rivet_type_id DeleteAfterBeamOut_type_id = 0x2f6b9d71;
		constexpr static std::string_view BeamOutConfig_type_name = "BeamOutConfig";
		constexpr static rivet::rivet_type_id BeamOutConfig_type_id = 0xc4483ad1;
		constexpr static std::string_view BeamOutConfigOverride_type_name = "BeamOutConfigOverride";
		constexpr static rivet::rivet_type_id BeamOutConfigOverride_type_id = 0x276df15e; 

		explicit BeamOutEffectPrius() = default;
		explicit BeamOutEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool DeleteAfterBeamOut {};
		std::string_view BeamOutConfig {};
		uint64_t BeamOutConfigOverride {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamOutEffectPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on