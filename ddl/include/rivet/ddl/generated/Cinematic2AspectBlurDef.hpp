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

#include <rivet/ddl/generated/enums/x955c23c.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED Cinematic2AspectBlurDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2AspectBlurDef";
		constexpr static rivet::rivet_type_id type_id = 0xf8bea540;

		constexpr static std::string_view Visible_type_name = "Visible";
		constexpr static rivet::rivet_type_id Visible_type_id = 0x7b5a8b61;
		constexpr static std::string_view Start_type_name = "Start";
		constexpr static rivet::rivet_type_id Start_type_id = 0x862a994e;
		constexpr static std::string_view End_type_name = "End";
		constexpr static rivet::rivet_type_id End_type_id = 0x2aa91a78;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view Mode_type_name = "Mode";
		constexpr static rivet::rivet_type_id Mode_type_id = 0xa75a871b;
		constexpr static std::string_view Immediate_type_name = "Immediate";
		constexpr static rivet::rivet_type_id Immediate_type_id = 0x78805bcd; 

		explicit Cinematic2AspectBlurDef() = default;
		explicit Cinematic2AspectBlurDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Visible {};
		float Start {};
		float End {};
		float Radius {};
		rivet::ddl::generated::x955c23c Mode {};
		bool Immediate {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2AspectBlurDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
