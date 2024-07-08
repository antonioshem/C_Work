//use non_recursive function to calculate the factorial of a number
//implement in template form

#include <iostream>
#include <format>

using std::format;
using std::cout;


template <typename T>
class Factorial
{
	public:
T factorial(T n)
{
	T result = 1;
	for (T i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
};

int main()
{
	Factorial<int> fact;
	cout << format("Factorial of 5 is: {}", fact.factorial(5)) << std::endl;
	return 0;
}
