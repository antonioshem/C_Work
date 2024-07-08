/*
Program takes an integer between 1-7 from user and uses switch statements to print corresponding day of the week
*/

#include <iostream>

using std::cout;
using std::cin;

int main() {
	int day;
	cout << "Enter a number between 1-7: ";
	cin >> day;
	cout << "Day of the week is: ";
	switch (day)
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Invalid input. Please enter a number between 1-7.";
		break;
	}
	return 0;
}