// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EnablePoolsRequestMessage.hpp>

namespace rivet::ddl::generated {
	EnablePoolsRequestMessage::EnablePoolsRequestMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RequestId = serialized->get_uint16(RequestId_type_id);
		LastMessage = serialized->get_uint8(LastMessage_type_id);
		PoolIds = serialized->get_uint16s(PoolIds_type_id); 
	}

	[[nodiscard]] auto
	EnablePoolsRequestMessage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnablePoolsRequestMessage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnablePoolsRequestMessage> {
		if (incoming_type_id == EnablePoolsRequestMessage::type_id) {
			return std::make_shared<EnablePoolsRequestMessage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
