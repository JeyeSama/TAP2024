#include "carte.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

unsigned int Carte:: instance = 0;

int main(void) {
	
	ifstream date("date.txt");
	unsigned int n; // Numarul de carti
	cout << "Introduceti numarul de carti : ";
	cin >> n;
	string autorIntrodus;
	cout << "Introduceti autorul cartii : ";
	cin >> autorIntrodus;

	Carte** carti = new Carte * [n];
	for (int i = 0; i < n; i++) {
		string autor;
		string titlu;
		unsigned int isbn;
		unsigned int pret;
		date >> autor;
		date >> titlu;
		date >> isbn;
		date >> pret;
		carti[i] = new Carte(autor, titlu, isbn, pret);
		if (autorIntrodus.compare(autor) == 0) {
			carti[i]->print();
		}
	}
	cout << endl << "Numarul de carti creeate este : " << Carte::getInstance() << endl;
	for (int i = 0; i < n; i++) {
		delete carti[i];
	}
	delete[] carti;
	

	
}