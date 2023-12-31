// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HammerCrankAnimListenerPrius.hpp>

namespace rivet::ddl::generated {
	HammerCrankAnimListenerPrius::HammerCrankAnimListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HammerCrank = serialized->get_uint64(HammerCrank_type_id);
		AnimDriverName = serialized->get_string(AnimDriverName_type_id);
		TriggerAnimEvents = serialized->get_bool(TriggerAnimEvents_type_id); 
	}

	[[nodiscard]] auto
	HammerCrankAnimListenerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HammerCrankAnimListenerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HammerCrankAnimListenerPrius> {
		if (incoming_type_id == HammerCrankAnimListenerPrius::type_id) {
			return std::make_shared<HammerCrankAnimListenerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
