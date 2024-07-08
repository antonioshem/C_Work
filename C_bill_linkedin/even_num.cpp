#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {

	for (auto i = 1; i <= 100; ++i) {
		if (i % 2 == 0) {
			cout << i << "";
		}
		cout << format("\n");
	}
}