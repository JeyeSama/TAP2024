#include "AplicatieBanca.h"
#include <iostream>

using namespace std;

int main() {

	Banca* banca;
	string codBanca;
	cout << "Introduceti codul bancii : ";
	cin >> codBanca; cout << endl;

	Client* clienti = new Client[2];
	ContBancar* cont = new ContBancar[2];

	for (int i = 0; i < 2; i++)
	{
		cout << endl << "Clientul : " << i << endl;
		string nume;
		string prenume;
		string adresa;

		cout << endl << "Nume : "; 
		cin >> nume;
		cout << endl << "Prenume : ";
		cin >> prenume;
		cout << endl << "Adresa : ";
		cin >> adresa;

		for (int j = 0; j < 2; j++)
		{
			string numar;
			string moneda;
			float suma;
			float sumaDepunere;

			cout << endl << "Contul : " << j << endl;
			cout << endl << "Numarul contului : ";
			cin >> numar;
			cout << endl << "Moneda : ";
			cin >> moneda;
			cout << endl << "Suma : ";
			cin >> suma;

			cont[j].setNumarCont(numar);
			cont[j].setMoneda(moneda);
			cont[j].setSuma(suma);
		}
		clienti[i].setNume(nume);
		clienti[i].setPrenume(prenume);
		clienti[i].setAdresa(adresa);
		clienti[i].setNrConturi(2);
		clienti[i].setCont(cont);

	}
	for (int i = 0; i < 2; i++) {
		float sumaD;
		float sumaR;
		float sumaT;
		cout << "Introduceti suma pe care doriti sa o depuneti in cont : ";
		cin >> sumaD;
		cont[i].depunere(sumaD);
		cout << endl << "Ati depus " << sumaD << " si ati beneficiat de o dobanda de " << cont[i].getDobanda() << " iar acum suma totala + dobanda este de " << cont[i].getSumaTotala() << endl;
		cout << endl << "Introduceti suma pe care doriti sa o retrageti din cont : ";
		cin >> sumaR;
		cout << endl << "Ati retras " << sumaR << " iar suma actuala este de " << cont[i].getSumaTotala() << endl;
		cout << endl << "Introduceti suma pe care doriti sa o transferati : ";
		cin >> sumaT;
		cont[i].transfer(cont[1], sumaT);
	}



	banca = new Banca(codBanca, 2, clienti);
	banca->afisareDateBanca();

	delete[] cont;
	delete[] clienti;
	banca->~Banca();
}