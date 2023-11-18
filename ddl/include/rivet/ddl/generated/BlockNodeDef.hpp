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

#include <rivet/ddl/generated/enums/x577f103e.hpp> 

namespace rivet::ddl::generated {
	struct BlockOutputPlugSignal;
	struct BlockModifierInputPlugSignal;
	struct ModelAssetReferenceDef; 

	struct RIVET_DDL_SHARED BlockNodeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BlockNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xa86b4d72;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Collapsed_type_name = "Collapsed";
		constexpr static rivet::rivet_type_id Collapsed_type_id = 0xf07e7faf;
		constexpr static std::string_view Disabled_type_name = "Disabled";
		constexpr static rivet::rivet_type_id Disabled_type_id = 0x7effd393;
		constexpr static std::string_view X_type_name = "X";
		constexpr static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr static std::string_view Y_type_name = "Y";
		constexpr static rivet::rivet_type_id Y_type_id = 0x2934711b;
		constexpr static std::string_view BlockModel_type_name = "BlockModel";
		constexpr static rivet::rivet_type_id BlockModel_type_id = 0x56292184;
		constexpr static std::string_view LookName_type_name = "LookName";
		constexpr static rivet::rivet_type_id LookName_type_id = 0xad8c1e16;
		constexpr static std::string_view Output_type_name = "Output";
		constexpr static rivet::rivet_type_id Output_type_id = 0xf2a65af9;
		constexpr static std::string_view Input_type_name = "Input";
		constexpr static rivet::rivet_type_id Input_type_id = 0xc17bfe16; 

		explicit BlockNodeDef() = default;
		explicit BlockNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		rivet::ddl::generated::x577f103e Type {};
		bool Collapsed {};
		bool Disabled {};
		float X {};
		float Y {};
		std::shared_ptr<rivet::ddl::generated::ModelAssetReferenceDef> BlockModel {};
		std::string_view LookName {};
		std::shared_ptr<rivet::ddl::generated::BlockOutputPlugSignal> Output {};
		std::shared_ptr<rivet::ddl::generated::BlockModifierInputPlugSignal> Input {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BlockNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
