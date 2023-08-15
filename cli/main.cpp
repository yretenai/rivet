#include <rivet/rivet.hpp>
#include <rivet/data/registry.hpp>
#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>

#include <iostream>

using namespace std;

int main() {
	rivet::data::registry::dump_registries();
}
