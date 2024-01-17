// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupRuinTokenPrius.hpp>

namespace rivet::ddl::generated {
	PickupRuinTokenPrius::PickupRuinTokenPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GamePickupItemPrius(serialized) {
		SaveID = serialized->get_enum<rivet::ddl::generated::xeccc3486>(SaveID_type_id, rivet::ddl::generated::xeccc3486_values, rivet::ddl::generated::xeccc3486::None); 
	}

	[[nodiscard]] auto
	PickupRuinTokenPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupRuinTokenPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupRuinTokenPrius> {
		if (incoming_type_id == PickupRuinTokenPrius::type_id) {
			return std::make_shared<PickupRuinTokenPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
