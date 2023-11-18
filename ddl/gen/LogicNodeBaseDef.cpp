// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OrNodeDef.hpp>
#include <rivet/ddl/generated/CompareStringHashesNodeDef.hpp>
#include <rivet/ddl/generated/SubstringNodeDef.hpp>
#include <rivet/ddl/generated/OrSignalNodeDef.hpp>
#include <rivet/ddl/generated/RandomBoolGeneratorNodeDef.hpp>
#include <rivet/ddl/generated/CheckBoolNodeDef.hpp>
#include <rivet/ddl/generated/AndNodeDef.hpp> 

#include <rivet/ddl/generated/LogicNodeBaseDef.hpp>

namespace rivet::ddl::generated {
	LogicNodeBaseDef::LogicNodeBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {

	}

	[[nodiscard]] auto
	LogicNodeBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LogicNodeBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LogicNodeBaseDef> {
		if (incoming_type_id == LogicNodeBaseDef::type_id) {
			return std::make_shared<LogicNodeBaseDef>(serialized);
		}

		auto AndNodeDef_ptr = AndNodeDef::from_substruct(incoming_type_id, serialized);
		if (AndNodeDef_ptr != nullptr) {
			return AndNodeDef_ptr;
		}

		auto CheckBoolNodeDef_ptr = CheckBoolNodeDef::from_substruct(incoming_type_id, serialized);
		if (CheckBoolNodeDef_ptr != nullptr) {
			return CheckBoolNodeDef_ptr;
		}

		auto RandomBoolGeneratorNodeDef_ptr = RandomBoolGeneratorNodeDef::from_substruct(incoming_type_id, serialized);
		if (RandomBoolGeneratorNodeDef_ptr != nullptr) {
			return RandomBoolGeneratorNodeDef_ptr;
		}

		auto OrSignalNodeDef_ptr = OrSignalNodeDef::from_substruct(incoming_type_id, serialized);
		if (OrSignalNodeDef_ptr != nullptr) {
			return OrSignalNodeDef_ptr;
		}

		auto SubstringNodeDef_ptr = SubstringNodeDef::from_substruct(incoming_type_id, serialized);
		if (SubstringNodeDef_ptr != nullptr) {
			return SubstringNodeDef_ptr;
		}

		auto CompareStringHashesNodeDef_ptr = CompareStringHashesNodeDef::from_substruct(incoming_type_id, serialized);
		if (CompareStringHashesNodeDef_ptr != nullptr) {
			return CompareStringHashesNodeDef_ptr;
		}

		auto OrNodeDef_ptr = OrNodeDef::from_substruct(incoming_type_id, serialized);
		if (OrNodeDef_ptr != nullptr) {
			return OrNodeDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
