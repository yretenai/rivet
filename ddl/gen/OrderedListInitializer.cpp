// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OrderedListInitEntry.hpp> 

#include <rivet/ddl/generated/OrderedListInitializer.hpp>

namespace rivet::ddl::generated {
	OrderedListInitializer::OrderedListInitializer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InitTypes = serialized->get_bitset<rivet::ddl::generated::xcd385c63>(InitTypes_type_id, rivet::ddl::generated::xcd385c63_values);
		List = serialized->unwrap_into_many<rivet::ddl::generated::OrderedListInitEntry>(List_type_id); 
	}

	[[nodiscard]] auto
	OrderedListInitializer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OrderedListInitializer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrderedListInitializer> {
		if (incoming_type_id == OrderedListInitializer::type_id) {
			return std::make_shared<OrderedListInitializer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
