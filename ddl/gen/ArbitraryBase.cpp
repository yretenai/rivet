// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ArbitraryBase.hpp>

namespace rivet::ddl::generated {
	ArbitraryBase::ArbitraryBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ArbitraryBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ArbitraryBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ArbitraryBase> {
		if (incoming_type_id == ArbitraryBase::type_id) {
			return std::make_shared<ArbitraryBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
