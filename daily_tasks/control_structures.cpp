/*
use if else to write a program that takes an integer input from the user and prints whether it is odd or even
*/

#include <iostream>

using std::cout;
using std::cin;

int main() {
	int a;
	cout << "Enter the number: ";
	cin >> a;
	if (a % 2 == 0) {
		cout << a << " is even";
	}
	else {
		(cout << a << " is odd");
	}
}