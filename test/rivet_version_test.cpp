// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet.hpp>

#include <iostream>

using namespace std;

int main() {
	cout << rivet::rivet_version() << " = " << rivet::local_version << endl;
	if(rivet::rivet_version() != rivet::local_version) {
		return 1;
	}

	return 0;
}
