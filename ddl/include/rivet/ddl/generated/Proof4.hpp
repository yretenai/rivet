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

#include <rivet/ddl/generated/bitsets/BitsB.hpp> 

namespace rivet::ddl::generated {
	struct Proof3; 

	struct RIVET_DDL_SHARED Proof4 : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Proof4";
		constexpr static rivet::rivet_type_id type_id = 0x35570276;

		constexpr static std::string_view BaseField_type_name = "BaseField";
		constexpr static rivet::rivet_type_id BaseField_type_id = 0xd38f4bbb;
		constexpr static std::string_view B_type_name = "B";
		constexpr static rivet::rivet_type_id B_type_id = 0xa351b8f7;
		constexpr static std::string_view D_type_name = "D";
		constexpr static rivet::rivet_type_id D_type_id = 0x4a321dc2;
		constexpr static std::string_view F64_type_name = "F64";
		constexpr static rivet::rivet_type_id F64_type_id = 0x31e62289;
		constexpr static std::string_view Bool_type_name = "Bool";
		constexpr static rivet::rivet_type_id Bool_type_id = 0x6511f622;
		constexpr static std::string_view Boolean_type_name = "Boolean";
		constexpr static rivet::rivet_type_id Boolean_type_id = 0x8b6feb50;
		constexpr static std::string_view C_type_name = "C";
		constexpr static rivet::rivet_type_id C_type_id = 0xd4568861;
		constexpr static std::string_view BitsB_type_name = "BitsB";
		constexpr static rivet::rivet_type_id BitsB_type_id = 0xb5956d7d;
		constexpr static std::string_view Proof_type_name = "Proof";
		constexpr static rivet::rivet_type_id Proof_type_id = 0xe2aa8c1c;
		constexpr static std::string_view Hash_type_name = "Hash";
		constexpr static rivet::rivet_type_id Hash_type_id = 0xe128a208;
		constexpr static std::string_view S_type_name = "S";
		constexpr static rivet::rivet_type_id S_type_id = 0xc9e19805;
		constexpr static std::string_view F_type_name = "F";
		constexpr static rivet::rivet_type_id F_type_id = 0xa43c7cee;
		constexpr static std::string_view T_type_name = "T";
		constexpr static rivet::rivet_type_id T_type_id = 0x57850da6;
		constexpr static std::string_view J_type_name = "J";
		constexpr static rivet::rivet_type_id J_type_id = 0xad8a30c5;
		constexpr static std::string_view A_type_name = "A";
		constexpr static rivet::rivet_type_id A_type_id = 0x3a58e94d;
		constexpr static std::string_view U32b_type_name = "U32b";
		constexpr static rivet::rivet_type_id U32b_type_id = 0x25d440ce;
		constexpr static std::string_view MLS_type_name = "MLS";
		constexpr static rivet::rivet_type_id MLS_type_id = 0x3bb5a8ef;
		constexpr static std::string_view DM_type_name = "DM";
		constexpr static rivet::rivet_type_id DM_type_id = 0x7d4dacac; 

		explicit Proof4() = default;
		explicit Proof4([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t BaseField {};
		float B {};
		double D {};
		double F64 {};
		bool Bool {};
		bool Boolean {};
		std::vector<int32_t> C {};
		rivet::ddl::generated::BitsB BitsB {};
		std::shared_ptr<rivet::ddl::generated::Proof3> Proof {};
		std::vector<int32_t> Hash {};
		std::string_view S {};
		std::string_view F {};
		uint64_t T {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> J {};
		uint64_t A {};
		uint32_t U32b {};
		std::string_view MLS {};
		std::string_view DM {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Proof4>;
	};
} // namespace rivet::ddl::generated

// clang-format on
