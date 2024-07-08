/*
Write a function 'bool isprime(int n)' that checks if a number is prime or not. The function should return true if the number is prime, otherwise false.
*/

#include <iostream>
using namespace std;	

void isprime(int n) {
	bool flag = true;
	if (n <= 1) {
		flag = false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Is " << n << " prime? ";
	isprime(n);
	return 0;
}	