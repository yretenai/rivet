// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EngineModelInst.hpp>

namespace rivet::ddl::generated {
	EngineModelInst::EngineModelInst([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Path = serialized->get_string(Path_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::ModelInstType>(Type_type_id, rivet::ddl::generated::ModelInstType_values); 
	}

	[[nodiscard]] auto
	EngineModelInst::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineModelInst::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineModelInst> {
		if (incoming_type_id == EngineModelInst::type_id) {
			return std::make_shared<EngineModelInst>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
