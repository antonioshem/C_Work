#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	auto x = 42;
	auto y = 7;

	if (x < y) {
		cout << "Condition is True\n";
	}
	else {
		cout << "Conditions is False\n";
	}
}


/* 

the turnary conditional operator takes three values, a condition, true value and false value. It is written as:
example:
auto s = s < y ? "yes": "no"; 
cout << format("answer is {}\n", s);
*/