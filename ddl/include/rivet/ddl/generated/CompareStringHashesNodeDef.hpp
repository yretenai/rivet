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

#include <rivet/ddl/generated/LogicNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugSignal;
	struct InputPlugStringHash;
	struct InputPlugSignal; 

	struct RIVET_DDL_SHARED CompareStringHashesNodeDef : LogicNodeBaseDef {
		constexpr static std::string_view type_name = "CompareStringHashesNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x96615285;

		constexpr static std::string_view Compare_type_name = "Compare";
		constexpr static rivet::rivet_type_id Compare_type_id = 0xbc236b65;
		constexpr static std::string_view A_type_name = "A";
		constexpr static rivet::rivet_type_id A_type_id = 0x3a58e94d;
		constexpr static std::string_view B_type_name = "B";
		constexpr static rivet::rivet_type_id B_type_id = 0xa351b8f7;
		constexpr static std::string_view Equal_type_name = "Equal";
		constexpr static rivet::rivet_type_id Equal_type_id = 0x37f8d936;
		constexpr static std::string_view NotEqual_type_name = "NotEqual";
		constexpr static rivet::rivet_type_id NotEqual_type_id = 0x9e476ea5; 

		explicit CompareStringHashesNodeDef() = default;
		explicit CompareStringHashesNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugSignal> Compare {};
		std::shared_ptr<rivet::ddl::generated::InputPlugStringHash> A {};
		std::shared_ptr<rivet::ddl::generated::InputPlugStringHash> B {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugSignal> Equal {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugSignal> NotEqual {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompareStringHashesNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
