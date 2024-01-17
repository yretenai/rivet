// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSlingshotSpinData.hpp>

namespace rivet::ddl::generated {
	HeroSlingshotSpinData::HeroSlingshotSpinData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinRotationSpeed = serialized->get_float(MinRotationSpeed_type_id, 720.000000);
		MaxRotationSpeed = serialized->get_float(MaxRotationSpeed_type_id, 2160.000000);
		TimeToReachMaxRotationSpeed = serialized->get_float(TimeToReachMaxRotationSpeed_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	HeroSlingshotSpinData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSlingshotSpinData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSlingshotSpinData> {
		if (incoming_type_id == HeroSlingshotSpinData::type_id) {
			return std::make_shared<HeroSlingshotSpinData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
