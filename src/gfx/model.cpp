// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/gfx/model.hpp>
#include <rivet/structures/gfx/rivet_model.hpp>

using namespace rivet::data;
using namespace rivet::structures::gfx;

rivet::gfx::model::model(const rivet::data::asset_bundle &bundle, rivet::rivet_size index) {
	auto dat1_stream = bundle.get_entry(index);
	if (dat1_stream == nullptr) {
		throw invalid_operation("model::model: invalid model stream");
	}

	init(dat1_stream, bundle.get_entry(index + 1));
}

void
rivet::gfx::model::init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident) {
	auto data = dat1(dat1_stream);
	if (data.type_name != "Model Built File") {
		throw invalid_operation("model::model: invalid model stream");
	}
}
