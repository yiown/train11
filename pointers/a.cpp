#include <iostream>
#include <memory>

using namespace std;

class Gadget {
public:
    Gadget(int n) {
        cout << "Constructor " << n << endl;
    }
};

int main(void) {
    int n = 3;
    shared_ptr<Gadget> p{new Gadget{n}};
    return 0;
}

