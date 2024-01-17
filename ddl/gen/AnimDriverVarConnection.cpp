// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverVarConnection.hpp>

namespace rivet::ddl::generated {
	AnimDriverVarConnection::AnimDriverVarConnection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xf23ee100>(Type_type_id, rivet::ddl::generated::xf23ee100_values, rivet::ddl::generated::xf23ee100::Invalid);
		RefNodeName = serialized->get_string(RefNodeName_type_id, "");
		Index = serialized->get_uint32(Index_type_id, 0); 
	}

	[[nodiscard]] auto
	AnimDriverVarConnection::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverVarConnection::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverVarConnection> {
		if (incoming_type_id == AnimDriverVarConnection::type_id) {
			return std::make_shared<AnimDriverVarConnection>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
