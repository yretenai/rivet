// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundWwiseMapDef.hpp>

namespace rivet::ddl::generated {
	SoundWwiseMapDef::SoundWwiseMapDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		WwiseId = serialized->get_uint32(WwiseId_type_id);
		PlatformMask = serialized->get_uint32(PlatformMask_type_id);
		LanguageMask = serialized->get_uint32(LanguageMask_type_id); 
	}

	[[nodiscard]] auto
	SoundWwiseMapDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundWwiseMapDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundWwiseMapDef> {
		if (incoming_type_id == SoundWwiseMapDef::type_id) {
			return std::make_shared<SoundWwiseMapDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
