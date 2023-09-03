// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <filesystem>
#include <iostream>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include <clipp.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/gfx/texture.hpp>
#include <rivet/rivet.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::gfx;

auto
convert_texture(int argc, char **argv) -> int {
	std::string output_dir;
	std::vector<std::string> input_files;
	bool version_flag = false;
	bool help_flag = false;
	bool dds = false;
	bool tif = false;
	bool force_dds_on_hdr = false;
	bool force_tif_on_hdr = false;

	auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help",
								clipp::option("-v", "--version").set(version_flag, true) % "show version",
								clipp::option("-d", "--dds").set(dds, true) % "convert to DDS",
								clipp::option("-t", "--tif").set(tif, true) % "convert to TIFF",
								clipp::option("-f", "--force-dds-on-hdr").set(force_dds_on_hdr, true) % "force DDS on HDR textures",
								clipp::option("-F", "--force-tif-on-hdr").set(force_tif_on_hdr, true) % "force TIFF on HDR textures"),
				clipp::option("-o", "--output-dir") & clipp::value("output_dir", output_dir) % "output directory",
				clipp::values("input-files", input_files) % "input files");

	if (!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		if (version_flag) {
			std::cout << "rivet-texture-convert version " << rivet::rivet_version_detailed() << '\n';
			return 0;
		}

		if (help_flag) {
			std::cout << clipp::make_man_page(cli, "rivet-texture-convert") << '\n';
			return 1;
		}

		std::cout << clipp::usage_lines(cli, "rivet-texture-convert") << '\n';
		return 1;
	}

	const auto normalized_input_files = find_glob(input_files, ".texture"); // todo: .zone has a texture too

	auto has_output_dir = !output_dir.empty();
	auto root_path = std::filesystem::path(output_dir);

	for (const auto &input_file : normalized_input_files) {
		auto tex_buffer = rivet_data_array::from_file(input_file);
		auto tex = texture(rivet::data::asset_bundle(tex_buffer));

		if (tex.needs_stream()) {
			auto stream_path = std::filesystem::path(input_file.string() + ".stream");
			auto stream = rivet_data_array::from_file(stream_path);
			tex.provide_stream(stream);
		}

		std::filesystem::path output_path;
		if (has_output_dir) {
			output_path = root_path / std::filesystem::path(input_file).filename();
		} else {
			output_path = std::filesystem::path(input_file);
		}

		auto local_dds = dds || !tex.is_convertable();
		auto local_tif = tif;
		if (!local_dds) {
			auto is_hdr = tex.is_hdr();
			if (force_dds_on_hdr) {
				local_dds = is_hdr;
			} else if (force_tif_on_hdr) {
				local_tif = is_hdr;
			}
		}

		const std::string ext = local_dds ? ".dds" : local_tif ? ".tiff" : ".png";
		output_path.replace_extension(ext);

		auto surface_count = tex.get_header().surface_count;

		const auto output_name = output_path.filename().string();

		for (auto surface_index = 0; surface_index < surface_count; ++surface_index) {
			if (surface_index > 0) {
				output_path = output_path.replace_filename(output_name).replace_extension(std::to_string(surface_index) + ext);
			}
			std::cout << "writing " << output_path.string() << '\n';
			if (local_tif) {
				tex.to_tiff(surface_index, output_path);
			} else {
				auto image_buffer = local_dds ? tex.to_dds() : tex.to_png(surface_index);

				std::ofstream output_file(output_path, std::ios::binary | std::ios::trunc);
				if (!output_file.is_open()) {
					std::cout << "failed to open " << output_path << '\n';
					continue;
				}

				output_file.write(reinterpret_cast<const char *>(image_buffer->data()), static_cast<std::streamsize>(image_buffer->byte_size()));
			}

			if (dds) {
				break;
			}
		}
	}

	return 0;
}

MAIN_WRAPPER(convert_texture)
