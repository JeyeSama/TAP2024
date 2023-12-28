#pragma once
#ifndef APLICATIE_BANCA_H
#define APLICATIE_BANCA_H
#include <iostream>

using namespace std;

class Operatiuni {
	public:
		virtual float getSumaTotala() = 0;
		virtual float getDobanda() = 0;
		virtual void depunere(float suma) = 0;
		virtual void extragere(float suma) = 0;
};
class ContBancar : public Operatiuni {
	private: 
		string numarCont;
		float suma;
		string moneda;

	public :
		ContBancar(string numarCont, float suma, string moneda);
		ContBancar(const ContBancar& obiect); // Constructor de copiere
		ContBancar();
		~ContBancar(); // Destructor
		void setNumarCont(string numarCont);
		void setSuma(float suma);
		void setMoneda(string moneda);
		string getNumarCont();
		float getSuma();
		string getMoneda();
		void transfer(ContBancar& constDest, float suma);
		float getSumaTotala();
		float getDobanda();
		void depunere(float suma);
		void extragere(float suma);
		void afisareDateCont();
		
};
class Client {
	private:
		string nume;
		string prenume;
		string adresa;
		unsigned nrConturi;
		ContBancar* conturi;
	public:
		Client(string nume, string prenume, string adresa, unsigned nrConturi, ContBancar* conturi);
		Client();
		Client(const Client& obiect);
		~Client();
		void setNume(string nume);
		void setPrenume(string prenume);
		void setAdresa(string adresa);
		void setNrConturi(unsigned nrConturi);
		void setCont(ContBancar*);
		string getNume();
		string getPrenume();
		string getAdresa();
		unsigned getNrConturi();
		void afisareDateClient();
};

class Banca {
	private:
		string codBanca;
		unsigned nrClienti;
		Client* clienti;
	public :
		Banca(string codBanca, unsigned nrClienti, Client * clienti);
		Banca(const Banca& obiect);
		~Banca();
		void setCodBanca(string codBanca);
		void setNrClienti(unsigned nrClienti);
		string getCodBanca();
		unsigned getNrClienti();
		void afisareDateBanca();

};
#endif
