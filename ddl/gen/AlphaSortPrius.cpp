// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AlphaSortPrius.hpp>

namespace rivet::ddl::generated {
	AlphaSortPrius::AlphaSortPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AlphaSortBias = serialized->get_float(AlphaSortBias_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	AlphaSortPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AlphaSortPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AlphaSortPrius> {
		if (incoming_type_id == AlphaSortPrius::type_id) {
			return std::make_shared<AlphaSortPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
