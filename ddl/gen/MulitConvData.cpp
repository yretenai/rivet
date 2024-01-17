// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MulitConvOptions.hpp> 

#include <rivet/ddl/generated/MulitConvData.hpp>

namespace rivet::ddl::generated {
	MulitConvData::MulitConvData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinDelay = serialized->get_float(MinDelay_type_id, 5.000000);
		MaxDelay = serialized->get_float(MaxDelay_type_id, 7.000000);
		ConversationOptions = serialized->unwrap_into_many<rivet::ddl::generated::MulitConvOptions>(ConversationOptions_type_id); 
	}

	[[nodiscard]] auto
	MulitConvData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MulitConvData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MulitConvData> {
		if (incoming_type_id == MulitConvData::type_id) {
			return std::make_shared<MulitConvData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
