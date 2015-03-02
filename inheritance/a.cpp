#include <iostream>
#include <memory>

using namespace std;

class Base {
public:
    virtual void printName() const { cout << "Base" << endl; }
};

class Derived : public Base {
    virtual void printName() const { cout << "Derived" << endl; }
};

void print(const Base &obj) {
    obj.printName();
}

int main(void) {
    shared_ptr<Base> obj ( new Derived );
    obj->printName();

    Derived obj2;
    print(obj2);

    return 0;
}

