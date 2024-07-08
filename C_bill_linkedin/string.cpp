// string.cpp by Bill Weinman [bw.org]
// updated 2022-06-21
//string is an stl container that holds a sequence of characters and is a part of the standard library. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file. It is a class that is used to create a string object. It is a sequence of characters that is used to represent and manipulate text-based information. It is a part of the C++ standard library and is defined in the string header file.

#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;
using std::string;

int main() {
    string s1{ "This is a string" }; 

    // size & length
    cout << format("length is same as size: {}\n", s1.length());
    cout << format("size is same as length: {}\n", s1.size());

    // + for concatenation
    cout << "concatenated strings: ";
    string s2 = s1 + ":" + "this is also a string"; 
    cout << s2;
    cout << '\n';

    // compare using equals sign
    cout << format("is s1 == s2? {}\n", s1 == s2 ? "yes" : "no");
    cout << "copy-assign s2 = s1\n";
    s2 = s1;
    cout << format("is s1 == s2? {}\n", s1 == s2 ? "yes" : "no");

    string otherstr{ "other string" }; // for comparison
    cout << format("is s1 > otherstr? {}\n", s1 > otherstr ? "yes" : "no");
    cout << format("is s1 < otherstr? {}\n", s1 < otherstr ? "yes" : "no");
    cout << format("is otherstr > s1? {}\n", otherstr > s1 ? "yes" : "no");
    cout << format("is otherstr < s1? {}\n", otherstr < s1 ? "yes" : "no");
    cout << '\n';

    // iteration
    cout << "each character: ";
    for (const auto& c : s1) {
        cout << format("{} ", c);
    }
    cout << '\n';

    // insert & erase with an iterator
    s1.insert(s1.begin() + 5, 'X');
    cout << format("s1 after insert: {}\n", s1);

    s1.erase(s1.begin() + 5);
    cout << format("s1 after erase: {}\n", s1);
    cout << '\n';

    // replace
    s1.replace(5, 2, "ain't");
    cout << format("s1 after replace: {}\n", s1);

    // substr
    cout << format("substr: {}\n", s1.substr(5, 5));

    // find
    size_t pos = s1.find("s");
    cout << format("find first \"s\" in s1 (pos): {}\n", pos);

    // rfind
    pos = s1.rfind("s");
    cout << format("find last \"s\" in s1 (pos): {}\n", pos);
}
