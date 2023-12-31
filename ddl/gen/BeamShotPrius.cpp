// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PyrocitorShotPrius.hpp>
#include <rivet/ddl/generated/OldPyrocitorShotPrius.hpp>
#include <rivet/ddl/generated/SheepinatorShotPrius.hpp>
#include <rivet/ddl/generated/ShotKamehamehaPrius.hpp> 

#include <rivet/ddl/generated/BeamShotPrius.hpp>

namespace rivet::ddl::generated {
	BeamShotPrius::BeamShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotBasePrius(serialized) {
		ImpactJoint = serialized->get_string(ImpactJoint_type_id); 
	}

	[[nodiscard]] auto
	BeamShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeamShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamShotPrius> {
		if (incoming_type_id == BeamShotPrius::type_id) {
			return std::make_shared<BeamShotPrius>(serialized);
		}

		auto ShotKamehamehaPrius_ptr = ShotKamehamehaPrius::from_substruct(incoming_type_id, serialized);
		if (ShotKamehamehaPrius_ptr != nullptr) {
			return ShotKamehamehaPrius_ptr;
		}

		auto SheepinatorShotPrius_ptr = SheepinatorShotPrius::from_substruct(incoming_type_id, serialized);
		if (SheepinatorShotPrius_ptr != nullptr) {
			return SheepinatorShotPrius_ptr;
		}

		auto PyrocitorShotPrius_ptr = PyrocitorShotPrius::from_substruct(incoming_type_id, serialized);
		if (PyrocitorShotPrius_ptr != nullptr) {
			return PyrocitorShotPrius_ptr;
		}

		auto OldPyrocitorShotPrius_ptr = OldPyrocitorShotPrius::from_substruct(incoming_type_id, serialized);
		if (OldPyrocitorShotPrius_ptr != nullptr) {
			return OldPyrocitorShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
