#include <vector>
#include <iostream>

using namespace std;

class Carta;
typedef vector<Carta> Mazo;

enum class Pinta : char {
    palo = 'p',
    oro = 'o',
    espada = 'e',
    copas = 'c'
};

ostream& operator<<(ostream& out, Pinta p) {
    return out << static_cast<char>(p);
}

class Carta {
public:
    int numero;
    Pinta pinta;
    
    Carta(int numero, Pinta pinta) : numero(numero), pinta(pinta) {
        cout << "Nueva carta: " << *this << endl;
    }

    friend ostream& operator<<(ostream& out, const Carta& carta) {
        return out << carta.numero << "-" << carta.pinta;
    }

    friend Mazo operator+(const Carta& cartaA, const Carta& cartaB) {
        Mazo res = {
            cartaA, cartaB
        };
        return res;
    }

    friend Mazo& operator+(Mazo& out, const Carta& carta) {
        out.push_back(carta);
        return out;
    }
};

int main() {
    Carta{2, Pinta::palo};
    Carta{1, Pinta::oro};
    
    Mazo mazo;
    Carta o3 {3, Pinta::oro};
    mazo = mazo + o3;

    Mazo mazo2 = {
        Carta{8, Pinta::palo},
        Carta{9, Pinta::oro}
    };
    
    Mazo mazo3 = Carta{12, Pinta::palo} + Carta{11, Pinta::oro};
}
