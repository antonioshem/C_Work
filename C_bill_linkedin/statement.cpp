// C++ statement is a unit of code.
//

#include <format>
#include <iostream>

using std::cout;
using std::format;

int main() {
	int x;
	x = 42 * 10;

	auto str = format("x is {}\n", x);
	//line 14 is a statement that call library function format and assigns its return value to the variable STR
	//expression is everything that returns a value
	cout << str;
}