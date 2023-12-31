// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HurdleShotPrius.hpp>
#include <rivet/ddl/generated/ConstructorBotPipeShotPrius.hpp> 

#include <rivet/ddl/generated/GroundWaveShotPrius.hpp>

namespace rivet::ddl::generated {
	GroundWaveShotPrius::GroundWaveShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {

	}

	[[nodiscard]] auto
	GroundWaveShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GroundWaveShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroundWaveShotPrius> {
		if (incoming_type_id == GroundWaveShotPrius::type_id) {
			return std::make_shared<GroundWaveShotPrius>(serialized);
		}

		auto ConstructorBotPipeShotPrius_ptr = ConstructorBotPipeShotPrius::from_substruct(incoming_type_id, serialized);
		if (ConstructorBotPipeShotPrius_ptr != nullptr) {
			return ConstructorBotPipeShotPrius_ptr;
		}

		auto HurdleShotPrius_ptr = HurdleShotPrius::from_substruct(incoming_type_id, serialized);
		if (HurdleShotPrius_ptr != nullptr) {
			return HurdleShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
