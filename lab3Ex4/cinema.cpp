#include "productie.h"
#include <iostream>

using namespace std;

Actor::Actor(string nume, string prenume, unsigned int varsta) : nume(nume), prenume(prenume), varsta(varsta) {
	instance++;
}
Actor::Actor(const Actor& object) {
	this->nume = object.nume;
	this->prenume = object.prenume;
	this->varsta = object.varsta;
	if (this != &object) {
			instance++;
	}
}
Actor::~Actor() {
	this->nume = "Undefined";
	this->prenume = "Undefined";
	this->varsta = NULL;
	instance--;
}

Film::Film(string denumire, string gen, unsigned int numarActori, Actor* actori) : denumire(denumire), gen(gen), numarActori(numarActori), actori(actori) {

}
Film::Film(const Film& object) {
	this->denumire = object.denumire;
	this->gen = object.gen;
	this->numarActori = object.numarActori;
	for (int i = 0; i < numarActori; i++) {
		this->actori[i] = object.actori[i];
	}
}
Film::~Film() {
	this->denumire = "Undefined";
	this->gen = "Undefined";
	this->numarActori = NULL;
	delete[] this->actori;
}