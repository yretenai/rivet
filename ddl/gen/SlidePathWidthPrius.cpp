// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SlidePathWidthPrius.hpp>

namespace rivet::ddl::generated {
	SlidePathWidthPrius::SlidePathWidthPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Width = serialized->get_float(Width_type_id); 
	}

	[[nodiscard]] auto
	SlidePathWidthPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SlidePathWidthPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SlidePathWidthPrius> {
		if (incoming_type_id == SlidePathWidthPrius::type_id) {
			return std::make_shared<SlidePathWidthPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
