#include <format>
#include <iostream>	
#include <string>

using std::format;
using std::cout;
using std::string;

template <typename T> //we could also use class instead of typename here	
T maxof(T a, T b) {
	return a > b ? a : b;
}

int main() {
	string x{ "bar"};
	string y{ "foo"};
	auto z = maxof<string>(x, y);
	cout << format("max is {}\n", z);
	return 0;
}