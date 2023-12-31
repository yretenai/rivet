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
	struct RIVET_DDL_SHARED MaterialConstantHealthControlledValueData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialConstantHealthControlledValueData";
		constexpr static rivet::rivet_type_id type_id = 0x5b6aabc3;

		constexpr static std::string_view HealthAmount_type_name = "HealthAmount";
		constexpr static rivet::rivet_type_id HealthAmount_type_id = 0x9b788aa2;
		constexpr static std::string_view ConstantValue_type_name = "ConstantValue";
		constexpr static rivet::rivet_type_id ConstantValue_type_id = 0x268ea8e5; 

		explicit MaterialConstantHealthControlledValueData() = default;
		explicit MaterialConstantHealthControlledValueData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HealthAmount {};
		float ConstantValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialConstantHealthControlledValueData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
