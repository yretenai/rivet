// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/data/registry.hpp>
#include <iostream>
#include <iomanip>

using namespace rivet::data::registry;
using namespace std;

void rivet::data::registry::dump_registries() {
	cout << "DAT1 Registry:" << endl;

	for (const auto& [key, value] : data_registry<data_file>().registry) {
		cout << setfill('0') << setw(8) << hex << key << ": " << value.first << endl;
	}

	cout << "DAT1 Section Registry:" << endl;

	for (const auto& [key, value] : data_registry<section::data_section>().registry) {
		cout << setfill('0') << setw(8) << hex << key << ": " << value.first << endl;
	}
}
