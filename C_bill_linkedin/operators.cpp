#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	auto x = 5;
	auto y = 47;
	//compound operator
	x += y; //addition
	x -= y; //substraction
	x *= y; //multiplication
	x /= y; //division
	y %= x; //modulo
	cout << format("x is {}\n", x);
	cout << format("y is {}\n", y);

	//x = y % x;
	//if (x == y) cout << "true\n"; // x < y, x > y, x <=y, x!=y, x >= y, 
	//else cout << "false\n";

	//x = y;
	/*x = y + x; //addition
	cout << format("x is {}\n", x);
	x = y - x; //subtraction
	cout << format("x is {}\n", x);
	x = y * x; // multiplication
	cout << format("x is {}\n", x);
	x = y / x; // division
	cout << format("x is {}\n", x);
	x = y % x; //remainder
	cout << format("x is {}\n", x);*/

	//logical operators
	bool a = 4 ; // any non zero value is considered true
	auto b = false;
	cout << format("a is {}\n", a);
	cout << format("b is {}\n", b);
	cout << format("Size of a is {}\n", sizeof(a)*8); // get the size of bolean

	//boolean operators and, or and not -> &&, || !
	if (a && b) cout << "true\n";
	else cout << "false\n";
}