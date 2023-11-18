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
	struct MineFiringData; 

	struct RIVET_DDL_SHARED CentipedeChaseMineFiringPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CentipedeChaseMineFiringPrius";
		constexpr static rivet::rivet_type_id type_id = 0x61f03d7a;

		constexpr static std::string_view FiringData_type_name = "FiringData";
		constexpr static rivet::rivet_type_id FiringData_type_id = 0xd1b7ac6a;
		constexpr static std::string_view FireRate_type_name = "FireRate";
		constexpr static rivet::rivet_type_id FireRate_type_id = 0xde2bd9ff; 

		explicit CentipedeChaseMineFiringPrius() = default;
		explicit CentipedeChaseMineFiringPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::MineFiringData>> FiringData {};
		float FireRate {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CentipedeChaseMineFiringPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
