#include "Matrice.h"
#include <iostream>

using namespace std;

void main() {
	Matrice a(2,2);
	Matrice b(2,2);
	
	a.operator>>(cin);
	b.operator>>(cin);
	cout << endl;
	(a + b).operator<<(cout) << endl;
	(a - b).operator<<(cout) << endl;
	(a * b).operator<<(cout) << endl;
}