// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoudiniConfigDataFloat.hpp>
#include <rivet/ddl/generated/HoudiniConfigDataString.hpp>
#include <rivet/ddl/generated/HoudiniConfigDataInteger.hpp>
#include <rivet/ddl/generated/HoudiniConfigDataFile.hpp>
#include <rivet/ddl/generated/HoudiniConfigDataFileGroup.hpp> 

#include <rivet/ddl/generated/HoudiniConfig.hpp>

namespace rivet::ddl::generated {
	HoudiniConfig::HoudiniConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FileGroups = serialized->unwrap_into_many<rivet::ddl::generated::HoudiniConfigDataFileGroup>(FileGroups_type_id);
		Files = serialized->unwrap_into_many<rivet::ddl::generated::HoudiniConfigDataFile>(Files_type_id);
		Floats = serialized->unwrap_into_many<rivet::ddl::generated::HoudiniConfigDataFloat>(Floats_type_id);
		Integers = serialized->unwrap_into_many<rivet::ddl::generated::HoudiniConfigDataInteger>(Integers_type_id);
		Strings = serialized->unwrap_into_many<rivet::ddl::generated::HoudiniConfigDataString>(Strings_type_id); 
	}

	[[nodiscard]] auto
	HoudiniConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoudiniConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoudiniConfig> {
		if (incoming_type_id == HoudiniConfig::type_id) {
			return std::make_shared<HoudiniConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
