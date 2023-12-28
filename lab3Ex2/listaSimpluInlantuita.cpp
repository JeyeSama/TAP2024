#include "lsi.h"
#include <iostream>

using namespace std;


void List::inserareInceput(int infoNou) {
	Nod* nouNod = new Nod(infoNou);
		if (this->top == nullptr) {
			nouNod->suc = nullptr;
			nouNod->info = infoNou;
			this->top = nouNod;
		}
		else {
			nouNod->suc = top;
			nouNod->info = infoNou;
			this->top = nouNod;
		}
}
void List::inserareSfarsit(int infoNou) {
	Nod* nouNod = new Nod(infoNou);
	if (this->top == nullptr) {
		nouNod->suc = nullptr;
		nouNod->info = infoNou;
		this->top = nouNod;
	}
	else {
		Nod* tmp = this->top;
		while (tmp->suc != nullptr) {
			tmp = tmp->suc;
		}
		Nod* last = tmp;
		last->suc = nouNod;
		nouNod->suc = nullptr;
		nouNod->info = infoNou;
	}
}
void List::traversare() {
	Nod* tmp = top;
	while (tmp != nullptr) {
		cout << tmp->info << " ";
		tmp = tmp->suc;
	}
	cout << endl;
}
void List::inserareInterior(int infoNou) {
	Nod* nouNod = new Nod(infoNou);
	
	if (this->top == nullptr) {
		nouNod->suc = nullptr;
		nouNod->info = infoNou;
		this->top = nouNod;
	}
	else {
		Nod* dupa = top;
		nouNod->suc = dupa->suc;
		dupa->suc = nouNod;
		nouNod->info = infoNou;
	}
}
void List::stergereInceput() {
	if (this->top == nullptr) {
		cout << "Lista vida" << endl;
	}
	else {
		Nod* salvat;
		salvat = this->top;
		this->top = top->suc;
		delete salvat;
	}
}
void List::stergereSfarsit() {
	if (this->top == nullptr) {
		cout << "Eroare, lista este vida" << endl;
	}
	else {
		Nod* tmp = this->top;
		while (tmp->suc->suc != nullptr) {
			tmp = tmp->suc;
		}
		Nod* penultim = tmp;
		Nod* salvat = penultim->suc;
		penultim->suc = nullptr;
		delete salvat;
	}
}
void List::stergereInterior() {
	Nod* dupa = this->top;
	if (this->top == nullptr) {
		cout << "Eroare - lista vida" << endl;
	}
	else {
		Nod* salvat = dupa->suc;
		dupa->suc = salvat->suc;
		delete salvat;
	}
}
void List::init() {
	while (this->top == nullptr) {
		stergereSfarsit();
	}
}
Nod* List::cautare(int infoCautat) {
	Nod* tmp = this->top;
	while (tmp != nullptr) {
		if (tmp->info == infoCautat) {
			Nod* adresa = tmp;
			return tmp;
		}
		else {
			tmp = tmp->suc;
		}
	}
	return nullptr;
}
void List::actualizare(int infoCautat, int infoNou) {
	Nod* adresa = cautare(infoCautat);
	if (adresa == nullptr) {
		cout << "Eroare - informatie inexistenta" << endl;
	}
	else {
		adresa->info = infoNou;
	}
}