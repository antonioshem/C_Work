/* A pointer is a variable that holds the address of another variable.
int* ip; is a pointer named ip and its type is a pointer to int, so memory is allocated to the pointer not int
ip = &x; is assigning address to a pointer
The ampersand is formally called the reference operator, here it is the address of the operator. it assigns the address of x to a ip
y  = *ip; this dereferencing the pointer, using asterik, we access the value pointed to by the pointer. This is same to x=y*/

#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	int x { 7 };
	//int y { 42 };
	int* ip = &x;
	int& y = x; // y is a reference to an int with value of x

	cout << format("The value of x is {}\n", x);
	cout << format("The value of y is {}\n", y);
	cout << format("The value of *ip is {}\n", *ip);
}
