// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InteractGeneralOfferPrius.hpp> 

#include <rivet/ddl/generated/InteractEnablePrius.hpp>

namespace rivet::ddl::generated {
	InteractEnablePrius::InteractEnablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartActive = serialized->get_bool(StartActive_type_id);
		AnimDriverInactive = serialized->get_string(AnimDriverInactive_type_id);
		AnimDriverActive = serialized->get_string(AnimDriverActive_type_id);
		AnimDriverUse = serialized->get_string(AnimDriverUse_type_id);
		EnableType = serialized->get_enum<rivet::ddl::generated::x96f58b25>(EnableType_type_id, rivet::ddl::generated::x96f58b25_values);
		EnableActorGroup = serialized->get_uint64(EnableActorGroup_type_id);
		InteractOfferPrius = serialized->unwrap_into<rivet::ddl::generated::InteractGeneralOfferPrius>(InteractOfferPrius_type_id); 
	}

	[[nodiscard]] auto
	InteractEnablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InteractEnablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractEnablePrius> {
		if (incoming_type_id == InteractEnablePrius::type_id) {
			return std::make_shared<InteractEnablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
