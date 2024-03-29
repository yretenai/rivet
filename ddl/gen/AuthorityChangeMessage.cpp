// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AuthorityChangeMessage.hpp>

namespace rivet::ddl::generated {
	AuthorityChangeMessage::AuthorityChangeMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ObjectId = serialized->get_uint16(ObjectId_type_id, 65535u);
		Authority = serialized->get_int8(Authority_type_id, -1);
		AuthorityType = serialized->get_enum<rivet::ddl::generated::AuthorityType>(AuthorityType_type_id, rivet::ddl::generated::AuthorityType_values, rivet::ddl::generated::AuthorityType::Invalid);
		ChangeType = serialized->get_enum<rivet::ddl::generated::xabe03d0c>(ChangeType_type_id, rivet::ddl::generated::xabe03d0c_values, rivet::ddl::generated::xabe03d0c::None); 
	}

	[[nodiscard]] auto
	AuthorityChangeMessage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AuthorityChangeMessage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AuthorityChangeMessage> {
		if (incoming_type_id == AuthorityChangeMessage::type_id) {
			return std::make_shared<AuthorityChangeMessage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
