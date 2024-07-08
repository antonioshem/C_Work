#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;

void func(const std::string& s) {
	cout << format("Value is {}\n", s);
}

int main() {
	std::string s{ "this is a string" };
	func(s);
	cout << format("Value is {}\n", s);
}