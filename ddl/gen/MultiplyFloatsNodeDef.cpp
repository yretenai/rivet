// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugFloat.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/MultiplyFloatsNodeDef.hpp>

namespace rivet::ddl::generated {
	MultiplyFloatsNodeDef::MultiplyFloatsNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		Factor = serialized->unwrap_into_many<rivet::ddl::generated::InputPlugFloat>(Factor_type_id);
		Product = serialized->unwrap_into<rivet::ddl::generated::OutputPlugFloat>(Product_type_id); 
	}

	[[nodiscard]] auto
	MultiplyFloatsNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MultiplyFloatsNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MultiplyFloatsNodeDef> {
		if (incoming_type_id == MultiplyFloatsNodeDef::type_id) {
			return std::make_shared<MultiplyFloatsNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
