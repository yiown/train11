#include<iostream>

using namespace std;

class C {
public:
    int i;
    C() {
        i = 0;
        cout << "Constructor " << i << endl;
    }
    C(int i) : i(i) {
        cout << "Constructor " << i << endl;
    }
    ~C(){
        cout << "Destructor " << i << endl;
    }
};

int main() {
    cout << "int=" << sizeof(int) << endl;
    
    //cout << "RAII" << endl;
    //C c(1);
    
    //cout << "Malloc" << endl;
    //C *cp = new C(2);
    
    cout << "Array malloc" << endl;
    C *cap = new C[3]{3, 4, 5};
}
