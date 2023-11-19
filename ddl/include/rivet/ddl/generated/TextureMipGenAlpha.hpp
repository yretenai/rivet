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

#include <rivet/ddl/generated/enums/xae1208ef.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TextureMipGenAlpha : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TextureMipGenAlpha";
		constexpr static rivet::rivet_type_id type_id = 0x79ba9ba2;

		constexpr static std::string_view Enable_type_name = "Enable";
		constexpr static rivet::rivet_type_id Enable_type_id = 0xcdd88655;
		constexpr static std::string_view Filter_type_name = "Filter";
		constexpr static rivet::rivet_type_id Filter_type_id = 0x41bc117a;
		constexpr static std::string_view PostSharpen_type_name = "PostSharpen";
		constexpr static rivet::rivet_type_id PostSharpen_type_id = 0xac2e7e59; 

		explicit TextureMipGenAlpha() = default;
		explicit TextureMipGenAlpha([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enable {};
		rivet::ddl::generated::xae1208ef Filter {};
		float PostSharpen {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TextureMipGenAlpha>;
	};
} // namespace rivet::ddl::generated

// clang-format on