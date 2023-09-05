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
	struct RIVET_DDL_SHARED CustomHeadData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "CustomHeadData";
		constexpr const static rivet::rivet_type_id type_id = 0xe4029254;

		constexpr const static std::string_view HeadID_type_name = "HeadID";
		constexpr const static rivet::rivet_type_id HeadID_type_id = 0xa6811891;
		constexpr const static std::string_view HeadModel_type_name = "HeadModel";
		constexpr const static rivet::rivet_type_id HeadModel_type_id = 0x7596a61c; 

		explicit CustomHeadData() = default;
		explicit CustomHeadData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int8_t HeadID {};
		std::string_view HeadModel {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomHeadData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
