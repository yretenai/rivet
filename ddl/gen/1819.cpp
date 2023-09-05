// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIGoldBoltOptionTypeList.hpp>
#include <rivet/ddl/generated/UIGoldBoltOptionTypeStatic.hpp> 

#include <rivet/ddl/generated/UIGoldBoltOptionTypeBase.hpp>

namespace rivet::ddl::generated {
	UIGoldBoltOptionTypeBase::UIGoldBoltOptionTypeBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	auto
	UIGoldBoltOptionTypeBase::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UIGoldBoltOptionTypeBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIGoldBoltOptionTypeBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIGoldBoltOptionTypeBase> {
		if (incoming_type_id == UIGoldBoltOptionTypeBase::type_id) {
			return std::make_shared<UIGoldBoltOptionTypeBase>(serialized);
		}

		auto UIGoldBoltOptionTypeList_ptr = UIGoldBoltOptionTypeList::from_substruct(incoming_type_id, serialized);
		if (UIGoldBoltOptionTypeList_ptr != nullptr) {
			return UIGoldBoltOptionTypeList_ptr;
		}

		auto UIGoldBoltOptionTypeStatic_ptr = UIGoldBoltOptionTypeStatic::from_substruct(incoming_type_id, serialized);
		if (UIGoldBoltOptionTypeStatic_ptr != nullptr) {
			return UIGoldBoltOptionTypeStatic_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
