// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialOverrideSyncComponentPrius.hpp>

namespace rivet::ddl::generated {
	MaterialOverrideSyncComponentPrius::MaterialOverrideSyncComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	MaterialOverrideSyncComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialOverrideSyncComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialOverrideSyncComponentPrius> {
		if (incoming_type_id == MaterialOverrideSyncComponentPrius::type_id) {
			return std::make_shared<MaterialOverrideSyncComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
