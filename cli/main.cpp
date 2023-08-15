#include <rivet/rivet_array.hpp>

#include <memory>

using namespace std;

int main() {
	auto array = std::make_shared<rivet::rivet_array<uint8_t, RIVET_ALIGNMENT>>(nullptr, 0);
}
