// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CVCGathererPrius.hpp>

namespace rivet::ddl::generated {
	CVCGathererPrius::CVCGathererPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id, 3.000000);
		HeightUp = serialized->get_float(HeightUp_type_id, 3.000000);
		HeightDown = serialized->get_float(HeightDown_type_id, 3.000000); 
	}

	[[nodiscard]] auto
	CVCGathererPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CVCGathererPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CVCGathererPrius> {
		if (incoming_type_id == CVCGathererPrius::type_id) {
			return std::make_shared<CVCGathererPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
