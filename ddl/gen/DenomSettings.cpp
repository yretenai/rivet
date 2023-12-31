// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DenomSettings.hpp>

namespace rivet::ddl::generated {
	DenomSettings::DenomSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModelOverride = serialized->get_strings(ModelOverride_type_id);
		MaterialOverride = serialized->get_string(MaterialOverride_type_id);
		Scale = serialized->get_float(Scale_type_id); 
	}

	[[nodiscard]] auto
	DenomSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DenomSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DenomSettings> {
		if (incoming_type_id == DenomSettings::type_id) {
			return std::make_shared<DenomSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
