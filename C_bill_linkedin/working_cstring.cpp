#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	const char s[] { "String" };
	for (const auto* p = s; *p; ++p) {
		//(const auto& c : s) {
		//cout << format("{}\n", c);
		cout << format("{}\n", *p);
	}
}