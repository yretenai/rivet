// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PortalIntroSourcePrius.hpp>

namespace rivet::ddl::generated {
	PortalIntroSourcePrius::PortalIntroSourcePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Portal = serialized->get_uint64(Portal_type_id);
		AdditionalSpawnOffsets = serialized->unwrap_into_many<rivet::ddl::generated::DDLVector3>(AdditionalSpawnOffsets_type_id); 
	}

	[[nodiscard]] auto
	PortalIntroSourcePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PortalIntroSourcePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalIntroSourcePrius> {
		if (incoming_type_id == PortalIntroSourcePrius::type_id) {
			return std::make_shared<PortalIntroSourcePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated