// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConnectionBaseDef.hpp>
#include <rivet/ddl/generated/CommentBaseDef.hpp>
#include <rivet/ddl/generated/NodeGraphBaseDef.hpp>
#include <rivet/ddl/generated/InputPlugBaseDef.hpp>
#include <rivet/ddl/generated/ConnectionPinDef.hpp>
#include <rivet/ddl/generated/NodeBaseDef.hpp>
#include <rivet/ddl/generated/OutputPlugBaseDef.hpp>
#include <rivet/ddl/generated/ConnectionTuidDef.hpp> 

#include <rivet/ddl/generated/NodeGraphItemDef.hpp>

namespace rivet::ddl::generated {
	NodeGraphItemDef::NodeGraphItemDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x577f103e>(Type_type_id, rivet::ddl::generated::x577f103e_values); 
	}

	[[nodiscard]] auto
	NodeGraphItemDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeGraphItemDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphItemDef> {
		if (incoming_type_id == NodeGraphItemDef::type_id) {
			return std::make_shared<NodeGraphItemDef>(serialized);
		}

		auto ConnectionTuidDef_ptr = ConnectionTuidDef::from_substruct(incoming_type_id, serialized);
		if (ConnectionTuidDef_ptr != nullptr) {
			return ConnectionTuidDef_ptr;
		}

		auto NodeBaseDef_ptr = NodeBaseDef::from_substruct(incoming_type_id, serialized);
		if (NodeBaseDef_ptr != nullptr) {
			return NodeBaseDef_ptr;
		}

		auto OutputPlugBaseDef_ptr = OutputPlugBaseDef::from_substruct(incoming_type_id, serialized);
		if (OutputPlugBaseDef_ptr != nullptr) {
			return OutputPlugBaseDef_ptr;
		}

		auto ConnectionPinDef_ptr = ConnectionPinDef::from_substruct(incoming_type_id, serialized);
		if (ConnectionPinDef_ptr != nullptr) {
			return ConnectionPinDef_ptr;
		}

		auto InputPlugBaseDef_ptr = InputPlugBaseDef::from_substruct(incoming_type_id, serialized);
		if (InputPlugBaseDef_ptr != nullptr) {
			return InputPlugBaseDef_ptr;
		}

		auto NodeGraphBaseDef_ptr = NodeGraphBaseDef::from_substruct(incoming_type_id, serialized);
		if (NodeGraphBaseDef_ptr != nullptr) {
			return NodeGraphBaseDef_ptr;
		}

		auto CommentBaseDef_ptr = CommentBaseDef::from_substruct(incoming_type_id, serialized);
		if (CommentBaseDef_ptr != nullptr) {
			return CommentBaseDef_ptr;
		}

		auto ConnectionBaseDef_ptr = ConnectionBaseDef::from_substruct(incoming_type_id, serialized);
		if (ConnectionBaseDef_ptr != nullptr) {
			return ConnectionBaseDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
