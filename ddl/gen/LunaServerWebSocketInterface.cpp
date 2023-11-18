// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LunaServerWebSocketInterface.hpp>

namespace rivet::ddl::generated {
	LunaServerWebSocketInterface::LunaServerWebSocketInterface([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xa7988bfd>(Type_type_id, rivet::ddl::generated::xa7988bfd_values);
		Payload = serialized->get_field(Payload_type_id); 
	}

	[[nodiscard]] auto
	LunaServerWebSocketInterface::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LunaServerWebSocketInterface::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LunaServerWebSocketInterface> {
		if (incoming_type_id == LunaServerWebSocketInterface::type_id) {
			return std::make_shared<LunaServerWebSocketInterface>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
