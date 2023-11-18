// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CompatVaultJsCommand.hpp>

namespace rivet::ddl::generated {
	CompatVaultJsCommand::CompatVaultJsCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x63e8ba6e>(Type_type_id, rivet::ddl::generated::x63e8ba6e_values); 
	}

	[[nodiscard]] auto
	CompatVaultJsCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompatVaultJsCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompatVaultJsCommand> {
		if (incoming_type_id == CompatVaultJsCommand::type_id) {
			return std::make_shared<CompatVaultJsCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
