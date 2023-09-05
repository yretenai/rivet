// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FilterPair.hpp>

namespace rivet::ddl::generated {
	FilterPair::FilterPair([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GroupId = serialized->get_enum<rivet::ddl::generated::x6571cd70>(GroupId_type_id, rivet::ddl::generated::x6571cd70_values);
		FilterId = serialized->get_enum<rivet::ddl::generated::xfdd79442>(FilterId_type_id, rivet::ddl::generated::xfdd79442_values); 
	}

	auto
	FilterPair::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	FilterPair::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FilterPair::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FilterPair> {
		if (incoming_type_id == FilterPair::type_id) {
			return std::make_shared<FilterPair>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
