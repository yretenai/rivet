// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupBoltPrius.hpp>

namespace rivet::ddl::generated {
	PickupBoltPrius::PickupBoltPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PickupSimplePrius(serialized) {
		BoltTier = serialized->get_enum<rivet::ddl::generated::x7484f9df>(BoltTier_type_id, rivet::ddl::generated::x7484f9df_values, rivet::ddl::generated::x7484f9df::None); 
	}

	[[nodiscard]] auto
	PickupBoltPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupBoltPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupBoltPrius> {
		if (incoming_type_id == PickupBoltPrius::type_id) {
			return std::make_shared<PickupBoltPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
