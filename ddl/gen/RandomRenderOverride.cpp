// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RandomRenderOverride.hpp>

namespace rivet::ddl::generated {
	RandomRenderOverride::RandomRenderOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		MinValue = serialized->get_float(MinValue_type_id);
		MaxValue = serialized->get_float(MaxValue_type_id); 
	}

	[[nodiscard]] auto
	RandomRenderOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RandomRenderOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomRenderOverride> {
		if (incoming_type_id == RandomRenderOverride::type_id) {
			return std::make_shared<RandomRenderOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
