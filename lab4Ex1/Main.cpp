#include "Fractie.h"
#include <iostream>

using namespace std;

void main() {
    int numitor1, numarator1, numitor2, numarator2;

    cout << "Introduceti prima fractie : " << endl;
    cin >> numarator1 >> numitor1;
    Fractie f1 = Fractie(numarator1, numitor1);

    cout << "Introduceti a doua fractie " << endl;
    cin >> numarator2 >> numitor2;
    Fractie f2 = Fractie(numarator2, numitor2);

    cout << endl;
    cout << "Fractiile sunt: " << numarator1 << "/" << numitor1 << " si " << numarator2 << "/" << numitor2 << endl;

    cout << "Test operatii : " << endl;
    cout << numarator1 << "/" << numitor1 << " + " << numarator2 << "/" << numitor2 << " = " << (f1 + f2).getNumarator() << "/" << (f1 + f2).getNumitor() << endl;
    cout << numarator1 << "/" << numitor1 << " - " << numarator2 << "/" << numitor2 << " = " << (f1 - f2).getNumarator() << "/" << (f1 - f2).getNumitor() << endl;
    cout << numarator1 << "/" << numitor1 << " * " << numarator2 << "/" << numitor2 << " = " << (f1 * f2).getNumarator() << "/" << (f1 * f2).getNumitor() << endl;
    cout << numarator1 << "/" << numitor1 << " / " << numarator2 << "/" << numitor2 << " = " << (f1 / f2).getNumarator() << "/" << (f1 / f2).getNumitor() << endl;

    cout << numarator1 << "/" << numitor1 << " += " << numarator2 << "/" << numitor2 << " = " << (f1 += f2).getNumarator() << "/" << (f1 += f2).getNumitor() << endl;
    cout << numarator1 << "/" << numitor1 << " -= " << numarator2 << "/" << numitor2 << " = " << (f1 -= f2).getNumarator() << "/" << (f1 -= f2).getNumitor() << endl;
    cout << numarator1 << "/" << numitor1 << " *= " << numarator2 << "/" << numitor2 << " = " << (f1 *= f2).getNumarator() << "/" << (f1 *= f2).getNumitor() << endl;
    cout << numarator1 << "/" << numitor1 << " /= " << numarator2 << "/" << numitor2 << " = " << (f1 /= f2).getNumarator() << "/" << (f1 /= f2).getNumitor() << endl;

    cout << numarator1 << "/" << numitor1 << " < " << numarator2 << "/" << numitor2 << " " << boolalpha << (f1 < f2) << endl;
    cout << numarator1 << "/" << numitor1 << " <= " << numarator2 << "/" << numitor2 << " " << boolalpha << (f1 <= f2) << endl;
    cout << numarator1 << "/" << numitor1 << " > " << numarator2 << "/" << numitor2 << " " << boolalpha << (f1 > f2) << endl;
    cout << numarator1 << "/" << numitor1 << " >= " << numarator2 << "/" << numitor2 << " " << boolalpha << (f1 >= f2) << endl;
    cout << numarator1 << "/" << numitor1 << " == " << numarator2 << "/" << numitor2 << " " << boolalpha << (f1 == f2) << endl;
    cout << numarator1 << "/" << numitor1 << " != " << numarator2 << "/" << numitor2 << " " << boolalpha << (f1 != f2) << endl;
}