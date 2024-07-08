#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	int array[]{ 1, 2, 3, 4, 5 };
	for (const int& i : array) {
		cout << format("{}", i);
	}
	cout << '\n';

	//elements are indexed begining at [0]
	array[2] = 42; //changes the value of indexed position 2 to 42
	auto x = array[2];
	cout << format("x is {}\n", x);
}