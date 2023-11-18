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

#include <rivet/ddl/generated/bitsets/x8f003545.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RCSFstatInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSFstatInput";
		constexpr static rivet::rivet_type_id type_id = 0x5c2d4628;

		constexpr static std::string_view Views_type_name = "Views";
		constexpr static rivet::rivet_type_id Views_type_id = 0x8a35046;
		constexpr static std::string_view IncludeValidationData_type_name = "IncludeValidationData";
		constexpr static rivet::rivet_type_id IncludeValidationData_type_id = 0x548bd263;
		constexpr static std::string_view Flags_type_name = "Flags";
		constexpr static rivet::rivet_type_id Flags_type_id = 0x12568d7b; 

		explicit RCSFstatInput() = default;
		explicit RCSFstatInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Views {};
		bool IncludeValidationData {};
		rivet::ddl::generated::x8f003545 Flags {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSFstatInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
