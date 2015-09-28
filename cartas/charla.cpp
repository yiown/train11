#include <iostream>
#include <vector>

using namespace std;

enum class Pinta : char {
    copa = 'c',
    oro = 'o',
    basto = 'b',
    espada = 'e'
};

ostream& operator<<(ostream &out, const Pinta p) {
    return out << static_cast<char>(p);
}

class Carta;
typedef vector<Carta> Mano;

class Carta {
public:
    int numero;
    Pinta pinta;
    
    Carta(int n, Pinta p) : numero(n), pinta(p) {
        cout << "Constructor " << n << "-" << p << endl;
    }
    
    friend Mano operator+(const Carta a, const Carta b) {
        return Mano{a, b};
    }
    friend Mano operator+(Mano m, const Carta c) {
        m.push_back(c);
        return m;
    }
};

ostream& operator<<(ostream &out, const Carta &c) {
    return out << c.numero << "-" << c.pinta;
}

int main() {
    Mano m =  
        Carta{1, Pinta::espada} + 
        Carta{7, Pinta::espada} +
        Carta{6, Pinta::espada} ;

    for (auto i : m)
        cout << i << " ";
    
    return 0;
}