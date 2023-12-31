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
	struct RIVET_DDL_SHARED VisualEffectParentInfluencePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectParentInfluencePrius";
		constexpr static rivet::rivet_type_id type_id = 0xf9419c94;

		constexpr static std::string_view ParentActor_type_name = "ParentActor";
		constexpr static rivet::rivet_type_id ParentActor_type_id = 0x68ae6e89;
		constexpr static std::string_view ParentInfluenceBirth_type_name = "ParentInfluenceBirth";
		constexpr static rivet::rivet_type_id ParentInfluenceBirth_type_id = 0x196cb53f;
		constexpr static std::string_view ParentInfluenceDeath_type_name = "ParentInfluenceDeath";
		constexpr static rivet::rivet_type_id ParentInfluenceDeath_type_id = 0xc29ae20e; 

		explicit VisualEffectParentInfluencePrius() = default;
		explicit VisualEffectParentInfluencePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t ParentActor {};
		float ParentInfluenceBirth {};
		float ParentInfluenceDeath {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectParentInfluencePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
