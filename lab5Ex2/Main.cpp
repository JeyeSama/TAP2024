#include "Puncte.h"
#include <iostream>

void main() {
	int n,m;
	//cout << "Introduceti numarul de puncte 2D : ";
	//cin >> n;
	cout << "Introduceti numarul de puncte 3D : ";
	cin >> m;
	
	//Punct2D** puncte2D = new Punct2D * [n];
	Punct3D** puncte3D = new Punct3D * [m];
	/*for (int i = 0; i < n; ++i) {
		puncte2D[i] = new Punct2D();
		puncte2D[i]->operator>>(std::cin);
	}*/
	for (int j = 0; j < m; ++j) {
		puncte3D[j] = new Punct3D();
		puncte3D[j]->operator>>(std::cin);
	}
	/*for (int i = 0; i < n; ++i) {
		puncte2D[i]->operator<<(std::cout);
	}*/
	for (int j = 0; j < m; ++j) {
		puncte3D[j]->operator<<(std::cout);
	}
	cout <<  "Distanta este = " << distanta(*puncte3D[0], *puncte3D[1]);

}