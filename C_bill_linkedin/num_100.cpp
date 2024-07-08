#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	for (auto x = 1; x <= 100; ++x) {
		cout << format(" {} ",x);
	}
}