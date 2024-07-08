/*
C++ Reference Variables are aliases to already existing variables. Once a reference is initialized with a variable, 
either the variable name or the reference name can be used to refer to the variable.
AN example of reference variable is as follows: 
*/
#include <iostream>

using namespace std;

int main() {
	int i = 5;
	int &j = i; // j is a reference to i
	j = 10; // This will change the value of i to 10
	cout << "Value of i: " << i << endl;
	cout << "Value of j: " << j << endl;
	return 0;
}