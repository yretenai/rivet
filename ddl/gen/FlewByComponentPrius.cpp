// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlewByComponentPrius.hpp>

namespace rivet::ddl::generated {
	FlewByComponentPrius::FlewByComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id, true);
		FlewByDistStart = serialized->get_float(FlewByDistStart_type_id, 50.000000);
		FlewByDistStop = serialized->get_float(FlewByDistStop_type_id, 50.000000);
		MinSpeedStart = serialized->get_float(MinSpeedStart_type_id, -1.000000);
		MinSpeedStop = serialized->get_float(MinSpeedStop_type_id, -1.000000); 
	}

	[[nodiscard]] auto
	FlewByComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlewByComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlewByComponentPrius> {
		if (incoming_type_id == FlewByComponentPrius::type_id) {
			return std::make_shared<FlewByComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
