// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MayaScriptData.hpp>
#include <rivet/ddl/generated/CodeData.hpp>
#include <rivet/ddl/generated/HoudiniEngineData.hpp> 

#include <rivet/ddl/generated/Branch.hpp>

namespace rivet::ddl::generated {
	Branch::Branch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CodeBranches = serialized->get_strings(CodeBranches_type_id);
		MayaVersion = serialized->get_string(MayaVersion_type_id);
		BranchName = serialized->get_string(BranchName_type_id);
		Games = serialized->get_strings(Games_type_id);
		HoudiniEngine = serialized->unwrap_into<rivet::ddl::generated::HoudiniEngineData>(HoudiniEngine_type_id);
		Code = serialized->unwrap_into<rivet::ddl::generated::CodeData>(Code_type_id);
		MayaScripts = serialized->unwrap_into_many<rivet::ddl::generated::MayaScriptData>(MayaScripts_type_id); 
	}

	[[nodiscard]] auto
	Branch::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Branch::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Branch> {
		if (incoming_type_id == Branch::type_id) {
			return std::make_shared<Branch>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
