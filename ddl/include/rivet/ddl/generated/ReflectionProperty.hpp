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

#include <rivet/ddl/generated/enums/x10b3c4cf.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ReflectionProperty : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ReflectionProperty";
		constexpr const static rivet::rivet_type_id type_id = 0xf5c2cd85;

		constexpr const static std::string_view Material_type_name = "Material";
		constexpr const static rivet::rivet_type_id Material_type_id = 0x86bfc8e5;
		constexpr const static std::string_view ReflectionCoefficient_type_name = "ReflectionCoefficient";
		constexpr const static rivet::rivet_type_id ReflectionCoefficient_type_id = 0x1e54c7ae; 

		explicit ReflectionProperty() = default;
		explicit ReflectionProperty([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10b3c4cf Material {};
		float ReflectionCoefficient {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ReflectionProperty>;
	};
} // namespace rivet::ddl::generated

// clang-format on
