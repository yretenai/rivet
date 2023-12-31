// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PyrocitorShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionKamehamehaPrius.hpp>
#include <rivet/ddl/generated/SheepinatorShotMotionPrius.hpp>
#include <rivet/ddl/generated/OldPyrocitorShotMotionPrius.hpp> 

#include <rivet/ddl/generated/BeamShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	BeamShotMotionPrius::BeamShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotMotionBasePrius(serialized) {

	}

	[[nodiscard]] auto
	BeamShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeamShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamShotMotionPrius> {
		if (incoming_type_id == BeamShotMotionPrius::type_id) {
			return std::make_shared<BeamShotMotionPrius>(serialized);
		}

		auto OldPyrocitorShotMotionPrius_ptr = OldPyrocitorShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (OldPyrocitorShotMotionPrius_ptr != nullptr) {
			return OldPyrocitorShotMotionPrius_ptr;
		}

		auto SheepinatorShotMotionPrius_ptr = SheepinatorShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (SheepinatorShotMotionPrius_ptr != nullptr) {
			return SheepinatorShotMotionPrius_ptr;
		}

		auto ShotMotionKamehamehaPrius_ptr = ShotMotionKamehamehaPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionKamehamehaPrius_ptr != nullptr) {
			return ShotMotionKamehamehaPrius_ptr;
		}

		auto PyrocitorShotMotionPrius_ptr = PyrocitorShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (PyrocitorShotMotionPrius_ptr != nullptr) {
			return PyrocitorShotMotionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
