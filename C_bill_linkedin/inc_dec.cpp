#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	auto x = 5;
	cout << format("x is {}\n", ++x);  // 6 // --x decrement
	cout << format("x is {}\n", ++x); // 7
	cout << format("x is {}\n", ++x); // 8
	cout << format("x is {}\n", ++x); // 9
	cout << format("x is {}\n", ++x); // 10

	auto y = 5;
	cout << format("y is {}\n", y++); //starts from 5
	cout << format("y is {}\n", y++); //6
	cout << format("y is {}\n", y++);//7
	cout << format("y is {}\n", y++);//8
	cout << format("y is {}\n", y++);//9
}