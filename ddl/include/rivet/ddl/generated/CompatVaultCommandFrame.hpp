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
	struct RIVET_DDL_SHARED CompatVaultCommandFrame : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CompatVaultCommandFrame";
		constexpr static rivet::rivet_type_id type_id = 0xa2af7325;

		constexpr static std::string_view CommandType_type_name = "CommandType";
		constexpr static rivet::rivet_type_id CommandType_type_id = 0x97664397;
		constexpr static std::string_view CommandData_type_name = "CommandData";
		constexpr static rivet::rivet_type_id CommandData_type_id = 0xb64be7dd; 

		explicit CompatVaultCommandFrame() = default;
		explicit CompatVaultCommandFrame([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view CommandType {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> CommandData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompatVaultCommandFrame>;
	};
} // namespace rivet::ddl::generated

// clang-format on