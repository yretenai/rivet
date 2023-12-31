// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestAnimal.hpp> 

#include <rivet/ddl/generated/TestAnimalSubstruct.hpp>

namespace rivet::ddl::generated {
	TestAnimalSubstruct::TestAnimalSubstruct([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HiddenField = serialized->get_string(HiddenField_type_id);
		Owner = serialized->get_string(Owner_type_id);
		Pet = serialized->unwrap_into<rivet::ddl::generated::TestAnimal>(Pet_type_id); 
	}

	[[nodiscard]] auto
	TestAnimalSubstruct::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestAnimalSubstruct::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestAnimalSubstruct> {
		if (incoming_type_id == TestAnimalSubstruct::type_id) {
			return std::make_shared<TestAnimalSubstruct>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
