// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageStatusData.hpp>

namespace rivet::ddl::generated {
	DamageStatusData::DamageStatusData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StatusType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(StatusType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::None);
		StatusAmount = serialized->get_float(StatusAmount_type_id, 0.000000);
		StatusDuration = serialized->get_float(StatusDuration_type_id, 0.000000);
		StatusActionCount = serialized->get_float(StatusActionCount_type_id, -1.000000); 
	}

	[[nodiscard]] auto
	DamageStatusData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageStatusData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStatusData> {
		if (incoming_type_id == DamageStatusData::type_id) {
			return std::make_shared<DamageStatusData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
