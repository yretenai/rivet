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

#include <rivet/ddl/generated/MathNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugVec3;
	struct InputPlugVec3; 

	struct RIVET_DDL_SHARED NegateVectorNodeDef : MathNodeBaseDef {
		constexpr static std::string_view type_name = "NegateVectorNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xf5049f8e;

		constexpr static std::string_view Vec_type_name = "Vec";
		constexpr static rivet::rivet_type_id Vec_type_id = 0x49594b39;
		constexpr static std::string_view Negation_type_name = "Negation";
		constexpr static rivet::rivet_type_id Negation_type_id = 0xd95b2e9e; 

		explicit NegateVectorNodeDef() = default;
		explicit NegateVectorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugVec3> Vec {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugVec3> Negation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NegateVectorNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
