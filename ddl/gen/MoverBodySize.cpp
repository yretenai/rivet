// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MoverBodySize.hpp>

namespace rivet::ddl::generated {
	MoverBodySize::MoverBodySize([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BodyBottom = serialized->get_float(BodyBottom_type_id);
		BodyTop = serialized->get_float(BodyTop_type_id);
		BodyRadius = serialized->get_float(BodyRadius_type_id);
		GroundUp = serialized->get_float(GroundUp_type_id);
		GroundDown = serialized->get_float(GroundDown_type_id);
		GroundRadius = serialized->get_float(GroundRadius_type_id); 
	}

	[[nodiscard]] auto
	MoverBodySize::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MoverBodySize::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverBodySize> {
		if (incoming_type_id == MoverBodySize::type_id) {
			return std::make_shared<MoverBodySize>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated