// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSDictionary.hpp>
#include <rivet/ddl/generated/RCSMessage.hpp> 

#include <rivet/ddl/generated/RCSFstatOutput.hpp>

namespace rivet::ddl::generated {
	RCSFstatOutput::RCSFstatOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Warnings = serialized->unwrap_into<rivet::ddl::generated::RCSMessage>(Warnings_type_id);
		Errors = serialized->unwrap_into<rivet::ddl::generated::RCSMessage>(Errors_type_id);
		Stats = serialized->unwrap_into_many<rivet::ddl::generated::RCSDictionary>(Stats_type_id); 
	}

	[[nodiscard]] auto
	RCSFstatOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSFstatOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSFstatOutput> {
		if (incoming_type_id == RCSFstatOutput::type_id) {
			return std::make_shared<RCSFstatOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
