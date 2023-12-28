#pragma once
#ifndef CARTE_H
#define CARTE_H
#include <iostream>
using namespace std;

class Carte {
	private :
		string autor;
		string titlu;
		unsigned int isbn;
		unsigned int pret;
		static unsigned int instance;
	public :
		Carte(string autor = "", string titlu = "", unsigned int isbn = 0, unsigned int pret = 0);
		Carte(const Carte& object);
		~Carte();
		inline string getAutor() const { 
			return this->autor; }
		inline string getTitlu() const {
			return this->titlu;
		}
		inline unsigned int getIsbn() const {
			return this->isbn;
		}
		inline unsigned int getPret() const {
			return this->pret;
		}
		inline void setAutor(string autor) {
			this->autor = autor;
		}
		inline void setTitlu(string titlu) {
			this->titlu = titlu;
		}
		inline void setIsbn(unsigned int isbn) {
			this->isbn = isbn;
		}
		inline void setPret(unsigned int pret) {
			this->pret = pret;
		}
		inline static unsigned int getInstance() {
			return instance;
		}
		void print();
};



#endif