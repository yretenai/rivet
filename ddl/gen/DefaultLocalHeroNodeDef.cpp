// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugActor.hpp> 

#include <rivet/ddl/generated/DefaultLocalHeroNodeDef.hpp>

namespace rivet::ddl::generated {
	DefaultLocalHeroNodeDef::DefaultLocalHeroNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorNodeBaseDef(serialized) {
		Hero = serialized->unwrap_into<rivet::ddl::generated::OutputPlugActor>(Hero_type_id); 
	}

	[[nodiscard]] auto
	DefaultLocalHeroNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DefaultLocalHeroNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DefaultLocalHeroNodeDef> {
		if (incoming_type_id == DefaultLocalHeroNodeDef::type_id) {
			return std::make_shared<DefaultLocalHeroNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
