#include <iostream>
#include <vector>

using namespace std;

int main() {
    // concepts: type, object, value, variable

    bool b; // boolean, byte, true or false
    cout << "bool: " << sizeof(b) << endl;

    char c; // character, byte, ascii
    cout << "char: " << sizeof(c) << endl;

    int i; // integer, word, integer numbers
    cout << "int: " << sizeof(i) << endl;

    double d; // double-precision, 2 words, floating-point
    cout << "double: " << sizeof(d) << endl;

    // operators: x+y, +x, x-y, -x, x*y, x/y, x%y
    // logical: x==y, x!=y, x<y, x>y, x<=y, x>=y
    // specifics: x+=y, ++x, x++, x-=y, --x, x--, x*=y, x/=y, x%=y

    // automatic conversions
    d = 2.2;
    i = 7;
    cout << "multiplication: " << d*i << endl;
    i = d*i;
    cout << "conversion: " << i << endl;

    // initializers
    double d1 = 2.3;
    double d2 {2.3};
    vector<int> v {1,2,3};
    int i1 = 7.2; // i1 becomes 7
    int i2 {7.2}; // error or at least warning
    // do not leave uninitialized
    // introduce them when you need them, not before
    // constants must be initialized

    // type inference for generic programming
    auto d3 = 1.2 // a double
}

