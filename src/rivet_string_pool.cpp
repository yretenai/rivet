// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <memory>
#include <string_view>
#include <vector>

#include <rivet/rivet_string_pool.hpp>

namespace rivet {
	std::vector<std::shared_ptr<std::string>> rivet_string_pool::string_pool = {};

	auto
	rivet_string_pool::alloc_string(const std::string_view &str) noexcept -> std::shared_ptr<std::string> {
		if (const auto existing = std::ranges::find_if(string_pool, [&str](const auto &ptr) { return *ptr == str; }); existing != string_pool.end()) {
			return *existing;
		}

		auto ptr = std::make_shared<std::string>(str);
		string_pool.emplace_back(ptr);
		return ptr;
	}
} // namespace rivet
