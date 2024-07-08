#include <format>
#include <iostream>

using std::format;
using std::cout;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;

    cout << format("The first 25 prime numbers are: ");
    while (count < 25) {
        if (isPrime(num)) {
            std::cout << num << " ";
            count++;
        }
        num++;
    }
    std::cout << std::endl;

    return 0;
}
