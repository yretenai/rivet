// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemColorOverridePrius.hpp>

namespace rivet::ddl::generated {
	SkinItemColorOverridePrius::SkinItemColorOverridePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SkinManagerColorPrius(serialized) {

	}

	[[nodiscard]] auto
	SkinItemColorOverridePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemColorOverridePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemColorOverridePrius> {
		if (incoming_type_id == SkinItemColorOverridePrius::type_id) {
			return std::make_shared<SkinItemColorOverridePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
