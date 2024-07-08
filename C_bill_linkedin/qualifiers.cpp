#include <iostream>
#include <format>

using std::cout;
using std::format;

int func() {
	static int x{ 7 };
	return ++x;
}

int main() {
	const int i{ 42 };
	cout << format("The interger is {}\n", i);
	cout << format("The func returns {}\n", func());
	cout << format("The func returns {}\n", func());
	cout << format("The func returns {}\n", func());
	cout << format("The func returns {}\n", func());
	cout << format("The func returns {}\n", func());
}