/*
#include<iostream>
#include<list>
#include<string>
#include<fstream>
using namespace std;
class Reverse {
public: bool operator()(string s1, string s2) {
	if (s1.size() < s2.size()) {
		return true;
	}

	else {
		return false;
	}
}
};
class Lenght {
public: bool operator()(string s1, string s2) {
	if (s1 > s2) {
		return true;
	}
	else {
		return false;
	}
}
};
int main() {

	list<string> lista;
	list<string>::iterator it;
	string linie;
	ifstream fin("FisierIntrare.txt");
	ofstream fout1("F1.txt");
	ofstream fout2("F2.txt");
	ofstream fout3("F3.txt");
	while (!fin.eof()) {
		getline(fin, linie);
		lista.push_back(linie);
	}
	lista.sort();
	for (it = lista.begin(); it != lista.end(); it++)
		fout1 << *it << endl;
	lista.sort(Lenght());
	for (it = lista.begin(); it != lista.end(); it++)
		fout2 << *it << endl;

	lista.sort(Reverse());
	for (it = lista.begin(); it != lista.end(); it++)
		fout3 << *it << endl;
	fin.close();
	fout1.close();
	fout2.close();
	fout3.close();

	return 0;
}
*/