#include "Matrice.h"
#include <iostream>

using namespace std;

Matrice::Matrice() {
	this->n = 0;
	this->m = 0;
}
Matrice::Matrice(int n, int m) :n(n), m(m) {
	this->elemente = new int* [n];
	for (int i = 0; i < n; ++i) {
		this->elemente[i] = new int[m];
	}
}
Matrice::Matrice(const Matrice& obiect) {
	this->n = obiect.n;
	this->m = obiect.m;
	this->elemente = obiect.elemente;
}
Matrice::~Matrice() {
	this->n = NULL;
	this->m = NULL;
	for (int i = 0; i < this->n; ++i) {
		delete[] this->elemente[i];
	}
	delete[] elemente;
}
int* Matrice::operator[](int index) const {
	return elemente[index];
}
Matrice Matrice::operator+(const Matrice& matrix) {
	Matrice matriceNoua(this->n, this->m);
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			matriceNoua.elemente[i][j] = a + b;
		}
	}
	return matriceNoua;	
}
Matrice Matrice::operator-(const Matrice& matrix) {
	Matrice matriceNoua(this->n, this->m);
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			matriceNoua.elemente[i][j] = a - b;
		}
	}
	return matriceNoua;
}
Matrice Matrice::operator*(const Matrice& matrix) {
	Matrice matriceNoua(this->n, this->m);
	
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < matrix.m; j++) {
			matriceNoua.elemente[i][j] = 0;
			for (int k = 0; k < this->m; ++k) {
				matriceNoua.elemente[i][j] += this->elemente[i][k] * matrix.elemente[k][j];
			}
		}
	}
	return matriceNoua;
}
Matrice Matrice::operator/(const Matrice& matrix) {
	Matrice matriceNoua(this->n, this->m);
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			matriceNoua.elemente[i][j] = a / b;
		}
	}
	return matriceNoua;
}
Matrice& Matrice::operator=(const Matrice& matrix) {
	this->n = matrix.n;
	this->m = matrix.m;
	for (int i = 0; i < matrix.n; i++) {
		for (int j = 0; j < matrix.m; j++) {
			this->elemente[i][j] = matrix.elemente[i][j];
		}
	}	
	return *this;
}
Matrice& Matrice::operator+=(const Matrice& matrix) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a + b;
		}
	return *this;
}
Matrice& Matrice::operator-=(const Matrice& matrix) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a - b;
		}
	return *this;
}
Matrice& Matrice::operator*=(const Matrice& matrix) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a * b;
		}
	return *this;
}
Matrice& Matrice::operator/=(const Matrice& matrix) {
	for (int i = 0; i < this->n; i++)
		for (int j = 0; j < this->m; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a / b;
		}
	return *this;
}
bool Matrice::operator==(const Matrice& matrix) const {
	if (this->m * this->n == matrix.m * matrix.n && this->elemente == matrix.elemente) {
		return true;
	}
		
	else {
		return false;
	}
}
bool Matrice::operator<(const Matrice& matrix) const {
	if (this->m * this->n < matrix.m * matrix.n) {
		return true;
	}

	else {
		return false;
	}
}
bool Matrice::operator<=(const Matrice& matrix) const {
	if (this->m * this->n <= matrix.m * matrix.n) {
		return true;
	}

	else {
		return false;
	}
}
bool Matrice::operator>(const Matrice& matrix) const {
	if (this->m * this->n > matrix.m * matrix.n) {
		return true;
	}

	else {
		return false;
	}
}
bool Matrice::operator>=(const Matrice& matrix) const {
	if (this->m * this->n >= matrix.m * matrix.n) {
		return true;
	}

	else {
		return false;
	}
}
bool Matrice::operator!=(const Matrice& matrix) const {
	if (this->m * this->n != matrix.m * matrix.n) {
		return true;
	}

	else {
		return false;
	}
}
Matrice& Matrice::operator++() {
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			if (i == j) {
				this->elemente[i][j] += 1;
			}
		}	
	}	
	return *this;
}
Matrice& Matrice::operator--() {
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			if (i == j) {
				this->elemente[i][j] -= 1;
			}
		}
	}
	return *this;
}
Matrice Matrice::operator--(int dummy) {
	Matrice temp = *this;
	-- *this;
	return temp;
}

Matrice Matrice::operator++(int dummy) {
	Matrice temp = *this;
	++ *this;
	return temp;
}
ostream& Matrice::operator<<(ostream& os) const {
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			os << this->elemente[i][j] << " ";
		}
		os << endl;
	}
	os << endl;
	return os;
}
istream& Matrice::operator>>(istream& is) {
	cout << "Introduceti elementele matricei : " << endl;
	for (int i = 0; i < this->n; ++i) {
		for (int j = 0; j < this->m; ++j) {
			is >> this->elemente[i][j];
		}
	}
	return is;
}

Matrice operator+(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getN(); ++i) {
		for (int j = 0; j < matriceNoua.getM(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] + mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}
Matrice operator-(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getN(); ++i) {
		for (int j = 0; j < matriceNoua.getM(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] - mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}
Matrice operator*(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getN(); ++i) {
		for (int j = 0; j < matriceNoua.getM(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] * mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}
Matrice operator/(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getN(); ++i) {
		for (int j = 0; j < matriceNoua.getM(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] / mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}
bool operator==(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.m * mat1.n == mat2.m * mat2.n && mat1.elemente == mat2.elemente) {
		return true;
	}
	else {
		return false;
	}
}
bool operator<(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.m * mat1.n < mat2.m * mat2.n) {
		return true;
	}
	else {
		return false;
	}
}
bool operator<=(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.m * mat1.n <= mat2.m * mat2.n) {
		return true;
	}
	else {
		return false;
	}
}
bool operator>(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.m * mat1.n > mat2.m * mat2.n) {
		return true;
	}
	else {
		return false;
	}
}
bool operator>=(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.m * mat1.n >= mat2.m * mat2.n) {
		return true;
	}
	else {
		return false;
	}
}
bool operator!=(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.m * mat1.n != mat2.m * mat2.n) {
		return true;
	}
	else {
		return false;
	}
}
ostream& operator<<(ostream& os, const Matrice& matrix) {
	for (int i = 0; i < matrix.n; ++i) {
		for (int j = 0; j < matrix.m; ++j) {
			os << matrix.elemente[i][j];
		}
	}
	return os;
}
istream& operator>>(istream& is, const Matrice& matrix) {
	for (int i = 0; i < matrix.n; ++i) {
		for (int j = 0; j < matrix.m; ++j) {
			is >> matrix.elemente[i][j];
		}
	}
	return is;
}
