// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotGrunthorPrius.hpp>

namespace rivet::ddl::generated {
	GameBotGrunthorPrius::GameBotGrunthorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotMeleeBasePrius(serialized) {
		ArcFinderHeight0 = serialized->get_float(ArcFinderHeight0_type_id, 6.000000);
		ArcFinderHeight1 = serialized->get_float(ArcFinderHeight1_type_id, 8.000000);
		ArcFinderHeight2 = serialized->get_float(ArcFinderHeight2_type_id, 10.000000); 
	}

	[[nodiscard]] auto
	GameBotGrunthorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotGrunthorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotGrunthorPrius> {
		if (incoming_type_id == GameBotGrunthorPrius::type_id) {
			return std::make_shared<GameBotGrunthorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
