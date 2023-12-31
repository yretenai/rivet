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
	struct RIVET_DDL_SHARED DenomSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DenomSettings";
		constexpr static rivet::rivet_type_id type_id = 0xb8c5960d;

		constexpr static std::string_view ModelOverride_type_name = "ModelOverride";
		constexpr static rivet::rivet_type_id ModelOverride_type_id = 0x50d70eaa;
		constexpr static std::string_view MaterialOverride_type_name = "MaterialOverride";
		constexpr static rivet::rivet_type_id MaterialOverride_type_id = 0xffafa5a1;
		constexpr static std::string_view Scale_type_name = "Scale";
		constexpr static rivet::rivet_type_id Scale_type_id = 0xf515e945; 

		explicit DenomSettings() = default;
		explicit DenomSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> ModelOverride {};
		std::string_view MaterialOverride {};
		float Scale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DenomSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
