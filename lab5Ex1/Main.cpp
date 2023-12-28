#include "Angajat.h"
#include <iostream>

void main() {
	Angajat eu;
	eu.operator>>(std::cin);
	eu.operator<<(std::cout);
	cout << "Am salariul de : " << eu.getSalar() << endl;
	Manager nuEu;
	nuEu.operator>>(std::cin);
	cout << "Managerul are salariul : " << nuEu.getSalarManager();
}