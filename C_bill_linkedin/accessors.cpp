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
	int ia{};
	int ib{};
	int ic{};

public:
	A (int a, int b, int c) : ia(a), ib(b), ic(c) {}
	void seta(int a) { ia = a; }
	void setb(int b) { ib = b; }
	void setc(int c) { ic = c; }

	int geta() const { return ia; }
	int getb() const { return ib; }
	int getc() const { return ic; }
};

int main() {
	A o1{ 47, 73, 103 };
	cout << format("ia {}, ib {}, ic {} \n", o1.geta(), o1.getb(), o1.getc());
}