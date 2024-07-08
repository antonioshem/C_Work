#include <format>
#include <iostream>

using std::format;
using std::cout;

class C1
{
	int c1val{};
public:
	void setvalue (int value);
	int getvalue();
};

void C1::setvalue(int value)
{
	c1val = value;
}

int C1::getvalue()
{
	return c1val;
}

int main() {
	C1 o1;
	o1.setvalue(47);
	cout << format("Value is {}\n", o1.getvalue());
}