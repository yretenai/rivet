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
	struct MmLeaf; 

	struct RIVET_DDL_SHARED MmArrayAndHash : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MmArrayAndHash";
		constexpr static rivet::rivet_type_id type_id = 0x1ad64495;

		constexpr static std::string_view Hash_type_name = "Hash";
		constexpr static rivet::rivet_type_id Hash_type_id = 0xe128a208;
		constexpr static std::string_view Array_type_name = "Array";
		constexpr static rivet::rivet_type_id Array_type_id = 0xb85f2276; 

		explicit MmArrayAndHash() = default;
		explicit MmArrayAndHash([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::MmLeaf>> Hash {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MmLeaf>> Array {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MmArrayAndHash>;
	};
} // namespace rivet::ddl::generated

// clang-format on
