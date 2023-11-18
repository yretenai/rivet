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
	struct MaterialConstantHealthControlledValueData; 

	struct RIVET_DDL_SHARED MaterialConstantHealthControlledPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialConstantHealthControlledPrius";
		constexpr static rivet::rivet_type_id type_id = 0x550e109a;

		constexpr static std::string_view ConstantName_type_name = "ConstantName";
		constexpr static rivet::rivet_type_id ConstantName_type_id = 0xc6991700;
		constexpr static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr static std::string_view UseHitPoints_type_name = "UseHitPoints";
		constexpr static rivet::rivet_type_id UseHitPoints_type_id = 0x77a137c6;
		constexpr static std::string_view Continuous_type_name = "Continuous";
		constexpr static rivet::rivet_type_id Continuous_type_id = 0xd12767c0;
		constexpr static std::string_view ValueData_type_name = "ValueData";
		constexpr static rivet::rivet_type_id ValueData_type_id = 0x91a25047; 

		explicit MaterialConstantHealthControlledPrius() = default;
		explicit MaterialConstantHealthControlledPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ConstantName {};
		std::string_view MaterialMappingName {};
		bool UseHitPoints {};
		bool Continuous {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MaterialConstantHealthControlledValueData>> ValueData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialConstantHealthControlledPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
