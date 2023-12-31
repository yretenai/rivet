// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultHistoryEntry.hpp>
#include <rivet/ddl/generated/VaultSearchRecord.hpp> 

#include <rivet/ddl/generated/VaultSearchHistory.hpp>

namespace rivet::ddl::generated {
	VaultSearchHistory::VaultSearchHistory([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SearchRecords = serialized->unwrap_into_many<rivet::ddl::generated::VaultSearchRecord>(SearchRecords_type_id);
		HistoryOrder = serialized->unwrap_into_many<rivet::ddl::generated::VaultHistoryEntry>(HistoryOrder_type_id); 
	}

	[[nodiscard]] auto
	VaultSearchHistory::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultSearchHistory::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultSearchHistory> {
		if (incoming_type_id == VaultSearchHistory::type_id) {
			return std::make_shared<VaultSearchHistory>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
