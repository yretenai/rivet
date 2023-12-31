// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FastTravelPointPropElement.hpp>

namespace rivet::ddl::generated {
	FastTravelPointPropElement::FastTravelPointPropElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Prop = serialized->get_uint64(Prop_type_id); 
	}

	[[nodiscard]] auto
	FastTravelPointPropElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FastTravelPointPropElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FastTravelPointPropElement> {
		if (incoming_type_id == FastTravelPointPropElement::type_id) {
			return std::make_shared<FastTravelPointPropElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
