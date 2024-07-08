#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	int array[] = { 1, 2, 3, 4, 5 };
	//const char string[]{ "string" };

	//for (int i{ 0 }; i < 5; ++i) {
	//for (int i{0}; string[i]; ++i){
	for (const auto& e : array) {
		cout << format("element is {}\n", e);
		//cout << format("Element {} is {}\n", i, array[i]);
		//cout << format("Element {} is {}\n", i, string[i]);

	}
}

/* Using pointers

for (auto* p = string; *p; ++p){
    cout << format("char is {}\n"), *p};
	


	*/