// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventFilter.hpp>

namespace rivet::ddl::generated {
	EventFilter::EventFilter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FilterName = serialized->get_string(FilterName_type_id, {});
		FilterCompare = serialized->get_enum<rivet::ddl::generated::x21604be>(FilterCompare_type_id, rivet::ddl::generated::x21604be_values, rivet::ddl::generated::x21604be::Equals);
		FilterOnValue = serialized->get_string(FilterOnValue_type_id, {});
		FilterActor = serialized->get_uint64(FilterActor_type_id, 0); 
	}

	[[nodiscard]] auto
	EventFilter::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventFilter::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventFilter> {
		if (incoming_type_id == EventFilter::type_id) {
			return std::make_shared<EventFilter>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
