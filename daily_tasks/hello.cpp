/*
Basic syntax and structure of C++ program. 
Use of cout and cin for input and output.
Task: Write a program that takes a name as input and prints "Hello, <name>!".
*/

#include <iostream>

using std::cout;
using std::cin;

int main() {
    std::string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << std::endl;
    return 0;
}