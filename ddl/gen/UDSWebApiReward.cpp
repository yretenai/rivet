// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSWebApiReward.hpp>

namespace rivet::ddl::generated {
	UDSWebApiReward::UDSWebApiReward([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		name = serialized->get_strings(name_type_id); 
	}

	[[nodiscard]] auto
	UDSWebApiReward::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSWebApiReward::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSWebApiReward> {
		if (incoming_type_id == UDSWebApiReward::type_id) {
			return std::make_shared<UDSWebApiReward>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
