#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {

	for (auto candidate = 1; candidate <= 100; ++candidate) {
			if (candidate % 2 != 0) {
				cout << format("{}\n", candidate);
		}
	}
	cout << '\n';
}