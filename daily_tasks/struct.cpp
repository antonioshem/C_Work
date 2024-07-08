/*
A simple C++ program to demonstrate the use of structures.
An example of a structure that represents a structure storing information about an airline passenger.
The structure should include the passenger's name, meal preference, and information about whether the passenger has a frequent flyer number.
Create an enumaration type for the meal preference, with the choices of regular, vegetarian, kosher, and low-fat.
*/

#include <iostream>

using namespace std;

// Enumeration type for the meal preference
enum MealType { REGULAR, VEGETARIAN, KOSHER, LOW_FAT };

// Structure representing an airline passenger
struct Passenger {
	string name;
	MealType meal_preference;
	bool has_frequent_flyer_number;
};

int main() {
	// Create an instance of the Passenger structure
	Passenger passenger1;

	// Initialize the passenger's information
	passenger1.name = "John Doe";
	passenger1.meal_preference = REGULAR;
	passenger1.has_frequent_flyer_number = true;

	// Display the passenger's information
	cout << "Passenger Name: " << passenger1.name << endl;
	cout << "Meal Preference: " << passenger1.meal_preference << endl;
	cout << "Has Frequent Flyer Number: " << passenger1.has_frequent_flyer_number << endl;

	return 0;
}