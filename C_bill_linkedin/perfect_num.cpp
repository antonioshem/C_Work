#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	
	bool perfect_flag(false); //initializes the flag to track if a number is perfect
	for (auto i = 1; i <= 1000; ++i) //iterates through numbers from 1 to 100
	{
		
		auto sum_of_div = 0; // initializes the sum of divisors for each number
		for (auto x = 1; x < i; ++x) {  //iterates through potential divisors of i
			if (i % x == 0) { //checks if x is a divisor of i
				sum_of_div += x; //add the divisor to the sum 
			}
		}

		if (sum_of_div == i && i != 0) { //checks if the sum of divisor equals the number
			perfect_flag = true;
			cout << format("{} is a perfect number.\n", i);
		}
		else {
			perfect_flag = false;
		}
	}
}