// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RuinTokenPrius.hpp>

namespace rivet::ddl::generated {
	RuinTokenPrius::RuinTokenPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveID = serialized->get_enum<rivet::ddl::generated::xeccc3486>(SaveID_type_id, rivet::ddl::generated::xeccc3486_values, rivet::ddl::generated::xeccc3486::None);
		RuinPickupActor = serialized->get_string(RuinPickupActor_type_id, {}); 
	}

	[[nodiscard]] auto
	RuinTokenPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RuinTokenPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RuinTokenPrius> {
		if (incoming_type_id == RuinTokenPrius::type_id) {
			return std::make_shared<RuinTokenPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
