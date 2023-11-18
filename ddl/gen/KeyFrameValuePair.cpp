// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/KeyFrameValuePair.hpp>

namespace rivet::ddl::generated {
	KeyFrameValuePair::KeyFrameValuePair([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		First = serialized->get_floats(First_type_id);
		Second = serialized->get_floats(Second_type_id); 
	}

	[[nodiscard]] auto
	KeyFrameValuePair::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KeyFrameValuePair::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KeyFrameValuePair> {
		if (incoming_type_id == KeyFrameValuePair::type_id) {
			return std::make_shared<KeyFrameValuePair>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
