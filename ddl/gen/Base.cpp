// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MoveCosinePrius.hpp> 

#include <rivet/ddl/generated/Base.hpp>

namespace rivet::ddl::generated {
	Base::Base([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Pasternak = serialized->get_float(Pasternak_type_id); 
	}

	[[nodiscard]] auto
	Base::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Base::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Base> {
		if (incoming_type_id == Base::type_id) {
			return std::make_shared<Base>(serialized);
		}

		auto MoveCosinePrius_ptr = MoveCosinePrius::from_substruct(incoming_type_id, serialized);
		if (MoveCosinePrius_ptr != nullptr) {
			return MoveCosinePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
