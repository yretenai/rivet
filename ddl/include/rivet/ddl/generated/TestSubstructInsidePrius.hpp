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
	struct TestAnimal; 

	struct RIVET_DDL_SHARED TestSubstructInsidePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TestSubstructInsidePrius";
		constexpr static rivet::rivet_type_id type_id = 0x39211e41;

		constexpr static std::string_view Pet_type_name = "Pet";
		constexpr static rivet::rivet_type_id Pet_type_id = 0xce07b24c; 

		explicit TestSubstructInsidePrius() = default;
		explicit TestSubstructInsidePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::TestAnimal> Pet {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestSubstructInsidePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
