// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetFileBuildOutput.hpp> 

#include <rivet/ddl/generated/BuiltDataErrorsWarnings.hpp>

namespace rivet::ddl::generated {
	BuiltDataErrorsWarnings::BuiltDataErrorsWarnings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		TargetPath = serialized->get_string(TargetPath_type_id);
		TargetType = serialized->get_enum<rivet::ddl::generated::x8b211a61>(TargetType_type_id, rivet::ddl::generated::x8b211a61_values);
		BuildOutput = serialized->unwrap_into<rivet::ddl::generated::TargetFileBuildOutput>(BuildOutput_type_id); 
	}

	[[nodiscard]] auto
	BuiltDataErrorsWarnings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BuiltDataErrorsWarnings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuiltDataErrorsWarnings> {
		if (incoming_type_id == BuiltDataErrorsWarnings::type_id) {
			return std::make_shared<BuiltDataErrorsWarnings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
