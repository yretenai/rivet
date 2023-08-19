// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <stdexcept>

namespace rivet {
	struct not_implemented_error : std::logic_error {
		not_implemented_error() : std::logic_error("not implemented, sorry") { }
	};

	struct unreachable_error : std::runtime_error {
		unreachable_error() : std::runtime_error("reached an unreachable point, goodbye") { }
	};

	struct index_out_of_range : std::out_of_range {
		index_out_of_range() : std::out_of_range("index is out of range") { }
	};

	struct invalid_tag_error : std::runtime_error {
		invalid_tag_error() : std::runtime_error("tag in data is not valid for this class") { }
	};
}
