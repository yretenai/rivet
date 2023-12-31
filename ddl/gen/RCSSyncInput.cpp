// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSRevisionOptions.hpp> 

#include <rivet/ddl/generated/RCSSyncInput.hpp>

namespace rivet::ddl::generated {
	RCSSyncInput::RCSSyncInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Views = serialized->get_strings(Views_type_id);
		Force = serialized->get_bool(Force_type_id);
		Preview = serialized->get_bool(Preview_type_id);
		OverrideRevisionOptions = serialized->get_bool(OverrideRevisionOptions_type_id);
		RevisionOptions = serialized->unwrap_into<rivet::ddl::generated::RCSRevisionOptions>(RevisionOptions_type_id); 
	}

	[[nodiscard]] auto
	RCSSyncInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSSyncInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSSyncInput> {
		if (incoming_type_id == RCSSyncInput::type_id) {
			return std::make_shared<RCSSyncInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
