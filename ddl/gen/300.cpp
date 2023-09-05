// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScaleData.hpp> 

#include <rivet/ddl/generated/KnockbackData.hpp>

namespace rivet::ddl::generated {
	KnockbackData::KnockbackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Driver = serialized->get_string(Driver_type_id);
		ScaleData = serialized->unwrap_into<rivet::ddl::generated::ScaleData>(ScaleData_type_id); 
	}

	auto
	KnockbackData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	KnockbackData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KnockbackData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KnockbackData> {
		if (incoming_type_id == KnockbackData::type_id) {
			return std::make_shared<KnockbackData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
