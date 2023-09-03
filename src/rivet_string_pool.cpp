// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <algorithm>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include <rivet/rivet_string_pool.hpp>

namespace rivet {
	std::vector<std::shared_ptr<std::string>> rivet_string_pool::string_pool = {};

	auto
	rivet_string_pool::alloc_string(const std::string_view &str) noexcept -> std::shared_ptr<std::string> {
		auto existing = std::find_if(string_pool.begin(), string_pool.end(), [&str](const auto &ptr) { return *ptr == str; });

		if (existing != string_pool.end()) {
			return *existing;
		}

		auto ptr = std::make_shared<std::string>(str);
		string_pool.emplace_back(ptr);
		return ptr;
	}
} // namespace rivet
