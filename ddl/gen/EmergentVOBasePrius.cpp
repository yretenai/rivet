// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EmergentVODataContainerPrius.hpp>
#include <rivet/ddl/generated/EmergentVOManagerBasePrius.hpp>
#include <rivet/ddl/generated/EmergentVOTagList.hpp> 

#include <rivet/ddl/generated/EmergentVOBasePrius.hpp>

namespace rivet::ddl::generated {
	EmergentVOBasePrius::EmergentVOBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EntityType = serialized->get_string(EntityType_type_id);
		DialogTags = serialized->unwrap_into<rivet::ddl::generated::EmergentVOTagList>(DialogTags_type_id); 
	}

	[[nodiscard]] auto
	EmergentVOBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EmergentVOBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOBasePrius> {
		if (incoming_type_id == EmergentVOBasePrius::type_id) {
			return std::make_shared<EmergentVOBasePrius>(serialized);
		}

		auto EmergentVOManagerBasePrius_ptr = EmergentVOManagerBasePrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerBasePrius_ptr != nullptr) {
			return EmergentVOManagerBasePrius_ptr;
		}

		auto EmergentVODataContainerPrius_ptr = EmergentVODataContainerPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVODataContainerPrius_ptr != nullptr) {
			return EmergentVODataContainerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
