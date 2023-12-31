// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BooleanPlug.hpp> 

#include <rivet/ddl/generated/SyncOutputPlugBoolean.hpp>

namespace rivet::ddl::generated {
	SyncOutputPlugBoolean::SyncOutputPlugBoolean([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OutputPlugBaseDef(serialized) {
		Value = serialized->unwrap_into<rivet::ddl::generated::BooleanPlug>(Value_type_id);
		SyncLabel = serialized->get_string(SyncLabel_type_id);
		SyncOutputFlags = serialized->get_bitset<rivet::ddl::generated::x3611f38d>(SyncOutputFlags_type_id, rivet::ddl::generated::x3611f38d_values); 
	}

	[[nodiscard]] auto
	SyncOutputPlugBoolean::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncOutputPlugBoolean::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncOutputPlugBoolean> {
		if (incoming_type_id == SyncOutputPlugBoolean::type_id) {
			return std::make_shared<SyncOutputPlugBoolean>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
