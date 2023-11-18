// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectUpdateTimeScale.hpp>

namespace rivet::ddl::generated {
	VisualEffectUpdateTimeScale::VisualEffectUpdateTimeScale([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x1ab32e78>(Type_type_id, rivet::ddl::generated::x1ab32e78_values);
		Scale = serialized->get_float(Scale_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectUpdateTimeScale::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectUpdateTimeScale::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectUpdateTimeScale> {
		if (incoming_type_id == VisualEffectUpdateTimeScale::type_id) {
			return std::make_shared<VisualEffectUpdateTimeScale>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
