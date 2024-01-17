// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumeIntroDataPrius.hpp>

namespace rivet::ddl::generated {
	VolumeIntroDataPrius::VolumeIntroDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IntroDataPrius(serialized) {
		Volume = serialized->get_uint64(Volume_type_id, 0);
		Position = serialized->get_enum<rivet::ddl::generated::xb717d73b>(Position_type_id, rivet::ddl::generated::xb717d73b_values, rivet::ddl::generated::xb717d73b::RandomValidNav);
		WantsFlank = serialized->get_bool(WantsFlank_type_id, false);
		FaceVolumeOrientation = serialized->get_bool(FaceVolumeOrientation_type_id, false); 
	}

	[[nodiscard]] auto
	VolumeIntroDataPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumeIntroDataPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumeIntroDataPrius> {
		if (incoming_type_id == VolumeIntroDataPrius::type_id) {
			return std::make_shared<VolumeIntroDataPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
