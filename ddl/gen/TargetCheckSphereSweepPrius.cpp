// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetCheckSphereSweepPrius.hpp>

namespace rivet::ddl::generated {
	TargetCheckSphereSweepPrius::TargetCheckSphereSweepPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetCheckBasePrius(serialized) {
		TargetLocator = serialized->get_string(TargetLocator_type_id, {});
		OwnerLocator = serialized->get_string(OwnerLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	TargetCheckSphereSweepPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetCheckSphereSweepPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetCheckSphereSweepPrius> {
		if (incoming_type_id == TargetCheckSphereSweepPrius::type_id) {
			return std::make_shared<TargetCheckSphereSweepPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
