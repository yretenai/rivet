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
	struct TweakVarVariable; 

	struct RIVET_DDL_SHARED TweakVarFile : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TweakVarFile";
		constexpr static rivet::rivet_type_id type_id = 0xb40f10c5;

		constexpr static std::string_view FileName_type_name = "FileName";
		constexpr static rivet::rivet_type_id FileName_type_id = 0x6638fb2b;
		constexpr static std::string_view FilePath_type_name = "FilePath";
		constexpr static rivet::rivet_type_id FilePath_type_id = 0x334f0e22;
		constexpr static std::string_view Variables_type_name = "Variables";
		constexpr static rivet::rivet_type_id Variables_type_id = 0xa36e21d; 

		explicit TweakVarFile() = default;
		explicit TweakVarFile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view FileName {};
		std::string_view FilePath {};
		std::vector<std::shared_ptr<rivet::ddl::generated::TweakVarVariable>> Variables {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TweakVarFile>;
	};
} // namespace rivet::ddl::generated

// clang-format on