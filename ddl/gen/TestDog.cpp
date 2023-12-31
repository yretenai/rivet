// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestDog.hpp>

namespace rivet::ddl::generated {
	TestDog::TestDog([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		WalksPerDay = serialized->get_int32(WalksPerDay_type_id); 
	}

	[[nodiscard]] auto
	TestDog::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestDog::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestDog> {
		if (incoming_type_id == TestDog::type_id) {
			return std::make_shared<TestDog>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
