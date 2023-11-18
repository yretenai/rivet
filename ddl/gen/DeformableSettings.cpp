// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DeformableSettings.hpp>

namespace rivet::ddl::generated {
	DeformableSettings::DeformableSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DrawDistance = serialized->get_float(DrawDistance_type_id);
		FadeInterval = serialized->get_float(FadeInterval_type_id);
		MinUserBias = serialized->get_float(MinUserBias_type_id);
		Resolution = serialized->get_uint32(Resolution_type_id);
		Height = serialized->get_float(Height_type_id);
		MinLoD = serialized->get_uint32(MinLoD_type_id); 
	}

	[[nodiscard]] auto
	DeformableSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DeformableSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeformableSettings> {
		if (incoming_type_id == DeformableSettings::type_id) {
			return std::make_shared<DeformableSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
