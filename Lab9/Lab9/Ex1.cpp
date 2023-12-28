#include<iostream>
#include<fstream>
#include<sstream>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
int main() {

	unsigned int i = 0;
	unsigned int max = 0;

	string line;
	string word;
	vector<string> vect;

	ifstream fin("L9E1.txt");
	while (!fin.eof()) {
		getline(fin, line);
		if (max < line.size())
		{
			max = line.size();
		}
		++i;
		vect.push_back(line);
	}
	for (unsigned j = 0; j <= max; ++j) {
		word.append("_");
	}
	vect.push_back(word);
	vect.insert(vect.begin(), word);

	for (i = 2; i < vect.size() - 1; i += 2) {
		vect.insert(vect.begin() + i, word);
	}
	for (i = 1; i < vect.size(); i++)
	{
		unsigned int aux = vect[i].size() + 1;
		vect[i].insert(0, "|");
		for (unsigned int j = 0; j <= max; ++j)
		{
			vect[i].insert(aux, " ");
			++aux;
		}
		vect[i].insert(max + 2, "|");
	}
	for (i = 0; i < vect.size(); i++) {
		cout << vect[i] << endl;
	}
	cin.ignore();
	return 0;
}