#include <format>
#include <iostream>

using std::format;
using std::cout;

int func(int i, const char* s) {
	cout << "This is func() \n";
	cout << format(" i is {} {}\n", i, s);
	return i * 2;
}

int main()
{
	cout << "This is main()\n";
	auto x = func(42, "forty-two");
	cout << format("x is {}\n", x);
}