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
	struct OutputPlugFloat;
	struct InputPlugFloat; 

	struct RIVET_DDL_SHARED AddFloatsNodeDef : MathNodeBaseDef {
		constexpr static std::string_view type_name = "AddFloatsNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x6314f150;

		constexpr static std::string_view Addend_type_name = "Addend";
		constexpr static rivet::rivet_type_id Addend_type_id = 0x6b596841;
		constexpr static std::string_view Sum_type_name = "Sum";
		constexpr static rivet::rivet_type_id Sum_type_id = 0xe2e8b684; 

		explicit AddFloatsNodeDef() = default;
		explicit AddFloatsNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::InputPlugFloat>> Addend {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugFloat> Sum {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AddFloatsNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
