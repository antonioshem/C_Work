/*
learn the use of pointers in c++ programming language from basic to advanced level

•	Pointer Basics: The initial part of the code demonstrates basic pointer usage, including declaring a pointer, using it to access and modify a variable, and pointer to pointer concepts.
•	Correct Declaration: It corrects the declaration of multiple variables where only one is a pointer.
•	Advanced Usage: The latter part introduces more advanced concepts:
•	Arrays and Pointers: Demonstrates how pointers can be used to access and iterate over array elements.
•	Dynamic Memory: Shows how to dynamically allocate memory for an integer, assign a value to it, and then properly free the memory.
•	Pointer to Function: Illustrates how to declare a pointer to a function, assign a lambda function to it, and use it to invoke the function.
*   Pointer to member function: Illustrates how to declare a pointer to a member function of a class and use it to invoke the member function.
*/

#include <iostream>

using namespace std;

int main() {
    char ch = 'A'; // character variable
    char* p = &ch; // pointer variable p stores the address of ch
    char **q = &p; // pointer to pointer variable q stores the address of p
    char ***r = &q; // pointer to pointer to pointer variable r stores the address of q
    cout << *p << endl; // prints the value stored at the address pointed by p - outputs the character 'A'.
    
    ch = 'B'; // change the value of ch
    cout << *p << endl; // prints the value stored at the address pointed by p - outputs the character 'B'.
    *p = 'C'; // change the value stored at the address pointed by p
    cout << ch << endl; // prints the value of ch - outputs the character 'C'.    

    // Demonstrating pointer to pointer (**q)
    **q = 'D'; // change the value stored at the address pointed by p through q
    cout << ch << endl; // prints the value of ch - outputs the character 'D'.

    // Demonstrating pointer to pointer to pointer (***r)
    ***r = 'E'; // change the value stored at the address pointed by p through r
    cout << ch << endl; // prints the value of ch - outputs the character 'E'.

    // Correct declaration for multiple pointers and variables
    int* i; // i is a pointer to an int
    int j, k; // j and k are integer variables
    cout << sizeof(i) << " " << sizeof(j) << " " << sizeof(k) << endl; // prints the size of i, j, and k - outputs may vary based on architecture, commonly 8 4 4 on a 64-bit system.

    // Advanced pointer usage: arrays and pointers
    int arr[] = {10, 20, 30, 40, 50}; // integer array
    int* arrPtr = arr; // Pointer to the first element of the array
    cout << "Array accessed via pointer: ";
    for(int n = 0; n < 5; ++n) {
        cout << *(arrPtr + n) << " "; // Access each element via pointer arithmetic
    }
    cout << endl;

    // Pointers and dynamic memory
    int* dynamicInt = new int; // dynamically allocated integer
    *dynamicInt = 60; // assigning value to dynamically allocated memory
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;
    delete dynamicInt; // freeing dynamically allocated memory

    // Pointer to function
    auto sum = [](int a, int b) -> int { return a + b; }; // lambda function for sum
    int (*funcPtr)(int, int) = sum; // pointer to function
    cout << "Sum of 3 and 4 using pointer to function: " << funcPtr(3, 4) << endl;
}