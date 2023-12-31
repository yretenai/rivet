// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PartialReactStandardPrius.hpp>

namespace rivet::ddl::generated {
	PartialReactStandardPrius::PartialReactStandardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PartialReactBasePrius(serialized) {
		PartialReactDriver = serialized->get_string(PartialReactDriver_type_id);
		PartialReactCooldown = serialized->get_float(PartialReactCooldown_type_id); 
	}

	[[nodiscard]] auto
	PartialReactStandardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PartialReactStandardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PartialReactStandardPrius> {
		if (incoming_type_id == PartialReactStandardPrius::type_id) {
			return std::make_shared<PartialReactStandardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
