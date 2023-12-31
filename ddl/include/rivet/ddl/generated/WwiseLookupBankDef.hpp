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
	struct WwiseLookupEventElemDef; 

	struct RIVET_DDL_SHARED WwiseLookupBankDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WwiseLookupBankDef";
		constexpr static rivet::rivet_type_id type_id = 0xc03db0f4;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Path_type_name = "Path";
		constexpr static rivet::rivet_type_id Path_type_id = 0x3bc44bbf;
		constexpr static std::string_view AutoLoadOnRef_type_name = "AutoLoadOnRef";
		constexpr static rivet::rivet_type_id AutoLoadOnRef_type_id = 0x6c668944;
		constexpr static std::string_view Events_type_name = "Events";
		constexpr static rivet::rivet_type_id Events_type_id = 0x6dff192d; 

		explicit WwiseLookupBankDef() = default;
		explicit WwiseLookupBankDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view Path {};
		bool AutoLoadOnRef {};
		std::vector<std::shared_ptr<rivet::ddl::generated::WwiseLookupEventElemDef>> Events {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseLookupBankDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
