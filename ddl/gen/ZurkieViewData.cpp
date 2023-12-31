// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZurkieViewData.hpp>

namespace rivet::ddl::generated {
	ZurkieViewData::ZurkieViewData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIViewBaseData(serialized) {

	}

	[[nodiscard]] auto
	ZurkieViewData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZurkieViewData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZurkieViewData> {
		if (incoming_type_id == ZurkieViewData::type_id) {
			return std::make_shared<ZurkieViewData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
