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

#include <rivet/ddl/generated/enums/xd68b2713.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RCSChangelistsInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSChangelistsInput";
		constexpr static rivet::rivet_type_id type_id = 0x4998733b;

		constexpr static std::string_view Status_type_name = "Status";
		constexpr static rivet::rivet_type_id Status_type_id = 0x45782b7b;
		constexpr static std::string_view Max_type_name = "Max";
		constexpr static rivet::rivet_type_id Max_type_id = 0xb7230b40; 

		explicit RCSChangelistsInput() = default;
		explicit RCSChangelistsInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd68b2713 Status {};
		uint32_t Max {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSChangelistsInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on