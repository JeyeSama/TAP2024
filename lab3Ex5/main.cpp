#include "complex.h"
#include <iostream>

using namespace std;

int main(void) {
    Complex a(3, 13);
    Complex b(7, 17);
    Complex c;
    c = c.adunare(a, b);
    cout << "Suma numerelor complexe : "<< c.getReal() << " + i"<< c.getImaginar() << endl;
    c = c.scadere(a, b);
    cout << "Diferenta numerelor complexe : " << c.getReal() << " + i" << c.getImaginar() << endl;
    c.inmulitre(a, b);
    c.impartire(a, b);
    modul(a);
    modul(b);
    cout << "Conjugata primului numar complex este : " << conjugat(a).getReal() << " " << conjugat(a).getImaginar() << "i" << endl;
    cout << "Conjugata celui de al doilea numar complex este : " << conjugat(b).getReal() << " " << conjugat(b).getImaginar() << "i" << endl;
}