// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemComponentAmmoPrius.hpp>

namespace rivet::ddl::generated {
	ItemComponentAmmoPrius::ItemComponentAmmoPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BaseComponentAmmoPrius(serialized) {
		AmmoItemConfig = serialized->get_string(AmmoItemConfig_type_id);
		ClipMax = serialized->get_float(ClipMax_type_id); 
	}

	auto
	ItemComponentAmmoPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ItemComponentAmmoPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemComponentAmmoPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemComponentAmmoPrius> {
		if (incoming_type_id == ItemComponentAmmoPrius::type_id) {
			return std::make_shared<ItemComponentAmmoPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
