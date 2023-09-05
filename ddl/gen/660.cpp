// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapBase.hpp> 

#include <rivet/ddl/generated/Markup.hpp>

namespace rivet::ddl::generated {
	Markup::Markup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MarkupText = serialized->get_string(MarkupText_type_id);
		IconMapping = serialized->unwrap_into<rivet::ddl::generated::IconMapBase>(IconMapping_type_id);
		Clone = serialized->get_bool(Clone_type_id);
		SourceMarkup = serialized->get_string(SourceMarkup_type_id); 
	}

	auto
	Markup::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	Markup::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Markup::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Markup> {
		if (incoming_type_id == Markup::type_id) {
			return std::make_shared<Markup>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
