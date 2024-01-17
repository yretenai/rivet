// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NavCapsule.hpp>

namespace rivet::ddl::generated {
	NavCapsule::NavCapsule([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id, 0.350000);
		Height = serialized->get_float(Height_type_id, 2.000000); 
	}

	[[nodiscard]] auto
	NavCapsule::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NavCapsule::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NavCapsule> {
		if (incoming_type_id == NavCapsule::type_id) {
			return std::make_shared<NavCapsule>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
