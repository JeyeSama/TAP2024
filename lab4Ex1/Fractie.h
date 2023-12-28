#pragma once
#ifndef _FRACTIE_H
#define _FRACTIE_H
#include <iostream>
using namespace std;

class Fractie {
private:
	int numarator;
	int numitor;

public:
	Fractie();
	Fractie(int numarator);
	Fractie(int numarator, int numitor);
	Fractie(const Fractie&);
	~Fractie();
	inline int getNumitor() const {
		return this->numitor;
	}
	inline int getNumarator() const {
		return this->numarator;
	}
	inline void setNumitor(int numitor) {
		this->numitor = numitor;
	}
	void setNumarator(int numarator) {
		this->numarator = numarator;
	}
	Fractie operator+(const Fractie& f1) const;
	Fractie operator-(const Fractie& f1) const;
	Fractie operator*(const Fractie& f1) const;
	Fractie operator/(const Fractie& f1) const;
	Fractie& operator=(const Fractie& o);

	bool operator!=(const Fractie& f) const;
	bool operator<(const Fractie& f) const;
	bool operator>(const Fractie& f) const;
	bool operator<=(const Fractie& f) const;
	bool operator>=(const Fractie& f) const;
	bool operator==(const Fractie& f) const;

	Fractie& operator+=(const Fractie& f);
	Fractie& operator-=(const Fractie& f);
	Fractie& operator*=(const Fractie& f);
	Fractie& operator/=(const Fractie& f);

	Fractie& operator++();
	Fractie operator++(int dummy);
	Fractie& operator--();
	Fractie operator--(int dummy);

	ostream& operator<<(ostream& o) const;
	istream& operator>>(istream& i);
	
	operator double();

	//// Friends
	//friend Fractie operator+(const Fractie& f1, const Fractie& f2);
	//friend Fractie operator-(const Fractie& f1, const Fractie& f2);
	//friend Fractie operator*(const Fractie& f1, const Fractie& f2);
	//friend Fractie operator/(const Fractie& f1, const Fractie& f2);

	//friend bool operator!=(const Fractie& f1, const Fractie& f2);
	//friend bool operator==(const Fractie& f1, const Fractie& f2);
	//friend bool operator>=(const Fractie& f1, const Fractie& f2);
	//friend bool operator<=(const Fractie& f1, const Fractie& f2);
	//friend bool operator>(const Fractie& f1, const Fractie& f2);
	//friend bool operator<(const Fractie& f1, const Fractie& f2);

	//friend ostream& operator<<(ostream& o, const Fractie& f);
	//friend istream& operator>>(istream& i, const Fractie& f);
};
#endif // !INCLUDE_FRACTIE_H
