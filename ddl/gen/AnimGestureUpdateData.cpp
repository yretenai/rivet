// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimGestureDef.hpp> 

#include <rivet/ddl/generated/AnimGestureUpdateData.hpp>

namespace rivet::ddl::generated {
	AnimGestureUpdateData::AnimGestureUpdateData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Elems = serialized->unwrap_into_many<rivet::ddl::generated::AnimGestureDef>(Elems_type_id); 
	}

	[[nodiscard]] auto
	AnimGestureUpdateData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimGestureUpdateData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimGestureUpdateData> {
		if (incoming_type_id == AnimGestureUpdateData::type_id) {
			return std::make_shared<AnimGestureUpdateData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated