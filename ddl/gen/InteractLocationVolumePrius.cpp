// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InteractLocationVolumePrius.hpp>

namespace rivet::ddl::generated {
	InteractLocationVolumePrius::InteractLocationVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InteractLocationPrius(serialized) {
		InteractVolume = serialized->get_uint64(InteractVolume_type_id);
		ExitVolume = serialized->get_uint64(ExitVolume_type_id); 
	}

	[[nodiscard]] auto
	InteractLocationVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InteractLocationVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationVolumePrius> {
		if (incoming_type_id == InteractLocationVolumePrius::type_id) {
			return std::make_shared<InteractLocationVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
