/*
Write a program that calculates the factorial of a number using a while loop.
*/

#include <iostream>
using namespace std;	

int main() {
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;

	int factorial = 1;
	while (n > 0) {
		factorial *= n;
		n--;
	}

	cout << "Factorial: " << factorial << endl;
	return 0;
}