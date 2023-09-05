// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/BarrelObstructionOffsetFromEmit.hpp>

namespace rivet::ddl::generated {
	BarrelObstructionOffsetFromEmit::BarrelObstructionOffsetFromEmit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BarrelObstructionBase(serialized) {
		EmitterIndex = serialized->get_enum<rivet::ddl::generated::x77a4e9ba>(EmitterIndex_type_id, rivet::ddl::generated::x77a4e9ba_values);
		LocalSpaceOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalSpaceOffset_type_id); 
	}

	auto
	BarrelObstructionOffsetFromEmit::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BarrelObstructionOffsetFromEmit::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BarrelObstructionOffsetFromEmit::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BarrelObstructionOffsetFromEmit> {
		if (incoming_type_id == BarrelObstructionOffsetFromEmit::type_id) {
			return std::make_shared<BarrelObstructionOffsetFromEmit>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
