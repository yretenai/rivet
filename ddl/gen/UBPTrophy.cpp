// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UBPImage.hpp> 

#include <rivet/ddl/generated/UBPTrophy.hpp>

namespace rivet::ddl::generated {
	UBPTrophy::UBPTrophy([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		entityId = serialized->get_string(entityId_type_id);
		entityType = serialized->get_enum<rivet::ddl::generated::x80ef7527>(entityType_type_id, rivet::ddl::generated::x80ef7527_values);
		entitySubtype = serialized->get_enum<rivet::ddl::generated::x56d897ac>(entitySubtype_type_id, rivet::ddl::generated::x56d897ac_values);
		images = serialized->unwrap_into_many<rivet::ddl::generated::UBPImage>(images_type_id);
		reward_images = serialized->unwrap_into_many<rivet::ddl::generated::UBPImage>(reward_images_type_id); 
	}

	[[nodiscard]] auto
	UBPTrophy::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UBPTrophy::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UBPTrophy> {
		if (incoming_type_id == UBPTrophy::type_id) {
			return std::make_shared<UBPTrophy>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
