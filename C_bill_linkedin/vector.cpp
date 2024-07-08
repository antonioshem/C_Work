// vector.cpp by Bill Weinman [bw.org]
// updated 2022-06-04

#include <format>
#include <iostream>
#include <string>
#include <vector> // defines the vector container

using std::format;
using std::cout;
using std::vector;

int main() {
    cout << "vector from initializer list:\n";
    vector<int> vi1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // declares/defines the vector object, this is a container that contains objects of type int

    cout << format("size: {}\n", vi1.size());
    cout << format("front: {}\n", vi1.front());
    cout << format("back: {}\n", vi1.back());
    cout << '\n';

    // iterator - vecotr types provides iterators
    cout << "iterator:\n";
    auto itbegin = vi1.begin();
    auto itend = vi1.end();
    for (auto it = itbegin; it < itend; ++it) { // it++ is the same as ++it. the loop iterates through the vector
        cout << format("{} ", *it);
    }
    cout << '\n';

    cout << format("element 5: {}\n", vi1[5]); //vector is a random access container, so you can use the [] operator to access elements or use the at() method
    cout << format("element 5: {}\n", vi1.at(5)); //does range checking

    cout << "range-based for loop:\n"; // range-based for loop
    for (const auto& i : vi1) {
        cout << format("{} ", i);
    }
    cout << "\n\n";

    cout << "insert 42 at begin + 5:\n"; //insert 42 at the 5th position using the insert method
    vi1.insert(vi1.begin() + 5, 42); //inserts 42 at the 5th position
    cout << format("size: {}\n", vi1.size()); // size of the vector will be 11, an increase of 1
    cout << format("element 5: {}\n", vi1.at(5)); // element 5 will be 42

    cout << "erase at begin + 5:\n"; //erase the 5th element using the erase method
    vi1.erase(vi1.begin() + 5); //erase the 5th element
    cout << format("size: {}\n", vi1.size());
    cout << format("element 5: {}\n", vi1.at(5));

    cout << "push_back 47:\n"; //push_back method adds an element to the end of the vector
    vi1.push_back(47);
    cout << format("size: {}\n", vi1.size());
    cout << format("vi1.back(): {}\n", vi1.back());
    cout << '\n';

    // from C-array
    const size_t size{ 10 }; //initialize a vector from a C-array. The C-array is a C-style array of integers
    int ia[size]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // C-style array of integers
    cout << "vector from C-array:\n"; // initialize a vector from a C-array
    vector<int> vi2(ia, ia + size); //initialize a vector from a C-array
    for (const auto& i : vi2) {
        cout << format("{} ", i);
    }
    cout << "\n\n";

    // vector of strings
    cout << "vector of strings:" << std::endl; //initialize a vector of strings
    vector<std::string> vs{ "one", "two", "three", "four", "five" }; //vector of standard strings
    for (const auto& v : vs) {
        cout << format("{}\n", v);
    }
}
