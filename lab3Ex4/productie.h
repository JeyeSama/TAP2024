#pragma once
#ifndef PRODUCTIE_H
#define PRODUCTIE_H
#include <iostream>

using namespace std;

class Actor {
	private : 
		string nume;
		string prenume;
		unsigned int varsta;
		static unsigned int instance;
		
	public : 
		Actor(string nume, string prenume, unsigned int varsta);
		Actor(const Actor& object);
		~Actor();
		inline void setNume(string nume) {
			this->nume = nume;
		}
		inline void setPrenume(string prenume) {
			this->prenume = prenume;
		}
		inline void setVarsta(unsigned int varsta) {
			this->varsta = varsta;
		}
		inline string getNume() const {
			return this->nume;
		}
		inline string getPrenume() const {
			return this->prenume;
		}
		inline unsigned int getVarsta() const {
			return this->varsta;
		}
		inline static unsigned int getInstance() {
			return instance;
		}
		friend class Film;
};

class Film {
	private : 
		string denumire;
		string gen;
		unsigned int numarActori;
		Actor* actori;
	public :
		Film(string denumire, string gen, unsigned int numarActori, Actor* actori);
		Film(const Film& object);
		~Film();
		inline void setDenumire(string denumire) {
			this->denumire = denumire;
		}
		inline void setGen(string gen) {
			this->gen = gen;
		}
		inline void setNumarActori(unsigned int numarActori) {
			this->numarActori = numarActori;
		}
		inline string getDenumire() const {
			return this->denumire;
		}
		inline string getGen() const {
			return this->gen;
		}
		inline unsigned int getNumarActori() const {
			return this->numarActori;
		}
		friend class Actor;
};







#endif