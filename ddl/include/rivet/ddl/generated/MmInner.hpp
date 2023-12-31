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

	struct RIVET_DDL_SHARED MmInner : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MmInner";
		constexpr static rivet::rivet_type_id type_id = 0xa85f5e37;

		constexpr static std::string_view Scalar_type_name = "Scalar";
		constexpr static rivet::rivet_type_id Scalar_type_id = 0xdc2475e2;
		constexpr static std::string_view Array_type_name = "Array";
		constexpr static rivet::rivet_type_id Array_type_id = 0xb85f2276;
		constexpr static std::string_view Hash_type_name = "Hash";
		constexpr static rivet::rivet_type_id Hash_type_id = 0xe128a208; 

		explicit MmInner() = default;
		explicit MmInner([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Scalar {};
		std::vector<std::string_view> Array {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MmLeaf>> Hash {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MmInner>;
	};
} // namespace rivet::ddl::generated

// clang-format on
