#include <format>
#include <iostream>

using std::format;
using std::cout;

void func(int* a) {
	*a = 73; 
	cout << format("Value is {}\n", *a);
}

int main() {
	int a{ 47 };
	cout << "this is main()\n";
	func(&a);
	cout << format("Value is {}\n", a);
}