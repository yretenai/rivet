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

#include <rivet/ddl/generated/NodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugUInt; 

	struct RIVET_DDL_SHARED UIntOutNodeDef : NodeBaseDef {
		constexpr static std::string_view type_name = "UIntOutNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xe3240e36;

		constexpr static std::string_view Out_type_name = "Out";
		constexpr static rivet::rivet_type_id Out_type_id = 0x93bf4450; 

		explicit UIntOutNodeDef() = default;
		explicit UIntOutNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::OutputPlugUInt> Out {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIntOutNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
