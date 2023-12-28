#include "complex.h"
#include <iostream>
#include <cmath>

using namespace std;
Complex::Complex() {
	this->real = 0;
	this->imaginar = 0;

}
Complex::Complex(double real, double imaginar) : real(real), imaginar(imaginar) {

}
Complex::Complex(const Complex& object) {
	this->real = object.real;
	this->imaginar = object.imaginar;
}
Complex::~Complex() {
	this->real = NULL;
	this->imaginar = NULL;
}
Complex Complex::adunare(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real + b.real;
	rezultat.imaginar = a.imaginar + b.imaginar;
	return rezultat;
}
Complex Complex::scadere(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real - b.real;
	rezultat.imaginar = a.imaginar - b.imaginar;
	return rezultat;
}
void Complex::inmulitre(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = a.real * b.real - a.imaginar * b.imaginar;
	rezultat.imaginar = a.real * b.imaginar + b.real * a.imaginar;
	cout << "Inmultirea numerelor complexe este : " << rezultat.real << " + " << rezultat.imaginar << "i" << endl;
}

void Complex::impartire(Complex a, Complex b) {
	Complex rezultat;
	rezultat.real = ((a.real * b.real) + (a.imaginar * b.imaginar)) / (b.real * b.real + b.imaginar * b.imaginar);
	rezultat.imaginar = ((a.imaginar * b.real) - (a.real * b.imaginar)) / (b.real * b.real + b.imaginar * b.imaginar);
	cout << "Impartirea numerelor complexe este : " << rezultat.real << " + " << rezultat.imaginar << "i" << endl;
}
void modul(Complex a) {
	double modul;
	modul = sqrt(pow(a.real, 2) + pow(a.imaginar, 2));
	cout << "Modulul numarului complex care are partea reala " <<a.getReal() << " si cea imaginara " << a.getImaginar()<< "i este : " << modul << endl;
}
Complex conjugat(Complex a) {
	Complex conj;
	conj.imaginar = -1 * a.imaginar;
	conj.real = a.real;
	return conj;
}

