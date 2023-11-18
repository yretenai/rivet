// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeetleLaunchOverridePrius.hpp>

namespace rivet::ddl::generated {
	BeetleLaunchOverridePrius::BeetleLaunchOverridePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideLaunchSpeed = serialized->get_float(OverrideLaunchSpeed_type_id); 
	}

	[[nodiscard]] auto
	BeetleLaunchOverridePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeetleLaunchOverridePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeetleLaunchOverridePrius> {
		if (incoming_type_id == BeetleLaunchOverridePrius::type_id) {
			return std::make_shared<BeetleLaunchOverridePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
