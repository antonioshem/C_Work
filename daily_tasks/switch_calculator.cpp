/*
Build a calculator using switch statement
*/

#include <iostream>
using namespace std;

int main() {
	char oper;
	float num1, num2;
	cout << "Enter operator ( +, -, *, /): ";
	cin >> oper;
	cout << "Enter two numbers: " <<endl;
	cin >> num1 >> num2;

	switch (oper)
	{
	case '+':
		cout << num1 << " + " << num2 << "=" << num1 + num2;
		break;
	case '-':
		cout << num1 << " - " << num2 << "=" << num1 - num2;
		break;
	case '*':
		cout << num1 << " * " << num2 << "=" << num1 * num2;
		break;
	case '/':
		cout << num1 << " / " << num2 << "=" << num1 / num2;
		break;
	default:
		cout << "Error! Operator is invalid";
		break;
	}
}