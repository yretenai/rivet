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
	struct RIVET_DDL_SHARED UDSWebApiObjectLink : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UDSWebApiObjectLink";
		constexpr static rivet::rivet_type_id type_id = 0x55920353;

		constexpr static std::string_view objectId_type_name = "objectId";
		constexpr static rivet::rivet_type_id objectId_type_id = 0x9a05f2f9;
		constexpr static std::string_view position_type_name = "position";
		constexpr static rivet::rivet_type_id position_type_id = 0x455b3bd3; 

		explicit UDSWebApiObjectLink() = default;
		explicit UDSWebApiObjectLink([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view objectId {};
		int32_t position {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSWebApiObjectLink>;
	};
} // namespace rivet::ddl::generated

// clang-format on