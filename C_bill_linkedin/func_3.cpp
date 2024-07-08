#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;

const std::string& func(int a) {
	static std::string s = format("Value is {}\n", a * 2);
	cout << "This is func /n";
	return s;
}

int main() {
	cout << "this is main() \n";
	const auto& x = func(42);
	cout << format("{}\n", x);
}