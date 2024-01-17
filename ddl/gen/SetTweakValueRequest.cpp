// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetTweakValueRequest.hpp>

namespace rivet::ddl::generated {
	SetTweakValueRequest::SetTweakValueRequest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Session = serialized->get_string(Session_type_id, {});
		Type = serialized->get_string(Type_type_id, {});
		Addr = serialized->get_string(Addr_type_id, {});
		Value = serialized->get_field(Value_type_id); 
	}

	[[nodiscard]] auto
	SetTweakValueRequest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetTweakValueRequest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetTweakValueRequest> {
		if (incoming_type_id == SetTweakValueRequest::type_id) {
			return std::make_shared<SetTweakValueRequest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
