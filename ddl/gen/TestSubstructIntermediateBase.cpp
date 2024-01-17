// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestSubstructIntermediateBase.hpp>

namespace rivet::ddl::generated {
	TestSubstructIntermediateBase::TestSubstructIntermediateBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		AInt = serialized->get_int32(AInt_type_id, 44); 
	}

	[[nodiscard]] auto
	TestSubstructIntermediateBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestSubstructIntermediateBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestSubstructIntermediateBase> {
		if (incoming_type_id == TestSubstructIntermediateBase::type_id) {
			return std::make_shared<TestSubstructIntermediateBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
