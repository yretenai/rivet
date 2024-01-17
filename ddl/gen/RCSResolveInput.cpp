// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSResolveInput.hpp>

namespace rivet::ddl::generated {
	RCSResolveInput::RCSResolveInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AutoResolve = serialized->get_enum<rivet::ddl::generated::x5c9fe7cc>(AutoResolve_type_id, rivet::ddl::generated::x5c9fe7cc_values, rivet::ddl::generated::x5c9fe7cc::Safe);
		Changelist = serialized->get_int32(Changelist_type_id, 0);
		Files = serialized->get_strings(Files_type_id);
		Preview = serialized->get_bool(Preview_type_id, false); 
	}

	[[nodiscard]] auto
	RCSResolveInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSResolveInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSResolveInput> {
		if (incoming_type_id == RCSResolveInput::type_id) {
			return std::make_shared<RCSResolveInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
