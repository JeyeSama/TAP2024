#pragma once
#ifndef Angajat_h
#define Angajat_h
#include <iostream>
using namespace std;


class Angajat {
private :
	double tarifOrar;
	int nrOre;

public :
	Angajat();
	Angajat(const Angajat& obiect);
	~Angajat();
	inline double getTarifOrar() const {
		return this->tarifOrar;
	}
	inline void setTarifOrar(double tarifOrar) {
		this->tarifOrar = tarifOrar;
	}
	inline int getNrOre() const {
		return this->nrOre;
	}
	inline void setNrOre(int nrOre) {
		this->nrOre = nrOre;
	}
	inline double getSalar() {
		return (this->tarifOrar * this->nrOre);
	}
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);
	Angajat& operator=(const Angajat& obiect);
};
class Manager : public Angajat {
private: 
	int numarSubordonati;

public :
	Manager();
	Manager(const Manager& obiect);
	~Manager();
	inline int getNumarSubordonati() const {
		return this->numarSubordonati;
	}
	inline void setNumarSubordonati(int numarSubordonati) {
		this->numarSubordonati = numarSubordonati;
	}
	inline double getSalarManager() const {
		double salarAngajat = this->getTarifOrar() * this->getNrOre();
		return (((50 * salarAngajat) / 100) + salarAngajat);
	}
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);
	Manager& operator=(const Manager& obiect);
};

#endif