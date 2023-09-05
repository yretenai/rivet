// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemColor.hpp> 

#include <rivet/ddl/generated/SkinItemColorConfig.hpp>

namespace rivet::ddl::generated {
	SkinItemColorConfig::SkinItemColorConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ColorCategory = serialized->get_enum<rivet::ddl::generated::xc47e2a72>(ColorCategory_type_id, rivet::ddl::generated::xc47e2a72_values);
		ColorList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemColor>(ColorList_type_id); 
	}

	auto
	SkinItemColorConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SkinItemColorConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemColorConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemColorConfig> {
		if (incoming_type_id == SkinItemColorConfig::type_id) {
			return std::make_shared<SkinItemColorConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
