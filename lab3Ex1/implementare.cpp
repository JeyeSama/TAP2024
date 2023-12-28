#include "mate.h"
#include <iostream>
#include <cmath>

using namespace std;
Dreapta Punct::dr;
int Punct::contorPuncteDreapta = 0;
int Punct::semiplanNegativ = 0;
int Punct::semiplanPozitiv = 0;
int Punct::contorPuncteDreapta = 0;

Dreapta::Dreapta(double m, double n) : m(m), n(n) {
}
Dreapta::Dreapta(const Dreapta& object) {
	this->m = object.m;
	this->n = object.n;
}
Dreapta::~Dreapta() {
	this->m = NULL;
	this-> n = NULL;
}
double Dreapta::getM() {
	return this->m;
}
double Dreapta::getN() {
	return this->n;
}
void Dreapta::setM(double m) {
	this->m = m;
}
void Dreapta::setN(double n) {
	this->n = n;
}

// Punctul

Punct::Punct(double x, double y) : x(x), y(y) {

	if ( (dr.getM() * x) + dr.getN() == y) {
		contorPuncteDreapta++;
		cout << "Puncte pe dreapta : " << contorPuncteDreapta << endl;
	}
	else if ((dr.getM() * x) + (dr.getN() - y) > 0) {
		semiplanPozitiv++;
		cout << "Semiplan pozitiv : " << semiplanPozitiv << endl;
	}
	else {
		cout << "Puncte pe dreapta : " << semiplanNegativ << endl;
		semiplanNegativ++;
	}
}
Punct::Punct(const Punct& object) {
	this->x = object.x;
	this->y = object.y;
	contorPuncteDreapta++;
}
Punct::~Punct() {
	this->x = NULL;
	this->y = NULL;
	contorPuncteDreapta--;
}
double Punct::getX() {
	return this->x;
}
double Punct::getY() {
	return this->y;
}
void Punct::setX(double x) {
	this->x = x;
}
void Punct::setY(double y) {
	this->x = x;
}

void Punct::afisare() {
	cout << endl << "x : " << this->x << endl;
	cout << endl << "y : " << this->y << endl;
}
