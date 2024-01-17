// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeInputVisibilityCondition.hpp> 

#include <rivet/ddl/generated/ShaderSampler.hpp>

namespace rivet::ddl::generated {
	ShaderSampler::ShaderSampler([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SourcePath = serialized->get_string(SourcePath_type_id, {});
		Name = serialized->get_string(Name_type_id, {});
		DisplayName = serialized->get_string(DisplayName_type_id, {});
		InputInternalName = serialized->get_string(InputInternalName_type_id, {});
		Description = serialized->get_string(Description_type_id, {});
		Group = serialized->get_string(Group_type_id, {});
		SortOrder = serialized->get_string(SortOrder_type_id, {});
		SubGraphAncestors = serialized->get_string(SubGraphAncestors_type_id, {});
		HWRegister = serialized->get_uint32(HWRegister_type_id, 0);
		Type = serialized->get_uint32(Type_type_id, 0);
		Exposed = serialized->get_bool(Exposed_type_id, true);
		DeveloperMode = serialized->get_bool(DeveloperMode_type_id, false);
		VisibilityCondition = serialized->unwrap_into<rivet::ddl::generated::MaterialNodeInputVisibilityCondition>(VisibilityCondition_type_id); 
	}

	[[nodiscard]] auto
	ShaderSampler::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShaderSampler::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShaderSampler> {
		if (incoming_type_id == ShaderSampler::type_id) {
			return std::make_shared<ShaderSampler>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
