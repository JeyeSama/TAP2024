#pragma once
#ifndef MATRICE_H
#define MATRICE_H
#include<iostream>
using namespace std;

class Matrice {

private :
	int n; // Nr linii
	int m; // Nr coloane
public :
	int** elemente;
	Matrice();
	Matrice(int n, int m);
	Matrice(const Matrice& obiect);
	~Matrice();
	inline int getN() const {
		return this->n;
	}
	inline int getM() const {
		return this->m;
	}
	inline void setN(int n) {
		this->n = n;
	}
	inline void setM(int m) {
		this->m = m;
	}
	int* operator[](int index) const;
	Matrice operator+(const Matrice& matrix);
	Matrice operator-(const Matrice& matrix);
	Matrice operator*(const Matrice& matrix);
	Matrice operator/(const Matrice& matrix);

	Matrice& operator=(const Matrice& matrix);
	Matrice& operator+=(const Matrice& matrix);
	Matrice& operator-=(const Matrice& matrix);
	Matrice& operator*=(const Matrice& matrix);
	Matrice& operator/=(const Matrice& matrix);

	bool operator==(const Matrice& matrix) const;
	bool operator<(const Matrice& matrix) const;
	bool operator<=(const Matrice& matrix) const;
	bool operator>(const Matrice& matrix) const;
	bool operator>=(const Matrice& matrix) const;
	bool operator!=(const Matrice& matrix) const;

	Matrice& operator++();
	Matrice& operator--();
	Matrice operator++(int dummy);
	Matrice operator--(int dummy);

	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);

	// Friends
	friend Matrice operator+(const Matrice& mat1, const Matrice& mat2);
	friend Matrice operator-(const Matrice& mat1, const Matrice& mat2);
	friend Matrice operator*(const Matrice& mat1, const Matrice& mat2);
	friend Matrice operator/(const Matrice& mat1, const Matrice& mat2);

	friend bool operator==(const Matrice& mat1, const Matrice& mat2);
	friend bool operator<(const Matrice& mat1, const Matrice& mat2);
	friend bool operator<=(const Matrice& mat1, const Matrice& mat2);
	friend bool operator>(const Matrice& mat1, const Matrice& mat2);
	friend bool operator>=(const Matrice& mat1, const Matrice& mat2);
	friend bool operator!=(const Matrice& mat1, const Matrice& mat2);

	friend ostream& operator<<(ostream& os, const Matrice& matrix);
	friend istream& operator>>(istream& is, const Matrice& matrix);
};

#endif // MATRICE_H