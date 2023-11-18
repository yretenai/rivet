// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FilterSignalActionPrius.hpp>

namespace rivet::ddl::generated {
	FilterSignalActionPrius::FilterSignalActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		FilterBehavior = serialized->get_enum<rivet::ddl::generated::xb1e939f4>(FilterBehavior_type_id, rivet::ddl::generated::xb1e939f4_values);
		FilterTime = serialized->get_float(FilterTime_type_id); 
	}

	[[nodiscard]] auto
	FilterSignalActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FilterSignalActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FilterSignalActionPrius> {
		if (incoming_type_id == FilterSignalActionPrius::type_id) {
			return std::make_shared<FilterSignalActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
