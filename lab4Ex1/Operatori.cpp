#include "Fractie.h"
#include <iostream>
using namespace std;

Fractie::Fractie() {
	this->numarator = 0;
	this->numitor = 1;
}
Fractie::Fractie(int numarator) : numarator(numarator) {
	this->numitor = 1;
}

Fractie::Fractie(int numarator, int numitor) :numitor(numitor), numarator(numarator) {}

Fractie::Fractie(const Fractie& o) {
	this->numitor = o.numitor;
	this->numarator = o.numarator;
}

Fractie::~Fractie() {
	this->numarator = NULL;
	this->numitor = NULL;
}
Fractie Fractie::operator+(const Fractie& f1) const {
	// A - numarator  C - numarator
	// B - numitor    D - numitor
	// AD + BC  sau A+C
	//	  BD		 B
	Fractie rezultat; 
	if (this->numitor == f1.numitor) {
		rezultat.numarator = this->numarator + f1.numarator;
	}
	else {
						      //A		      * D           +  B			 + C
		rezultat.numarator = (this->numarator * f1.numitor) + (this->numitor * f1.numarator);
							// /
							// B		 * D
		rezultat.numitor = this->numitor * f1.numitor;
	}
	return rezultat;
}
Fractie Fractie::operator-(const Fractie& f1) const {
	Fractie rezultat;
	if (this->numitor == f1.numitor) {
		rezultat.numarator = this->numarator - f1.numarator;
	}
	else {
		rezultat.numarator = (this->numarator * f1.numitor) - (this->numitor * f1.numarator);
		rezultat.numitor = this->numitor * f1.numitor;
	}
	return rezultat;
}
Fractie Fractie::operator*(const Fractie& f1) const {
	Fractie rezultat;
	rezultat.numarator = this->numarator * f1.numarator;
	rezultat.numitor = this->numitor * f1.numitor;
	return rezultat;
}
Fractie Fractie::operator/(const Fractie& f1) const {
	Fractie salv = f1;
	int aux = salv.numitor;
	salv.numitor = salv.numarator;
	salv.numarator = aux;
	Fractie rezultat;
	rezultat.numarator = this->numarator * salv.numarator;
	rezultat.numitor = this->numitor * salv.numitor;
	return rezultat;
}
Fractie& Fractie::operator=(const Fractie& o) {
	this->numarator = o.numarator;
	this->numitor = o.numitor;
	return *this;
}
bool Fractie::operator!=(const Fractie& f) const {
	return !(this->numarator / this->numitor != f.numarator / f.numitor);
}
bool Fractie::operator<(const Fractie& f) const {
	return (this->numarator / this->numitor < f.numarator / f.numitor);
}
bool Fractie::operator>(const Fractie& f) const {
	return (this->numarator / this->numitor > f.numarator / f.numitor);
}
bool Fractie::operator<=(const Fractie& f) const {
	return (this->numarator / this->numitor <= f.numarator / f.numitor);
}
bool Fractie::operator>=(const Fractie& f) const {
	return (this->numarator / this->numitor >= f.numarator / f.numitor);
}
bool Fractie::operator==(const Fractie& f) const {
	return (this->numarator / this->numitor == f.numarator / f.numitor);
}
Fractie& Fractie::operator+=(const Fractie& f) {
	
	if (this->numitor == f.numitor) {
		this->numarator = this->numarator + f.numarator;
	}
	else {

		this->numarator = (this->numarator * f.numitor) + (this->numitor * f.numarator);
		
		this->numitor = this->numitor * f.numitor;
	}
	return *this;
}
Fractie& Fractie::operator-=(const Fractie& f) {
	if (this->numitor == f.numitor) {
		this->numarator = this->numarator - f.numarator;
	}
	else {
		this->numarator = (this->numarator * f.numitor) - (this->numitor * f.numarator);
		this->numitor = this->numitor * f.numitor;
	}
	return *this;
}
Fractie& Fractie::operator*=(const Fractie& f) {
	this->numarator = this->numarator * f.numarator;
	this->numitor = this->numitor * f.numitor;
	return *this;
}
Fractie& Fractie::operator/=(const Fractie& f) {
	Fractie salv = f;
	int aux = salv.numitor;
	salv.numitor = salv.numarator;
	salv.numarator = aux;
	
	this->numarator = this->numarator * salv.numarator;
	this->numitor = this->numitor * salv.numitor;
	return *this;
}

Fractie& Fractie::operator++() {
	this->numarator += this->numitor;
	return *this;
}
Fractie  Fractie::operator++(int dummy) {
	Fractie old = *this;
	this->numarator += this->numitor;
	return old;
}
Fractie& Fractie::operator--() {
	this->numarator -= this->numitor;
	return *this;
}
Fractie  Fractie::operator--(int dummy) {
	Fractie old = *this;
	this->numarator -= this->numitor;
	return old;
}
ostream& Fractie::operator<<(ostream& o) const {
	o << this->numarator << " / " << this->numitor << endl;
	return o;
}
istream& Fractie::operator>>(istream& i) {
	cout << "Dati valoare pentru numarator" << endl;
	i >> this->numarator;
	cout << "Dati valoare pentru numitor" << endl;
	i >> this->numitor;
	return i;
}
Fractie::operator double() {
	return (double)this->numarator / this->numitor;
}
//Friends
//Fractie operator+(const Fractie& f1, const Fractie& f2) {
//	if (this->numitor == f1.numitor) {
//		rezultat.numarator = this->numarator + f1.numarator;
//	}
//	else {
//		//A		      * D           +  B			 + C
//		rezultat.numarator = (this->numarator * f1.numitor) + (this->numitor * f1.numarator);
//		// /
//		// B		 * D
//		rezultat.numitor = this->numitor * f1.numitor;
//	}
//	return rezultat;
//}
//Fractie operator-(const Fractie& f1, const Fractie& f2) {
//	Fractie rezultat;
//	if (this->numitor == f1.numitor) {
//		rezultat.numarator = this->numarator - f1.numarator;
//	}
//	else {
//		rezultat.numarator = (this->numarator * f1.numitor) - (this->numitor * f1.numarator);
//		rezultat.numitor = this->numitor * f1.numitor;
//	}
//	return rezultat;
//}
//Fractie operator*(const Fractie& f1, const Fractie& f2) {
//	Fractie rezultat;
//	rezultat.numarator = this->numarator * f1.numarator;
//	rezultat.numitor = this->numitor * f1.numitor;
//	return rezultat;
//}
//Fractie operator/(const Fractie& f1, const Fractie& f2) {
//	Fractie salv = f1;
//	int aux = salv.numitor;
//	salv.numitor = salv.numarator;
//	salv.numarator = aux;
//	Fractie rezultat;
//	rezultat.numarator = this->numarator * salv.numarator;
//	rezultat.numitor = this->numitor * salv.numitor;
//	return rezultat;
//}
//
//bool operator!=(const Fractie& f1, const Fractie& f2) {
//	return !(f1.numarator / f1.numitor != f2.numarator / f2.numitor);
//}
//
//bool operator==(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor == f2.numarator / f2.numitor);
//}
//
//bool operator<=(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor <= f2.numarator / f2.numitor);
//}
//
//bool operator>=(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor >= f2.numarator / f2.numitor);
//}
//
//bool operator<(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor < f2.numarator / f2.numitor);
//}
//
//bool operator>(const Fractie& f1, const Fractie& f2) {
//	return (f1.numarator / f1.numitor > f2.numarator / f2.numitor);
//}
//
//ostream& operator<<(ostream& o, const Fractie& f) {
//	o << f.getNumarator() << " / " << f.getNumitor();
//}
//istream& operator>>(istream& i, const Fractie& f) {
//	cout << "Dati valoare pentru numarator" << endl;
//	i >> f.getNumarator();
//	cout << "Dati valoare pentru numitor" << endl;
//	i >> f.getNumitor();
//}