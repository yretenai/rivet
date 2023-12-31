// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MayaNameTrackTags.hpp>

namespace rivet::ddl::generated {
	MayaNameTrackTags::MayaNameTrackTags([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MayaName = serialized->get_string(MayaName_type_id);
		TrackTagsDef = serialized->get_strings(TrackTagsDef_type_id); 
	}

	[[nodiscard]] auto
	MayaNameTrackTags::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MayaNameTrackTags::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MayaNameTrackTags> {
		if (incoming_type_id == MayaNameTrackTags::type_id) {
			return std::make_shared<MayaNameTrackTags>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
