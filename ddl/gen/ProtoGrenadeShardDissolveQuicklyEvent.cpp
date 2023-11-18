// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProtoGrenadeShardDissolveQuicklyEvent.hpp>

namespace rivet::ddl::generated {
	ProtoGrenadeShardDissolveQuicklyEvent::ProtoGrenadeShardDissolveQuicklyEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsExploding = serialized->get_bool(IsExploding_type_id); 
	}

	[[nodiscard]] auto
	ProtoGrenadeShardDissolveQuicklyEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProtoGrenadeShardDissolveQuicklyEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtoGrenadeShardDissolveQuicklyEvent> {
		if (incoming_type_id == ProtoGrenadeShardDissolveQuicklyEvent::type_id) {
			return std::make_shared<ProtoGrenadeShardDissolveQuicklyEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
