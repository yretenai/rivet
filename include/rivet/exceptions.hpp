// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <stdexcept>

#include <rivet/rivet_keywords.hpp>

namespace rivet {
	struct not_implemented_error : std::logic_error {
		not_implemented_error(): std::logic_error("not implemented, sorry") { RIVET_DEBUG_BREAK; }
	};

	struct unreachable_error : std::runtime_error {
		unreachable_error(): std::runtime_error("reached an unreachable point, goodbye") { RIVET_DEBUG_BREAK; }
	};

	struct invalid_operation : std::runtime_error {
		invalid_operation(): std::runtime_error("invalid operation attempted") { RIVET_DEBUG_BREAK; }
	};

	struct index_out_of_range : std::out_of_range {
		index_out_of_range(): std::out_of_range("index is out of range") { RIVET_DEBUG_BREAK; }
	};

	struct invalid_tag_error : std::runtime_error {
		invalid_tag_error(): std::runtime_error("tag in data is not valid for this class") { RIVET_DEBUG_BREAK; }
	};

	struct version_not_supported : std::runtime_error {
		version_not_supported(): std::runtime_error("version not supported") { RIVET_DEBUG_BREAK; }
	};

	struct decompression_error : std::runtime_error {
		decompression_error(): std::runtime_error("decompression failed") { RIVET_DEBUG_BREAK; }
	};

	struct mismatched_data_error : std::runtime_error {
		mismatched_data_error(): std::runtime_error("tag in data is not valid for this class") { RIVET_DEBUG_BREAK; }

		explicit mismatched_data_error(const char *string): std::runtime_error(string) { RIVET_DEBUG_BREAK; }

		explicit mismatched_data_error(const std::string &string): std::runtime_error(string) { RIVET_DEBUG_BREAK; }
	};
} // namespace rivet
