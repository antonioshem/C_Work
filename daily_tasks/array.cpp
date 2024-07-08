/*
Key Points
•	Size of Arrays: The size of the array must be known at compile time. For dynamic sizes, C++ offers containers like std::vector.
•	Array Indexing: Remember that array indexing starts at 0. Accessing an index out of bounds will lead to undefined behavior.
•	Passing Arrays to Functions: When you pass an array to a function, what's passed is actually a pointer to the first element of the array. The size of the array is not passed along, so it's often necessary to pass the size as a separate parameter.
Arrays are a fundamental part of C++ programming, providing a simple way to aggregate data. However, for more complex or dynamic collections of data, you might want to look into the Standard Template Library (STL) containers like std::vector or std::array (for fixed-size arrays).

*/
#include <iostream>

int main() {
    // Initializing an array with values
    int myArray[5] = { 1, 2, 3, 4, 5 };
    int sum = 0; // Variable to store the sum of the array elements

    // Modifying elements of the array
    myArray[0] = 10; // Change the first element to 10
    myArray[2] = 30; // Change the third element to 30

    // Printing the modified array
    std::cout << "Modified array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
        sum += myArray[i]; // Calculating the sum of the array elements
    }
    std::cout <<"Sum of the array elements: " << sum << std::endl;
    std::cout << std::endl;

    return 0;
}
