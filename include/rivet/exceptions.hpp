// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <stdexcept>
#include <string>

namespace rivet {
	struct not_implemented_error final : std::logic_error {
		not_implemented_error()
			: std::logic_error("not implemented, sorry") {}

		explicit
		not_implemented_error(const char *string)
			: std::logic_error(string) {}

		explicit
		not_implemented_error(const std::string &string)
			: std::logic_error(string) {}
	};

	struct unreachable_error final : std::runtime_error {
		unreachable_error()
			: std::runtime_error("reached an unreachable point, goodbye") {}

		explicit
		unreachable_error(const char *string)
			: std::runtime_error(string) {}

		explicit
		unreachable_error(const std::string &string)
			: std::runtime_error(string) {}
	};

	struct invalid_operation final : std::runtime_error {
		invalid_operation()
			: std::runtime_error("invalid operation attempted") {}

		explicit
		invalid_operation(const char *string)
			: std::runtime_error(string) {}

		explicit
		invalid_operation(const std::string &string)
			: std::runtime_error(string) {}
	};

	struct index_out_of_range final : std::out_of_range {
		index_out_of_range()
			: std::out_of_range("index is out of range") {}

		explicit
		index_out_of_range(const char *string)
			: std::out_of_range(string) {}

		explicit
		index_out_of_range(const std::string &string)
			: std::out_of_range(string) {}
	};

	struct invalid_tag_error final : std::runtime_error {
		invalid_tag_error()
			: std::runtime_error("tag in data is not valid for this class") {}

		explicit
		invalid_tag_error(const char *string)
			: std::runtime_error(string) {}

		explicit
		invalid_tag_error(const std::string &string)
			: std::runtime_error(string) {}
	};

	struct version_not_supported final : std::runtime_error {
		version_not_supported()
			: std::runtime_error("version not supported") {}

		explicit
		version_not_supported(const char *string)
			: std::runtime_error(string) {}

		explicit
		version_not_supported(const std::string &string)
			: std::runtime_error(string) {}
	};

	struct decompression_error final : std::runtime_error {
		decompression_error()
			: std::runtime_error("decompression failed") {}

		explicit
		decompression_error(const char *string)
			: std::runtime_error(string) {}

		explicit
		decompression_error(const std::string &string)
			: std::runtime_error(string) {}
	};

	struct mismatched_data_error final : std::runtime_error {
		mismatched_data_error()
			: std::runtime_error("tag in data is not valid for this class") {}

		explicit
		mismatched_data_error(const char *string)
			: std::runtime_error(string) {}

		explicit
		mismatched_data_error(const std::string &string)
			: std::runtime_error(string) {}
	};
} // namespace rivet
