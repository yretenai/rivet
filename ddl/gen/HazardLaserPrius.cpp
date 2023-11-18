// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HazardLaserNodePrius.hpp> 

#include <rivet/ddl/generated/HazardLaserPrius.hpp>

namespace rivet::ddl::generated {
	HazardLaserPrius::HazardLaserPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SourceNode = serialized->unwrap_into<rivet::ddl::generated::HazardLaserNodePrius>(SourceNode_type_id);
		TargetNode = serialized->unwrap_into<rivet::ddl::generated::HazardLaserNodePrius>(TargetNode_type_id);
		Capped = serialized->get_bool(Capped_type_id);
		SyncNodes = serialized->get_bool(SyncNodes_type_id);
		CanBreak = serialized->get_bool(CanBreak_type_id);
		IgnoreEnvironment = serialized->get_bool(IgnoreEnvironment_type_id); 
	}

	[[nodiscard]] auto
	HazardLaserPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HazardLaserPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardLaserPrius> {
		if (incoming_type_id == HazardLaserPrius::type_id) {
			return std::make_shared<HazardLaserPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
