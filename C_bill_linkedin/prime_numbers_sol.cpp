#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
	bool prime_flag(false);

	//outer loop for prime numbers 2 - 99
	for (auto candidate = 2; candidate < 100; ++candidate) {

		// test candidate for factors
		prime_flag = true;
		for (auto factor = 2; factor < candidate; ++factor) {
			if (candidate % factor == 0) {
				prime_flag = false;
				break;
			}
		}
		if (prime_flag) cout << format("{} \n", candidate);
	}
	cout << '\n';
}