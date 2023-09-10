// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <iostream>
#include <string_view>

#include <clipp.h>

#include <rivet/rivet.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/hash/type_id.hpp>

#include "helper.hpp"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "ConstantFunctionResult"
using namespace rivet;

auto
debug_hash(int argc, char **argv) -> int {
	for (auto argi = 1; argi < argc; ++argi) {
		const auto arg = std::string_view(argv[argi]); // NOLINT(*-pro-bounds-pointer-arithmetic)

		auto type_id = rivet::hash::hash_type_id(arg);
		auto asset_id = rivet::hash::hash_asset_id(arg);
		auto checksum = rivet::hash::hash_checksum(arg);

		std::cout << arg << ": " << std::hex << std::setfill('0') << std::setw(8) << type_id << ' ' << std::setw(16) << asset_id << ' ' << std::setw(16) << checksum << '\n';
	}

	return 0;
}

MAIN_WRAPPER(debug_hash)

#pragma clang diagnostic pop