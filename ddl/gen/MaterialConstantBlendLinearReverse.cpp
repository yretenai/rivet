// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialConstantBlendLinearReverse.hpp>

namespace rivet::ddl::generated {
	MaterialConstantBlendLinearReverse::MaterialConstantBlendLinearReverse([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MaterialConstantBlendBase(serialized) {
		Time = serialized->get_float(Time_type_id); 
	}

	[[nodiscard]] auto
	MaterialConstantBlendLinearReverse::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialConstantBlendLinearReverse::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialConstantBlendLinearReverse> {
		if (incoming_type_id == MaterialConstantBlendLinearReverse::type_id) {
			return std::make_shared<MaterialConstantBlendLinearReverse>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
