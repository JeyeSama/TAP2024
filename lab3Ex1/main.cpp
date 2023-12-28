#include "mate.h"
#include <iostream>


int Punct::contorPuncteDreapta = 0;
using namespace std;

Punct centruGreutate(Punct** puncte, int n) {
	
	double sumX = 0;
	double sumY = 0;
	double medieX = 0;
	double medieY = 0;
	for (int i = 0; i < n; ++i)
	{
		sumX += puncte[i]->getX();
		sumY += puncte[i]->getY();
	}
	medieX = sumX / n;
	medieY = sumY / n;
	Punct returnat(medieX, medieY);
	return returnat;
}
int main() {
	
	/*
	Punct A(1.0,2.0); // A (XA = 1 , YA = 2)
	Punct B(2.0,0.0); // B (XB = 2, YB = 0)
	cout << "Distanta dintre punctul A si B este : " << distanta(A, B) << endl; // AB = Radical din 5
	*/

	int n; // Numarul de puncte
	double x;
	double y;
	cout << "Introduceti numarul de puncte : ";
	cin >> n;
	Punct** puncte = new Punct * [n];
	for (int i = 0; i < n; i++) {
		cout << endl << "Punctul numarul " << i << endl;
		cout << "Introduceti x : ";
		cin >> x;
		cout << "Introduceti y : ";
		cin >> y;
		puncte[i] = new Punct(x,y);
	}
	cout << "Numarul de puncte creeate este : " << Punct::getInstance();
	Punct returnat = centruGreutate(puncte, n);
	returnat.afisare();
	/*
	for (int i = 0; i < n; i++) {
		puncte[i]->afisare();
		cout << "Distanta dintre punctul A si B este : " << distanta(*puncte[0], *puncte[1]) << endl;
	}
	*/

	for (int i = 0; i < n; i++) {
		delete puncte[i];
	}
	delete[] puncte;
	return 0;
}