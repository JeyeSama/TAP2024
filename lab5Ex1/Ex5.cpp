#include "Angajat.h"
#include <iostream>

using namespace std;

Angajat::Angajat() : tarifOrar(5.5), nrOre(0) {}
Angajat::Angajat(const Angajat& obiect) {
	this->nrOre = obiect.nrOre;
	this->tarifOrar = obiect.tarifOrar;
}
Angajat::~Angajat() {
	this->nrOre = NULL;
	this->tarifOrar = NULL;
}
ostream& Angajat::operator<<(ostream& os) const {
	os << "Tariful / h : " << this->tarifOrar << endl << "Numarul de ore : " << this->nrOre << endl;
	return os;
}
istream& Angajat::operator>>(istream& is) {
	cout << "Introduceti tariful /h lucrata : ";
	is >> this->tarifOrar;
	cout << "Introduceti numarul de ore lucrate : ";
	is >> this->nrOre;
	return is;
}
Manager::Manager() : Angajat() , numarSubordonati(0) {}
Manager::Manager(const Manager& obiect) {
	this->numarSubordonati = obiect.numarSubordonati;
}
Manager::~Manager() {
	this->numarSubordonati = NULL;
}
ostream& Manager::operator<<(ostream& os) const {
	Angajat::operator<<(cout);
	os << "Numarul de subordonati : " << this->numarSubordonati << endl;
	return os;
}
istream& Manager::operator>>(istream& is) {
	Angajat::operator>>(cin);
	cout << "Numarul de subordonati : ";
	is >> numarSubordonati;
	return is;
}
Angajat& Angajat::operator=(const Angajat& obiect) {
	this->nrOre = obiect.nrOre;
	this->tarifOrar = obiect.tarifOrar;
	return *this;
}
Manager& Manager::operator=(const Manager& obiect) {
	Angajat::operator=(obiect);
	this->numarSubordonati = obiect.numarSubordonati;
	return *this;
}