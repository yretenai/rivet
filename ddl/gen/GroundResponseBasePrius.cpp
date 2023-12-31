// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroGroundResponseBasePrius.hpp>
#include <rivet/ddl/generated/BotGroundResponseBasePrius.hpp>
#include <rivet/ddl/generated/PhysicsAVMaterialElement.hpp> 

#include <rivet/ddl/generated/GroundResponseBasePrius.hpp>

namespace rivet::ddl::generated {
	GroundResponseBasePrius::GroundResponseBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ResponseName = serialized->get_string(ResponseName_type_id);
		Material = serialized->unwrap_into_many<rivet::ddl::generated::PhysicsAVMaterialElement>(Material_type_id); 
	}

	[[nodiscard]] auto
	GroundResponseBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GroundResponseBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroundResponseBasePrius> {
		if (incoming_type_id == GroundResponseBasePrius::type_id) {
			return std::make_shared<GroundResponseBasePrius>(serialized);
		}

		auto BotGroundResponseBasePrius_ptr = BotGroundResponseBasePrius::from_substruct(incoming_type_id, serialized);
		if (BotGroundResponseBasePrius_ptr != nullptr) {
			return BotGroundResponseBasePrius_ptr;
		}

		auto HeroGroundResponseBasePrius_ptr = HeroGroundResponseBasePrius::from_substruct(incoming_type_id, serialized);
		if (HeroGroundResponseBasePrius_ptr != nullptr) {
			return HeroGroundResponseBasePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
