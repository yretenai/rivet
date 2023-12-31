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

#include <rivet/ddl/generated/enums/xc2e0975c.hpp> 

namespace rivet::ddl::generated {
	struct RCSRevisionOptions; 

	struct RIVET_DDL_SHARED RCSConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSConfig";
		constexpr static rivet::rivet_type_id type_id = 0x6d6add3c;

		constexpr static std::string_view Status_type_name = "Status";
		constexpr static rivet::rivet_type_id Status_type_id = 0x45782b7b;
		constexpr static std::string_view SyncRevision_type_name = "SyncRevision";
		constexpr static rivet::rivet_type_id SyncRevision_type_id = 0x3517e0cc; 

		explicit RCSConfig() = default;
		explicit RCSConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc2e0975c Status {};
		std::shared_ptr<rivet::ddl::generated::RCSRevisionOptions> SyncRevision {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
