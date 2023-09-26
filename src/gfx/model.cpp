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
		throw invalid_operation("texture::texture: invalid texture stream");
	}

	init(dat1_stream, bundle.get_entry(index + 1));
}

void
rivet::gfx::model::init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident) {
	auto data = dat1(dat1_stream);
	if (data.type_name != "Texture Built File") {
		throw invalid_operation("texture::texture: invalid texture stream");
	}

	auto header_stream = data.get_section<model_header>(model::model_built_type_id);
	if (header_stream == nullptr) {
		throw invalid_operation("texture::texture: invalid texture stream");
	}

	if (header_stream->empty()) {
		throw invalid_operation("texture::texture: invalid texture stream");
	}

	header = header_stream->get<texture::texture_header>(0);
	if (resident != nullptr) {
		provide_resident(resident);
	}

	if (stream_buffer != nullptr) {
		provide_stream(stream);
	}
}
