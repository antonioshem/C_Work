#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	int array[] { 1, 2, 3, 4, 5 };
	int i{ 0 };
	//do ... while implementation
	/*do {
		cout << format("element {} is {} \n", i, array[i]);
		++i;
	} while (i < 5);*/
	while (i < 5) {
		//if (i == 2) break; //prints 1 and 2 rhen stops
		/*if (i == 2) {
			++i;
			continue;
			//prints 1,2,4, 5 -> skips element 2 that is 3
		}*/
		cout << format("element {} is {} \n", i, array[i]);
		++i;
	}
}