#include <format>
#include <iostream>

using std::format;
using std::cout;

struct S {
	int i{};
	double d{};
	const char* s{};

};

int main() {
	S s1{ 3, 47.9, "string ome" };
	auto* sp = &s1; //& is for addressing memory, * is a for pointer
	sp->d = 73.0; //pointer member D-reference operator. It access a memebr through a pointer.
	cout << format("s1: {}, {}, {}\n", sp->i, sp->d, sp->s);
}