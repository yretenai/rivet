// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SVOGeneratorStepSplitElement.hpp> 

#include <rivet/ddl/generated/SVOGeneratorStepSplit.hpp>

namespace rivet::ddl::generated {
	SVOGeneratorStepSplit::SVOGeneratorStepSplit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Elements = serialized->unwrap_into_many<rivet::ddl::generated::SVOGeneratorStepSplitElement>(Elements_type_id); 
	}

	[[nodiscard]] auto
	SVOGeneratorStepSplit::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SVOGeneratorStepSplit::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SVOGeneratorStepSplit> {
		if (incoming_type_id == SVOGeneratorStepSplit::type_id) {
			return std::make_shared<SVOGeneratorStepSplit>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
