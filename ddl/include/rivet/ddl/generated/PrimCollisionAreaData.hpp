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
	struct PrimStyleBase; 

	struct RIVET_DDL_SHARED PrimCollisionAreaData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PrimCollisionAreaData";
		constexpr static rivet::rivet_type_id type_id = 0x47977b12;

		constexpr static std::string_view PrimStyle_type_name = "PrimStyle";
		constexpr static rivet::rivet_type_id PrimStyle_type_id = 0xe438ab5b; 

		explicit PrimCollisionAreaData() = default;
		explicit PrimCollisionAreaData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::PrimStyleBase> PrimStyle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrimCollisionAreaData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
