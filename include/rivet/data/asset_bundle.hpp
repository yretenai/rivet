// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <memory>
#include <optional>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp>

namespace rivet::data {
	struct RIVET_SHARED asset_bundle {
		rivet::structures::rivet_asset_header header = {};
		std::optional<rivet::structures::rivet_asset_texture_header> texture_header = {};
		std::shared_ptr<rivet_data_array> buffer = nullptr;

		explicit asset_bundle(const std::shared_ptr<rivet_data_array> &stream);

		[[nodiscard]] auto
		get_entry(const rivet_index index) const -> std::shared_ptr<rivet_data_array>;
	};
} // namespace rivet::data
