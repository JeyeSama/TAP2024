#include "Fractie.h"
#include <iostream>
using namespace std;

int main() {
	// Apelul Constructorilor
	int numitor;
	int numarator;
	cout << "Introduceti numaratorul fractiei : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul fractiei : ";
	cin >> numitor;
	Fractie a; // implicit (empty)
	Fractie b(numarator); // Cu un parametru
	Fractie c(numarator, numitor); // Cu doi parametrii
	Fractie d(a); // Constructor de copiere
	

	cout << endl << "Fractia initializata cu 0 / 1 : " << endl;
	a.print();
	cout << endl << "Fractia initializata cu un parametru : " << endl;
	b.print();
	cout << endl << "Fractia initializata cu doi parametrii :  " << endl;
	c.print();
	cout << endl << "Initalizam o fractie noua folosind constructorul de copiere : " << endl;
	d.print();

	// Metoda de comparare a doua fractii
	cout << endl << "Introduceti numaratorul primei fractii : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul primei fractii : ";
	cin >> numitor;
	Fractie x(numarator, numitor);
	cout << endl << "Introduceti numaratorul celei de a doua fractii : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul celei de a doua fractii : ";
	cin >> numitor;
	Fractie y(numarator, numitor);

	cout << endl << "Valoarea returnata va fi 1 daca fractiile sunt egale iar 0 daca fractiile nu sunt egale" << endl << "Valoarea returnata : " << x.egal(y) << endl;

	// Operatii cu fractii

	Fractie metode;

	cout << endl << "Introduceti numaratorul primei fractii : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul primei fractii : ";
	cin >> numitor;
	Fractie fractiaA(numarator, numitor);
	cout << endl << "Introduceti numaratorul celei de a doua fractii : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul celei de a doua fractii : ";
	cin >> numitor;
	Fractie fractiaB(numarator, numitor);

	cout << endl << "Adunarea fractiei A cu fractia B : ";
	metode.adunare(fractiaA, fractiaB);
	cout << endl << "Scaderea fractiei A cu fractia B : ";
	metode.scadere(fractiaA, fractiaB);
	cout << endl << "Inmultirea fractiei A cu fractia B : ";
	metode.impartire(fractiaA, fractiaB);
	cout << endl << "Impartirea fractiei A cu fractia B : ";
	metode.impartire(fractiaA, fractiaB);

	Fractie aux(12, 6); // 7 / 16
	aux.simplifica();
	cout << "Rezultatul fractiei este = " << aux.reciproc() << endl;

	int numarUnu;
	int numarDoi;
	cout << endl << "Introduceti primul numar : ";
	cin >> numarUnu;
	cout << endl << "Introduceti al doilea numar : ";
	cin >> numarDoi;
	cout << endl <<  "Cmmdc dintre cele doua numere introduse este : " << Fractie::cmmdc(numarUnu, numarDoi) << endl;
	cout << "Cmmmc dintre " << fractiaA.getNumitor() << " si " << fractiaB.getNumitor() << " este : " << aux.cmmmc(fractiaA, fractiaB);
	
}