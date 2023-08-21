#include <fstream>
#include <filesystem>
#include <iostream>

#include <rivet/data/toc.hpp>
#include <rivet/data/dag.hpp>

int main(int argv, char** argc) {
	if (argv < 2) {
		std::cout << "usage: rivet-cli path/to/toc path/to/dag" << std::endl;
		return 1;
	}

	auto toc = std::make_shared<rivet::data::archive_toc>(rivet::rivet_data_array::from_file(argc[1]));
	auto dag = std::make_shared<rivet::data::dependency_dag>(rivet::rivet_data_array::from_file(argc[2]), toc);
	return 0;
}
