// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetMaterialPreviewModelOverrideEngineCommand.hpp>

namespace rivet::ddl::generated {
	SetMaterialPreviewModelOverrideEngineCommand::SetMaterialPreviewModelOverrideEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::ModelInstType>(Type_type_id, rivet::ddl::generated::ModelInstType_values); 
	}

	[[nodiscard]] auto
	SetMaterialPreviewModelOverrideEngineCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetMaterialPreviewModelOverrideEngineCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetMaterialPreviewModelOverrideEngineCommand> {
		if (incoming_type_id == SetMaterialPreviewModelOverrideEngineCommand::type_id) {
			return std::make_shared<SetMaterialPreviewModelOverrideEngineCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
