// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhotoLightData.hpp>

namespace rivet::ddl::generated {
	PhotoLightData::PhotoLightData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinIntensity = serialized->get_float(MinIntensity_type_id);
		MaxIntensity = serialized->get_float(MaxIntensity_type_id); 
	}

	auto
	PhotoLightData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PhotoLightData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotoLightData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotoLightData> {
		if (incoming_type_id == PhotoLightData::type_id) {
			return std::make_shared<PhotoLightData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
