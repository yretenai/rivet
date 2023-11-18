// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NamedLinkGameDataTest2.hpp>
#include <rivet/ddl/generated/NamedLinkGameDataTest1.hpp> 

#include <rivet/ddl/generated/NamedLinkGameDataBase.hpp>

namespace rivet::ddl::generated {
	NamedLinkGameDataBase::NamedLinkGameDataBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	NamedLinkGameDataBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NamedLinkGameDataBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NamedLinkGameDataBase> {
		if (incoming_type_id == NamedLinkGameDataBase::type_id) {
			return std::make_shared<NamedLinkGameDataBase>(serialized);
		}

		auto NamedLinkGameDataTest1_ptr = NamedLinkGameDataTest1::from_substruct(incoming_type_id, serialized);
		if (NamedLinkGameDataTest1_ptr != nullptr) {
			return NamedLinkGameDataTest1_ptr;
		}

		auto NamedLinkGameDataTest2_ptr = NamedLinkGameDataTest2::from_substruct(incoming_type_id, serialized);
		if (NamedLinkGameDataTest2_ptr != nullptr) {
			return NamedLinkGameDataTest2_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
