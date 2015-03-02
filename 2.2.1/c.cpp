#include <iostream>
using namespace std;

double square(double x) {
    return x*x;
}

void printSquare(double x) {
    cout << "square of " << x << " is " << square(x) << endl;
}

int main() {
    printSquare(1.234);
}

