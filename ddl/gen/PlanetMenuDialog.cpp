// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlanetMenuDialog.hpp>

namespace rivet::ddl::generated {
	PlanetMenuDialog::PlanetMenuDialog([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Dialog = serialized->get_enum<rivet::ddl::generated::x6be956dd>(Dialog_type_id, rivet::ddl::generated::x6be956dd_values);
		Mission = serialized->get_string(Mission_type_id);
		PlayOnAvailable = serialized->get_bool(PlayOnAvailable_type_id);
		PlayOnActive = serialized->get_bool(PlayOnActive_type_id); 
	}

	[[nodiscard]] auto
	PlanetMenuDialog::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlanetMenuDialog::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetMenuDialog> {
		if (incoming_type_id == PlanetMenuDialog::type_id) {
			return std::make_shared<PlanetMenuDialog>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated