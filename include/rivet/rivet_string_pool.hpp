// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once
#include <memory>
#include <string>
#include <vector>

#include <rivet/rivet_keywords.hpp>

namespace rivet {
	struct RIVET_SHARED rivet_string_pool {
		rivet_string_pool() = delete;

		static auto
		alloc_string(const std::string_view &str) noexcept -> std::shared_ptr<std::string>;

	private:
		static std::vector<std::shared_ptr<std::string>> string_pool;
	};
} // namespace rivet
