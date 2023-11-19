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
	struct RIVET_DDL_SHARED WwiseState : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WwiseState";
		constexpr static rivet::rivet_type_id type_id = 0x5686e39f;

		constexpr static std::string_view StateGroupName_type_name = "StateGroupName";
		constexpr static rivet::rivet_type_id StateGroupName_type_id = 0xf172707b;
		constexpr static std::string_view StateName_type_name = "StateName";
		constexpr static rivet::rivet_type_id StateName_type_id = 0xb6351547;
		constexpr static std::string_view StateGroupId_type_name = "StateGroupId";
		constexpr static rivet::rivet_type_id StateGroupId_type_id = 0x1145b180;
		constexpr static std::string_view StateId_type_name = "StateId";
		constexpr static rivet::rivet_type_id StateId_type_id = 0xb4c208d7; 

		explicit WwiseState() = default;
		explicit WwiseState([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view StateGroupName {};
		std::string_view StateName {};
		uint32_t StateGroupId {};
		uint32_t StateId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseState>;
	};
} // namespace rivet::ddl::generated

// clang-format on