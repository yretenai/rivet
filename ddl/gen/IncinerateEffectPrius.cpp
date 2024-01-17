// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IncinerateEffectPrius.hpp>

namespace rivet::ddl::generated {
	IncinerateEffectPrius::IncinerateEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IncinerateConfig = serialized->get_string(IncinerateConfig_type_id, {}); 
	}

	[[nodiscard]] auto
	IncinerateEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IncinerateEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IncinerateEffectPrius> {
		if (incoming_type_id == IncinerateEffectPrius::type_id) {
			return std::make_shared<IncinerateEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
