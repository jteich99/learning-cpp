#include <iostream>
#include <cmath>

// Initialization
// 3 valid ways of initializating a variable
double d1 = 2.3; // from original C way of defining variables
double d2 {2.3}; // new way of defining variables
double d3 = {2.3};

// example of better use of initialization
int i1 = 7.8; // gives i1 = 7
// int i2 {7.8}; // gives error: floating-point to interger conversion

// Constants
const int i2 = 2; // const is data that can be passed to functions without fear of it being modified
constexpr int i3 = 17; // constexpr is a constant that will be evaluated at compiled time
// const double sqi3 = std::sqrt( i3 );
constexpr double sqi3 = std::sqrt( i3 ); // for sqi3 to be an argument of function square, it needs to be of type constexpr, so that it is evaluated at compile time

// a function can also be defined so that its output is constant, but has to be defined with constexpr
constexpr double square( double x ) {
    return x * x;
}
constexpr double new_i3 = square( sqi3 ); // we get i3 back from its square root, and as a constant value that cant be modified

// Pointers
// this is the part that I find most difficult coming from python
int* p1 = &i1; // declare pointer of int (int*) pointing to i1 (&i1)
int& i1b = *p1; // declare new int that points to same place to which p1 points (i1)

// Arrays
int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // array of ints with 10 elements
void print_v1()
{
    for ( auto i=0; i!=10; i++ )
        std::cout << v1[i] << "\n";

    // another way:
    for ( auto x : v1 ) // for each x in v1
        std::cout << x << "\n";
}

int main() {
    // testing ways of defining a variable
    std::cout << "d1 = " << d1 << "\n";
    std::cout << "d2 = " << d2 << "\n";
    std::cout << "d3 = " << d3 << "\n\n";

    // testing that int i1 = 7.8; gives out i1 = 7
    std::cout << "i1 = " << i1 << "\n\n";

    // testing constant types
    // i2 += 1; // this would give error "assignment of read-only variable i2"
    std::cout << "i2 = " << i2 << "\n";
    std::cout << "i3 = " << i3 << "\n";
    std::cout << "sqi3 = " << sqi3 << "\n";
    std:: cout << "square(sqi3) = " << new_i3 << "\n\n";

    // testing pointers
    std::cout << "p1 = " << p1 << "\n";
    std::cout << "i1b = " << i1b << "\n";
    i1 += 1;
    std::cout << "i1 += 1 --> i1 = " << i1 << "\n";
    std::cout << "i1b = " << i1b << "\n";
    std::cout << "i1b has the same changes as i1 since it points to the exact same place in memoory\n\n";

    // testing arrays
    std::cout << "printing v1\n";
    print_v1();
}
