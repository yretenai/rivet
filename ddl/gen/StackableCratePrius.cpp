// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StackableCrateZeroGPrius.hpp> 

#include <rivet/ddl/generated/StackableCratePrius.hpp>

namespace rivet::ddl::generated {
	StackableCratePrius::StackableCratePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id);
		SaveDestroy = serialized->get_bool(SaveDestroy_type_id);
		Indestructible = serialized->get_bool(Indestructible_type_id);
		CrateMaterialType = serialized->get_enum<rivet::ddl::generated::x66e403a6>(CrateMaterialType_type_id, rivet::ddl::generated::x66e403a6_values); 
	}

	[[nodiscard]] auto
	StackableCratePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StackableCratePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StackableCratePrius> {
		if (incoming_type_id == StackableCratePrius::type_id) {
			return std::make_shared<StackableCratePrius>(serialized);
		}

		auto StackableCrateZeroGPrius_ptr = StackableCrateZeroGPrius::from_substruct(incoming_type_id, serialized);
		if (StackableCrateZeroGPrius_ptr != nullptr) {
			return StackableCrateZeroGPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
