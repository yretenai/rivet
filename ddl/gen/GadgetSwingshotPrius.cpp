// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GadgetSwingshotPrius.hpp>

namespace rivet::ddl::generated {
	GadgetSwingshotPrius::GadgetSwingshotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EmitLocator = serialized->get_string(EmitLocator_type_id, {});
		ShotActor = serialized->get_string(ShotActor_type_id, {}); 
	}

	[[nodiscard]] auto
	GadgetSwingshotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GadgetSwingshotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GadgetSwingshotPrius> {
		if (incoming_type_id == GadgetSwingshotPrius::type_id) {
			return std::make_shared<GadgetSwingshotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
