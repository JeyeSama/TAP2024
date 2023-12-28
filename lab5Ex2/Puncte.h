#pragma once
#ifndef Puncte_h
#define Puncte_h
#include <iostream>
using namespace std;

class Punct2D {
protected : 
	double x;
	double y;

			//2	3   5  7
public:  // (1, 2) (4, 6) 1+4  2+6;
	Punct2D();
	Punct2D(double x, double y);
	Punct2D(const Punct2D& obiect);
	~Punct2D();
	friend double distanta2Puncte(const Punct2D& punct1, const Punct2D& punct2);
	// Operatori 2D
	Punct2D& operator=(const Punct2D& punct);
	bool operator<(const Punct2D& punct) const;
	bool operator<=(const Punct2D& punct) const;
	bool operator>(const Punct2D& punct) const;
	bool operator>=(const Punct2D& punct) const;
	bool operator==(const Punct2D& punct) const;
	bool operator!=(const Punct2D& punct) const;
	Punct2D operator+(const Punct2D& punct) const;
	Punct2D operator-(const Punct2D& punct) const;
	Punct2D operator*(const Punct2D& punct) const;
	Punct2D operator/(const Punct2D& punct) const;
	Punct2D& operator+=(const Punct2D& punct);
	Punct2D& operator-=(const Punct2D& punct);
	Punct2D& operator*=(const Punct2D & punct);
	Punct2D& operator/=(const Punct2D& punct);
	Punct2D& operator++();
	Punct2D operator++(int dummy);
	Punct2D& operator--();
	Punct2D operator--(int dummy);
	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);
};

class Punct3D : public Punct2D {
	private :
		double z; // ???

	public:
		Punct3D(double z = 0);
		Punct3D(const Punct3D& obiect);
		~Punct3D();
		inline double getZ() const {
			return this->z;
		}
		inline void setZ(double z) {
			this->z = z;
		}
		friend double distanta(const Punct3D& punct1, const Punct3D& punct2);
		// Operatori 3D
		Punct3D& operator=(const Punct3D& punct);
		bool operator<(const Punct3D& punct) const;
		bool operator<=(const Punct3D& punct) const;
		bool operator>(const Punct3D& punct) const;
		bool operator>=(const Punct3D& punct) const;
		bool operator==(const Punct3D& punct) const;
		bool operator!=(const Punct3D& punct) const;
		Punct3D operator+(const Punct3D& punct) const;
		Punct3D operator-(const Punct3D& punct) const;
		Punct3D operator*(const Punct3D& punct) const;
		Punct3D operator/(const Punct3D& punct) const;
		Punct3D& operator+=(const Punct3D& punct);
		Punct3D& operator-=(const Punct3D& punct);
		Punct3D& operator*=(const Punct3D& punct);
		Punct3D& operator/=(const Punct3D& punct);
		Punct3D& operator++();
		Punct3D operator++(int dummy);
		Punct3D& operator--();
		Punct3D operator--(int dummy);
		ostream& operator<<(ostream& os) const;
		istream& operator>>(istream& is);
};
#endif