// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/registry.hpp>
#include <rivet/data/data_file.hpp>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnreachableCode"
#pragma ide diagnostic ignored "ConstantConditionsOC"
using namespace std;
using namespace rivet;
using namespace rivet::data;

struct test_data : data_file {
	constexpr const static rivet_typeid_t type_id = 0x12345678;
	constexpr const static char* type_name = "TestType";

	explicit test_data(std::istream &stream) : data_file(stream) { }
	explicit test_data(std::shared_ptr<rivet_data_array_t> &stream) : data_file(stream) { }
	RIVET_DELETE_COPY(test_data)

	int nya() { // NOLINT(*-convert-member-functions-to-static)
		return 1;
	}
};

using test_data_registry [[maybe_unused]] = register_data_handler<test_data>;


int main() {
	auto data_registry = registry::data_registry<data_file>();
	auto registry = data_registry.registry;
	if(registry.find(0x12345678) == registry.end()) {
		return 1;
	}

	if(registry[0x12345678].first != "TestType") {
		return 1;
	}

	shared_ptr<rivet_data_array_t> empty;
	auto test = std::reinterpret_pointer_cast<test_data>(data_registry(0x12345678, empty));

	if(test->nya() == 1) {
		return 0;
	}

	return 1;
}

#pragma clang diagnostic pop
