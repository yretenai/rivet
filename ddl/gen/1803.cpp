// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BiomeLayer.hpp> 

#include <rivet/ddl/generated/BiomeDef.hpp>

namespace rivet::ddl::generated {
	BiomeDef::BiomeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Layers = serialized->unwrap_into_many<rivet::ddl::generated::BiomeLayer>(Layers_type_id); 
	}

	auto
	BiomeDef::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BiomeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BiomeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BiomeDef> {
		if (incoming_type_id == BiomeDef::type_id) {
			return std::make_shared<BiomeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
