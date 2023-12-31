// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WaterImpulseData.hpp> 

#include <rivet/ddl/generated/WaterImpulseGeneratorPrius.hpp>

namespace rivet::ddl::generated {
	WaterImpulseGeneratorPrius::WaterImpulseGeneratorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ImpulseList = serialized->unwrap_into_many<rivet::ddl::generated::WaterImpulseData>(ImpulseList_type_id); 
	}

	[[nodiscard]] auto
	WaterImpulseGeneratorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WaterImpulseGeneratorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WaterImpulseGeneratorPrius> {
		if (incoming_type_id == WaterImpulseGeneratorPrius::type_id) {
			return std::make_shared<WaterImpulseGeneratorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
