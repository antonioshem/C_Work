/*
A C++ program to demonstrate dynamic memory allocation
Use the airline reservation system as an example
Add a new passenger to the system dynamically using dynamic memory allocation and pointers
*/

#include <iostream>
#include <string>

using namespace std;

class Passenger {
public:
    string name;
    int age;
};

int main() {
    Passenger *passenger1 = new Passenger(); // Dynamically allocate memory for the first passenger
    passenger1->name = "John Doe";
    passenger1->age = 30;

    Passenger *passenger2 = new Passenger(); // Dynamically allocate memory for a second passenger
    passenger2->name = "Jane Doe"; // Initialize the second passenger
    passenger2->age = 28;

    cout << "Passenger 1 name: " << passenger1->name << endl;
    cout << "Passenger 1 age: " << passenger1->age << endl;

    cout << "Passenger 2 name: " << passenger2->name << endl; // Output the second passenger's details
    cout << "Passenger 2 age: " << passenger2->age << endl;

    delete passenger1; // Free the memory allocated for the first passenger
    delete passenger2; // Free the memory allocated for the second passenger

    return 0;
}
