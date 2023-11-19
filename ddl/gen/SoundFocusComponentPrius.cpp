// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundFocusComponentData.hpp> 

#include <rivet/ddl/generated/SoundFocusComponentPrius.hpp>

namespace rivet::ddl::generated {
	SoundFocusComponentPrius::SoundFocusComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SoundFocusData = serialized->unwrap_into<rivet::ddl::generated::SoundFocusComponentData>(SoundFocusData_type_id); 
	}

	[[nodiscard]] auto
	SoundFocusComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundFocusComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundFocusComponentPrius> {
		if (incoming_type_id == SoundFocusComponentPrius::type_id) {
			return std::make_shared<SoundFocusComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated