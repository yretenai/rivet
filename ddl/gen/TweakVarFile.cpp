// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TweakVarVariable.hpp> 

#include <rivet/ddl/generated/TweakVarFile.hpp>

namespace rivet::ddl::generated {
	TweakVarFile::TweakVarFile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FileName = serialized->get_string(FileName_type_id);
		FilePath = serialized->get_string(FilePath_type_id);
		Variables = serialized->unwrap_into_many<rivet::ddl::generated::TweakVarVariable>(Variables_type_id); 
	}

	[[nodiscard]] auto
	TweakVarFile::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TweakVarFile::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TweakVarFile> {
		if (incoming_type_id == TweakVarFile::type_id) {
			return std::make_shared<TweakVarFile>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
