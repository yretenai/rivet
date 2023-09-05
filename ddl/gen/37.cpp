// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwardEntry.hpp> 

#include <rivet/ddl/generated/AwardGroup.hpp>

namespace rivet::ddl::generated {
	AwardGroup::AwardGroup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GroupType = serialized->get_enum<rivet::ddl::generated::x1eee6c26>(GroupType_type_id, rivet::ddl::generated::x1eee6c26_values);
		CodeName = serialized->get_string(CodeName_type_id);
		Platform = serialized->get_bitset<rivet::ddl::generated::x74d56eb6>(Platform_type_id, rivet::ddl::generated::x74d56eb6_values);
		NameLocTag = serialized->get_string(NameLocTag_type_id);
		DescLocTag = serialized->get_string(DescLocTag_type_id);
		ImagePath = serialized->get_string(ImagePath_type_id);
		Awards = serialized->unwrap_into_many<rivet::ddl::generated::AwardEntry>(Awards_type_id); 
	}

	auto
	AwardGroup::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AwardGroup::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwardGroup::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardGroup> {
		if (incoming_type_id == AwardGroup::type_id) {
			return std::make_shared<AwardGroup>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
