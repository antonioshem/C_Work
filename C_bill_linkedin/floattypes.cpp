#include <format>
#include <iostream>

using std::format;
using std::cout;

const size_t byte{ 8 };

int main() {
	float f{5e3};
	double df{};
	long double ldf{};

	cout << format("Size of float f is {} bits\n", sizeof(f) * byte);
	cout << format("Size of float df is {} bits\n", sizeof(df) * byte);
	cout << format("Size of float ldf is {} bits\n", sizeof(ldf) * byte);
	cout << format("Value of f is {} bits\n", f);
}