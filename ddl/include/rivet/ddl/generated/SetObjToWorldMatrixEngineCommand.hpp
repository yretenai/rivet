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
	struct DDLMatrix4; 

	struct RIVET_DDL_SHARED SetObjToWorldMatrixEngineCommand : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetObjToWorldMatrixEngineCommand";
		constexpr static rivet::rivet_type_id type_id = 0x9e8a1431;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Matrix_type_name = "Matrix";
		constexpr static rivet::rivet_type_id Matrix_type_id = 0xc64b0fa8; 

		explicit SetObjToWorldMatrixEngineCommand() = default;
		explicit SetObjToWorldMatrixEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::shared_ptr<rivet::ddl::generated::DDLMatrix4> Matrix {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetObjToWorldMatrixEngineCommand>;
	};
} // namespace rivet::ddl::generated

// clang-format on
