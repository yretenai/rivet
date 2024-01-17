// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/InteractLocationAreaPrius.hpp>

namespace rivet::ddl::generated {
	InteractLocationAreaPrius::InteractLocationAreaPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InteractLocationPrius(serialized) {
		AreaShape = serialized->get_enum<rivet::ddl::generated::xb7a407a9>(AreaShape_type_id, rivet::ddl::generated::xb7a407a9_values, rivet::ddl::generated::xb7a407a9::Square); 
	}

	[[nodiscard]] auto
	InteractLocationAreaPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InteractLocationAreaPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationAreaPrius> {
		if (incoming_type_id == InteractLocationAreaPrius::type_id) {
			return std::make_shared<InteractLocationAreaPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
