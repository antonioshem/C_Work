#include <format>
#include <iostream>

using std::format;
using std::cout;

/*struct A { // struct befalls to public visibility
	int ia{};
	int ib{};
	int ic{};
};*/
//class befalls to private visibility - public keyword has to be used.

class A {
public:
	int ia{};
	int ib{};
	int ic{};
};

int main() {
	A o1{ 47, 73, 103 };
	cout << format("ia {}, ib {}, ic {} \n", o1.ia, o1.ib, o1.ic);
}