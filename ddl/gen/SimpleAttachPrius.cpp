// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleAttachPrius.hpp>

namespace rivet::ddl::generated {
	SimpleAttachPrius::SimpleAttachPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Sync = serialized->get_bool(Sync_type_id);
		UpdateRotation = serialized->get_bool(UpdateRotation_type_id); 
	}

	[[nodiscard]] auto
	SimpleAttachPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleAttachPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleAttachPrius> {
		if (incoming_type_id == SimpleAttachPrius::type_id) {
			return std::make_shared<SimpleAttachPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
