// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestSubstructDerivedE.hpp>

namespace rivet::ddl::generated {
	TestSubstructDerivedE::TestSubstructDerivedE([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id); 
	}

	[[nodiscard]] auto
	TestSubstructDerivedE::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestSubstructDerivedE::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestSubstructDerivedE> {
		if (incoming_type_id == TestSubstructDerivedE::type_id) {
			return std::make_shared<TestSubstructDerivedE>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated