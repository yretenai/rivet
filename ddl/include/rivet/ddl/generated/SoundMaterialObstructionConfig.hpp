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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct SoundMaterialbstructionValue; 

	struct RIVET_DDL_SHARED SoundMaterialObstructionConfig : ConfigBase {
		constexpr const static std::string_view type_name = "SoundMaterialObstructionConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x9a5fd03b;

		constexpr const static std::string_view ObsValues_type_name = "ObsValues";
		constexpr const static rivet::rivet_type_id ObsValues_type_id = 0x24a940d4; 

		explicit SoundMaterialObstructionConfig() = default;
		explicit SoundMaterialObstructionConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::SoundMaterialbstructionValue>> ObsValues {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundMaterialObstructionConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
