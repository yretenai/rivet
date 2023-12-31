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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct GadgetListElement; 

	struct RIVET_DDL_SHARED MasterGadgetList : ConfigBase {
		constexpr static std::string_view type_name = "MasterGadgetList";
		constexpr static rivet::rivet_type_id type_id = 0x209a942e;

		constexpr static std::string_view Gadgets_type_name = "Gadgets";
		constexpr static rivet::rivet_type_id Gadgets_type_id = 0x173f995a; 

		explicit MasterGadgetList() = default;
		explicit MasterGadgetList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::GadgetListElement>> Gadgets {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterGadgetList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
