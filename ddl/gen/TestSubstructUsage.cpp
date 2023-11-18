// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TestSubstructBase3.hpp>
#include <rivet/ddl/generated/TestSubstructBase2.hpp>
#include <rivet/ddl/generated/TestSubstructBase1.hpp> 

#include <rivet/ddl/generated/TestSubstructUsage.hpp>

namespace rivet::ddl::generated {
	TestSubstructUsage::TestSubstructUsage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		subStruct1 = serialized->unwrap_into<rivet::ddl::generated::TestSubstructBase1>(subStruct1_type_id);
		subStruct2 = serialized->unwrap_into<rivet::ddl::generated::TestSubstructBase1>(subStruct2_type_id);
		subStruct3 = serialized->unwrap_into<rivet::ddl::generated::TestSubstructBase2>(subStruct3_type_id);
		subStruct4 = serialized->unwrap_into<rivet::ddl::generated::TestSubstructBase3>(subStruct4_type_id); 
	}

	[[nodiscard]] auto
	TestSubstructUsage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TestSubstructUsage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TestSubstructUsage> {
		if (incoming_type_id == TestSubstructUsage::type_id) {
			return std::make_shared<TestSubstructUsage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
