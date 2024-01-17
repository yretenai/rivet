// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSRevertInput.hpp>

namespace rivet::ddl::generated {
	RCSRevertInput::RCSRevertInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Views = serialized->get_strings(Views_type_id);
		IfNotModified = serialized->get_bool(IfNotModified_type_id, false);
		Changelist = serialized->get_uint32(Changelist_type_id, 0); 
	}

	[[nodiscard]] auto
	RCSRevertInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSRevertInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSRevertInput> {
		if (incoming_type_id == RCSRevertInput::type_id) {
			return std::make_shared<RCSRevertInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
