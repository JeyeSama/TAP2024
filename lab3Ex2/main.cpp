#include "lsi.h"
#include <iostream> 
using namespace std;

int main() {
	List lista;
	Nod* cautat;
	int optiune = -1;
	int numar;
	while (optiune != 0) {
		cout << "Alegeti o operatie : " << endl << "0.Iesire" << endl << "1.Inserare inceput" << endl << "2.Inserare sfarsit" << endl << "3.Inserare interior" << endl << "4.Stergere inceput" << endl << "5.Stergere sfarsit" << endl << "6.Stergere interior" << endl << "7.Cautare" << endl << "8.Actualizare" << endl << "9.Initializare" << endl << "10.Traversare" << endl;
		cin >> optiune;
		switch (optiune)
		{
			case 0:
				break;
			case 1:
				cout << "Introduceti numarul pe care doriti sa-l inserati in LSI : ";
				cin >> numar;
				lista.inserareInceput(numar);
				break;
			case 2:
				cout << "Introduceti numarul pe care doriti sa-l inserati in LSI : ";
				cin >> numar;
				lista.inserareSfarsit(numar);
				break;
			case 3:
				cout << "Introduceti numarul pe care doriti sa-l inserati in LSI : ";
				cin >> numar;
				lista.inserareInterior(numar);
				break;
			case 4:
				lista.stergereInceput();
				break;
			case 5:
				lista.stergereSfarsit();
				break;
			case 6:
				lista.stergereInterior();
				break;
			case 7:
				cout << "Introduceti numarul pe care doriti sa-l cautati in LSI : ";
				cin >> numar;
				cautat = lista.cautare(numar);
				if (cautat == nullptr) {
					cout << "Informatia nu exista" << endl;
				}
				else {
					cout << cautat->getInfo();
				}
				break;
			case 8:
				int numarActualizat;
				cout << "Introduceti informatia nodului pe care doriti sa-l actualizati : ";
				cin >> numar;
				cout << "Introduceti noua informatia a nodului";
				cin >> numarActualizat;
				lista.actualizare(numar, numarActualizat);
				break;
			case 9:
				lista.init();
				break;
			case 10:
				cout << endl << "LSI" << endl;
				lista.traversare();
				cout << endl;
				break;

			default:
				cout << "Optiune invalida";
			break;
		}
	}
	
}