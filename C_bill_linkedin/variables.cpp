//variables are strongly typed. the token represnts its value and type

#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	int i {}; // defines the name and type of variables, could also be done as i = 47 

	cout << format("i is {}\n", i);

	i = 47; // could be done as i {47}
	cout << format(" i is {}\n", i );
}