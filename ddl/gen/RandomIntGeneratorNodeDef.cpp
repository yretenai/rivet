// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugInt.hpp>
#include <rivet/ddl/generated/OutputPlugSignal.hpp>
#include <rivet/ddl/generated/InputPlugInt.hpp>
#include <rivet/ddl/generated/InputPlugSignal.hpp> 

#include <rivet/ddl/generated/RandomIntGeneratorNodeDef.hpp>

namespace rivet::ddl::generated {
	RandomIntGeneratorNodeDef::RandomIntGeneratorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		GenerateNext = serialized->unwrap_into<rivet::ddl::generated::InputPlugSignal>(GenerateNext_type_id);
		OnGenerateNext = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(OnGenerateNext_type_id);
		Min = serialized->unwrap_into<rivet::ddl::generated::InputPlugInt>(Min_type_id);
		Max = serialized->unwrap_into<rivet::ddl::generated::InputPlugInt>(Max_type_id);
		Next = serialized->unwrap_into<rivet::ddl::generated::OutputPlugInt>(Next_type_id);
		Info = serialized->get_string(Info_type_id); 
	}

	[[nodiscard]] auto
	RandomIntGeneratorNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RandomIntGeneratorNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomIntGeneratorNodeDef> {
		if (incoming_type_id == RandomIntGeneratorNodeDef::type_id) {
			return std::make_shared<RandomIntGeneratorNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
