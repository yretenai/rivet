// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountOfferPrius.hpp>

namespace rivet::ddl::generated {
	MountOfferPrius::MountOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GenericOfferPrius(serialized) {
		MountConfig = serialized->get_string(MountConfig_type_id); 
	}

	[[nodiscard]] auto
	MountOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountOfferPrius> {
		if (incoming_type_id == MountOfferPrius::type_id) {
			return std::make_shared<MountOfferPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
