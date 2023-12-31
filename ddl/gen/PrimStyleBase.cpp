// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PrimStyleProgramatic.hpp>
#include <rivet/ddl/generated/PrimStyleLine.hpp>
#include <rivet/ddl/generated/PrimStyleSphere.hpp>
#include <rivet/ddl/generated/PrimStyleCapsule.hpp> 

#include <rivet/ddl/generated/PrimStyleBase.hpp>

namespace rivet::ddl::generated {
	PrimStyleBase::PrimStyleBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	PrimStyleBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PrimStyleBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrimStyleBase> {
		if (incoming_type_id == PrimStyleBase::type_id) {
			return std::make_shared<PrimStyleBase>(serialized);
		}

		auto PrimStyleCapsule_ptr = PrimStyleCapsule::from_substruct(incoming_type_id, serialized);
		if (PrimStyleCapsule_ptr != nullptr) {
			return PrimStyleCapsule_ptr;
		}

		auto PrimStyleSphere_ptr = PrimStyleSphere::from_substruct(incoming_type_id, serialized);
		if (PrimStyleSphere_ptr != nullptr) {
			return PrimStyleSphere_ptr;
		}

		auto PrimStyleLine_ptr = PrimStyleLine::from_substruct(incoming_type_id, serialized);
		if (PrimStyleLine_ptr != nullptr) {
			return PrimStyleLine_ptr;
		}

		auto PrimStyleProgramatic_ptr = PrimStyleProgramatic::from_substruct(incoming_type_id, serialized);
		if (PrimStyleProgramatic_ptr != nullptr) {
			return PrimStyleProgramatic_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
