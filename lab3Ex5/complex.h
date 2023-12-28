#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex {
	private :
		double real;
		double imaginar;
	public :
		Complex();
		Complex(double real, double imaginar);
		Complex(const Complex& object);
		~Complex();
		inline void setReal(double real) {
			this->real = real;
		}
		inline void setImaginar(double imaginar) {
			this->imaginar = imaginar;
		}
		inline double getReal() {
			return this->real;
		}
		inline double getImaginar() {
			return this->imaginar;
		}
		Complex adunare(Complex a, Complex b);
		Complex scadere(Complex a, Complex b);
		void inmulitre(Complex a, Complex b);
		void impartire(Complex a, Complex b);
		friend void modul(Complex a);
		friend Complex conjugat(Complex a);
};
#endif 
