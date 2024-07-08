/*
write a program that declares a variable of each of the following types: int, long, float, double, char, string and bool.
Perform a basic arithmetic operation on each of the integer types and output the result.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 5;
	long b = 10;
	float c = 3.5;
	double d = 7.5;
	char e = 'A';
	string f = "Hello";
	bool g = true;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << c + d << endl;
	cout << c - d << endl;
	cout << c * d << endl;
	cout << c / d << endl;
	cout << e << endl;
	cout << f << endl;
	cout << g << endl;

	return 0;
}