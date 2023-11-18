// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LogQueryQueryLoggersOutput.hpp>

namespace rivet::ddl::generated {
	LogQueryQueryLoggersOutput::LogQueryQueryLoggersOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NameHash = serialized->get_uint32s(NameHash_type_id);
		Names = serialized->get_strings(Names_type_id);
		Enabled = serialized->get_bools(Enabled_type_id); 
	}

	[[nodiscard]] auto
	LogQueryQueryLoggersOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LogQueryQueryLoggersOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LogQueryQueryLoggersOutput> {
		if (incoming_type_id == LogQueryQueryLoggersOutput::type_id) {
			return std::make_shared<LogQueryQueryLoggersOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
