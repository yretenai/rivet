// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinalizeChunkActorEvent.hpp>

namespace rivet::ddl::generated {
	FinalizeChunkActorEvent::FinalizeChunkActorEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsDebris = serialized->get_bool(IsDebris_type_id); 
	}

	[[nodiscard]] auto
	FinalizeChunkActorEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinalizeChunkActorEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinalizeChunkActorEvent> {
		if (incoming_type_id == FinalizeChunkActorEvent::type_id) {
			return std::make_shared<FinalizeChunkActorEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated