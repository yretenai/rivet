// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogListArray.hpp>

namespace rivet::ddl::generated {
	DialogListArray::DialogListArray([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OrderType = serialized->get_enum<rivet::ddl::generated::xd3ac14c9>(OrderType_type_id, rivet::ddl::generated::xd3ac14c9_values);
		CompleteType = serialized->get_enum<rivet::ddl::generated::x39cee5ac>(CompleteType_type_id, rivet::ddl::generated::x39cee5ac_values);
		LocTags = serialized->get_strings(LocTags_type_id); 
	}

	[[nodiscard]] auto
	DialogListArray::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogListArray::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogListArray> {
		if (incoming_type_id == DialogListArray::type_id) {
			return std::make_shared<DialogListArray>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
