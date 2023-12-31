// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorPositionNodeDef.hpp>
#include <rivet/ddl/generated/ActorValidNodeDef.hpp>
#include <rivet/ddl/generated/DefaultLocalHeroNodeDef.hpp> 

#include <rivet/ddl/generated/ActorNodeBaseDef.hpp>

namespace rivet::ddl::generated {
	ActorNodeBaseDef::ActorNodeBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {

	}

	[[nodiscard]] auto
	ActorNodeBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorNodeBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorNodeBaseDef> {
		if (incoming_type_id == ActorNodeBaseDef::type_id) {
			return std::make_shared<ActorNodeBaseDef>(serialized);
		}

		auto DefaultLocalHeroNodeDef_ptr = DefaultLocalHeroNodeDef::from_substruct(incoming_type_id, serialized);
		if (DefaultLocalHeroNodeDef_ptr != nullptr) {
			return DefaultLocalHeroNodeDef_ptr;
		}

		auto ActorValidNodeDef_ptr = ActorValidNodeDef::from_substruct(incoming_type_id, serialized);
		if (ActorValidNodeDef_ptr != nullptr) {
			return ActorValidNodeDef_ptr;
		}

		auto ActorPositionNodeDef_ptr = ActorPositionNodeDef::from_substruct(incoming_type_id, serialized);
		if (ActorPositionNodeDef_ptr != nullptr) {
			return ActorPositionNodeDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
