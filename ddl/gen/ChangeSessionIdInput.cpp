// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChangeSessionIdInput.hpp>

namespace rivet::ddl::generated {
	ChangeSessionIdInput::ChangeSessionIdInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SessionId = serialized->get_uint64(SessionId_type_id); 
	}

	[[nodiscard]] auto
	ChangeSessionIdInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChangeSessionIdInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeSessionIdInput> {
		if (incoming_type_id == ChangeSessionIdInput::type_id) {
			return std::make_shared<ChangeSessionIdInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
