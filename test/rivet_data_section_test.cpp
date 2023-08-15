// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet.hpp>
#include <rivet/data/registry.hpp>

#include <iostream>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
#pragma ide diagnostic ignored "ConstantConditionsOC"
using namespace std;
using namespace rivet;
using namespace rivet::data;
using namespace rivet::data::section;

struct test_section : data_section {
	constexpr const static rivet_typeid_t type_id = 0x12345678;
	constexpr const static std::string type_name = "TestSection";

	explicit test_section(std::shared_ptr<rivet_data_array_t> &stream) : data_section(stream) { }
	RIVET_DELETE_COPY(test_section)

	int nya() { // NOLINT(*-convert-member-functions-to-static)
		return 1;
	}
};

using test_section_registry [[maybe_unused]] = register_data_section_handler<test_section>;


int main() {
	auto data_registry = registry::data_registry<data_section>();
	auto registry = data_registry.registry;
	if(registry.find(0x12345678) == registry.end()) {
		return 1;
	}

	if(registry[0x12345678].first != "TestSection") {
		return 1;
	}

	shared_ptr<rivet_data_array_t> empty;
	auto test = std::reinterpret_pointer_cast<test_section>(data_registry(0x12345678, empty));

	if(test->nya() == 1) {
		return 0;
	}

	return 1;
}

#pragma clang diagnostic pop
