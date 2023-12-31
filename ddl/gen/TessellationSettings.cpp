// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TessellationSettings.hpp>

namespace rivet::ddl::generated {
	TessellationSettings::TessellationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::xc8ad99bd>(Type_type_id, rivet::ddl::generated::xc8ad99bd_values);
		TessellationFade = serialized->get_bool(TessellationFade_type_id);
		TessellationAmount = serialized->get_float(TessellationAmount_type_id); 
	}

	[[nodiscard]] auto
	TessellationSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TessellationSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TessellationSettings> {
		if (incoming_type_id == TessellationSettings::type_id) {
			return std::make_shared<TessellationSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
