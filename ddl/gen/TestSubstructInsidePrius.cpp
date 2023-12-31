// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestAnimal.hpp> 

#include <rivet/ddl/generated/TestSubstructInsidePrius.hpp>

namespace rivet::ddl::generated {
	TestSubstructInsidePrius::TestSubstructInsidePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Pet = serialized->unwrap_into<rivet::ddl::generated::TestAnimal>(Pet_type_id); 
	}

	[[nodiscard]] auto
	TestSubstructInsidePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestSubstructInsidePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestSubstructInsidePrius> {
		if (incoming_type_id == TestSubstructInsidePrius::type_id) {
			return std::make_shared<TestSubstructInsidePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
