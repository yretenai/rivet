// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/SkinItemConduitOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemConduitOverride::SkinItemConduitOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Conduit = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(Conduit_type_id); 
	}

	[[nodiscard]] auto
	SkinItemConduitOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemConduitOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemConduitOverride> {
		if (incoming_type_id == SkinItemConduitOverride::type_id) {
			return std::make_shared<SkinItemConduitOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
