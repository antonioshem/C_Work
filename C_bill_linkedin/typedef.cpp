#include <format>
#include <iostream>
#include <cstdint> // defines the types uints. 

using std::format;
using std::cout;

//typedef uint32_t points_t;
//typedef uint64_t rank_t;
//we can replace typedef as below
using points_t = uint32_t;
using rank_t = uint64_t;

struct score{
    points_t p{};
    rank_t r{};
};

int main() {
    score s{ 5,1 };
    cout << format("score s had {} points and rank of {}\n", s.p, s.r);
}