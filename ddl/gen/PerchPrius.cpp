// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerchPrius.hpp>

namespace rivet::ddl::generated {
	PerchPrius::PerchPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AddToDBOnActivate = serialized->get_bool(AddToDBOnActivate_type_id);
		RopeAttachLocation = serialized->get_uint64(RopeAttachLocation_type_id); 
	}

	[[nodiscard]] auto
	PerchPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerchPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerchPrius> {
		if (incoming_type_id == PerchPrius::type_id) {
			return std::make_shared<PerchPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
