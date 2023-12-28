#include "Fractie.h"

Fractie::Fractie() {
	this->numaratorul = 0;
	this->numitorul = 1;
}
Fractie::Fractie(int numaratorul) {
	this->numaratorul = numaratorul;
	this->numitorul = 1;
}
Fractie::Fractie(int numaratorul, int numitorul) {
	this->numaratorul = numaratorul;
	this->numitorul = numitorul;
}
int Fractie::getNumarator() {
	return this->numaratorul;
}
int Fractie::getNumitor() {
	return this->numitorul;
}

Fractie::~Fractie() {
	this->numaratorul = 0;
	this->numitorul = 1;
}
Fractie::Fractie(const Fractie& obiect) {
	this->numaratorul = obiect.numaratorul;
	this->numitorul = obiect.numitorul;
}
int Fractie::cmmmc(Fractie a, Fractie b) {
	int prod, rest;
	prod = a.numitorul * b.numitorul;
	rest = a.numitorul % b.numitorul;
	
	while (rest != 0) {
		a.numitorul = b.numitorul;
		b.numitorul = rest;
		rest = a.numitorul % b.numitorul;
	}
	return prod / b.numitorul;
}
void Fractie::adunare(Fractie a, Fractie b) {
	double multipluComun = cmmmc(a, b);
	double numitorA = multipluComun / a.numitorul;
	double numitorB = multipluComun / b.numitorul;
	double numarator = (numitorA * a.numaratorul) + (numitorB * b.numaratorul);
	cout <<"\n" << numarator << "/" << multipluComun;
}
void Fractie::scadere(Fractie a, Fractie b) {
	double multipluComun = cmmmc(a, b);
	double numitorA = multipluComun / a.numitorul;
	double numitorB = multipluComun / b.numitorul;
	double numarator = (numitorA * a.numaratorul) - (numitorB * b.numaratorul);
	cout << "\n" << numarator << "/" << multipluComun;
}
void Fractie::inmultire(Fractie a, Fractie b) {
	double numitor = a.numaratorul * b.numaratorul;
	double numarator = a.numitorul * b.numitorul;
	cout << "\n" << numitor << "/" << numarator;
}
void Fractie::impartire(Fractie a, Fractie b) {
	int temp = b.numitorul;
	b.numitorul = b.numaratorul;
	b.numaratorul = temp;
	inmultire(a, b);
	cout << "\n";
}
void Fractie::simplifica() {
	int cmmdc = Fractie::cmmdc(this->numaratorul, this->numitorul);
	cout << cmmdc;
	if (cmmdc == 1) {
		cout << endl << "Ireductibil" << endl;
	}
	else {
		this->numaratorul = numaratorul / cmmdc;
		this->numitorul = numitorul / cmmdc;
		cout << endl << "Fractia este : " << numaratorul << "/" << numitorul << endl;
	}
}
double Fractie::reciproc() {
	int temp = numaratorul;
	numaratorul = numitorul;
	numitorul = temp;

	cout << endl << "Inversul fractiei este : " << numaratorul << "/" << numitorul << endl;
	return ((double)numaratorul/numitorul);
}
bool Fractie::egal(const Fractie& f) {
	if (this->numaratorul == f.numaratorul && this->numitorul == f.numitorul) {
		return true;
	}
	else
		return false;
}
void Fractie::print() {
	cout << endl << this->numaratorul << "/" << this->numitorul << endl;
}