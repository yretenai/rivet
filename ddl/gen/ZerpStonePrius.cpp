// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZerpStonePrius.hpp>

namespace rivet::ddl::generated {
	ZerpStonePrius::ZerpStonePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveIDs = serialized->get_int32s(SaveIDs_type_id);
		ZerpPickupActor = serialized->get_string(ZerpPickupActor_type_id); 
	}

	[[nodiscard]] auto
	ZerpStonePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZerpStonePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZerpStonePrius> {
		if (incoming_type_id == ZerpStonePrius::type_id) {
			return std::make_shared<ZerpStonePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
