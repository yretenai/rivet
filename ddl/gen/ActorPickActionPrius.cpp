// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorPickActionPrius.hpp>

namespace rivet::ddl::generated {
	ActorPickActionPrius::ActorPickActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		PickType = serialized->get_enum<rivet::ddl::generated::x2ac46ab8>(PickType_type_id, rivet::ddl::generated::x2ac46ab8_values); 
	}

	[[nodiscard]] auto
	ActorPickActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorPickActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorPickActionPrius> {
		if (incoming_type_id == ActorPickActionPrius::type_id) {
			return std::make_shared<ActorPickActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
