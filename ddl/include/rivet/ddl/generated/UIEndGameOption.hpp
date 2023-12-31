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

#include <rivet/ddl/generated/enums/x1da9d7a0.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIEndGameOption : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIEndGameOption";
		constexpr static rivet::rivet_type_id type_id = 0xc6363cdb;

		constexpr static std::string_view OptionID_type_name = "OptionID";
		constexpr static rivet::rivet_type_id OptionID_type_id = 0xf172a74;
		constexpr static std::string_view Label_type_name = "Label";
		constexpr static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd; 

		explicit UIEndGameOption() = default;
		explicit UIEndGameOption([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x1da9d7a0 OptionID {};
		std::string_view Label {};
		std::string_view Description {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIEndGameOption>;
	};
} // namespace rivet::ddl::generated

// clang-format on
