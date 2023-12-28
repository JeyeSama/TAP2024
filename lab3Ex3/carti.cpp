#include "carte.h"
#include <iostream>

using namespace std;

Carte::Carte(string autor, string titlu, unsigned int isbn, unsigned int pret) : autor(autor), titlu(titlu), isbn(isbn), pret(pret) {
	instance++;
}
Carte::Carte(const Carte& object) {
	this->autor = object.autor;
	this->titlu = object.titlu;
	this->isbn = object.isbn;
	this->pret = object.pret;
	if (this != &object) {
		instance++;
	}
}
Carte::~Carte() {
	this->autor = "Undefined";
	this->titlu = "Undefined";
	this->isbn = NULL;
	this->pret = NULL;
	instance--;
}
void Carte::print() {
	cout << endl << "Titlu : " << this->titlu << endl;
	cout << endl << "Autor : " << this->autor << endl;
	cout << endl << "ISBN : " << this->isbn << endl;
	cout << endl << "Pret : " << this->pret << endl;

}