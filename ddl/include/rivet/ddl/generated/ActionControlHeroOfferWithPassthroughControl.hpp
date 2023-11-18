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

#include <rivet/ddl/generated/enums/xec7023d4.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActionControlHeroOfferWithPassthroughControl : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActionControlHeroOfferWithPassthroughControl";
		constexpr static rivet::rivet_type_id type_id = 0xe436b2c7;

		constexpr static std::string_view Control_type_name = "Control";
		constexpr static rivet::rivet_type_id Control_type_id = 0xec314f73; 

		explicit ActionControlHeroOfferWithPassthroughControl() = default;
		explicit ActionControlHeroOfferWithPassthroughControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xec7023d4 Control {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActionControlHeroOfferWithPassthroughControl>;
	};
} // namespace rivet::ddl::generated

// clang-format on
