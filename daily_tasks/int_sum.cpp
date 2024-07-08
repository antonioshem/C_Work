/*
A function int_sum that takes a two integers as arguments and returns the sum of the two integers.
*/


    #include <iostream>	
    using namespace std;

    int int_sum(int a, int b) {
					// Function to add two integers and return the sum
					return a + b;
    }	

    int main() {
					int a, b;
					cout << "Enter two integers: ";
					cin >> a >> b;
					cout << "The sum is: " << int_sum(a, b);
					return 0;
    }