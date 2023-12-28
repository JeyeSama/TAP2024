#include "Puncte.h"
#include <iostream>
#include <cmath>

Punct2D::Punct2D() : x(0), y(0) {}
Punct2D::Punct2D(double x, double y) : x(x), y(y) {}
Punct2D::Punct2D(const Punct2D& obiect) {
	this->x = obiect.x;
	this->y = obiect.y;
}
Punct2D::~Punct2D() {
	this->x = NULL;
	this->y = NULL;
}
Punct2D& Punct2D::operator=(const Punct2D& punct) {
	this->x = punct.x;
	this->y = punct.y;
	return *this;
}
double distanta2Puncte(const Punct2D& punct1, const Punct2D& punct2) {
	return (sqrt(pow((punct1.x - punct2.x), 2) + pow((punct1.y - punct2.y), 2)));
}
bool Punct2D::operator<(const Punct2D& punct) const {
	return ((sqrt(pow((this->x - 0), 2) + pow((this->y - 0), 2))) < (sqrt(pow((punct.x - 0), 2) + pow((punct.y - 0), 2))));
}
bool Punct2D::operator<=(const Punct2D& punct) const {
	return ((sqrt(pow((this->x - 0), 2) + pow((this->y - 0), 2))) <= (sqrt(pow((punct.x - 0), 2) + pow((punct.y - 0), 2))));
}
bool Punct2D::operator>(const Punct2D& punct) const {
	return ((sqrt(pow((this->x - 0), 2) + pow((this->y - 0), 2))) > (sqrt(pow((punct.x - 0), 2) + pow((punct.y - 0), 2))));
}
bool Punct2D::operator>=(const Punct2D& punct) const {
	return ((sqrt(pow((this->x - 0), 2) + pow((this->y - 0), 2))) >= (sqrt(pow((punct.x - 0), 2) + pow((punct.y - 0), 2))));
}
bool Punct2D::operator==(const Punct2D& punct) const {
	return ((sqrt(pow((this->x - 0), 2) + pow((this->y - 0), 2))) == (sqrt(pow((punct.x - 0), 2) + pow((punct.y - 0), 2))));
}
bool Punct2D::operator!=(const Punct2D& punct) const {
	return ((sqrt(pow((this->x - 0), 2) + pow((this->y - 0), 2))) != (sqrt(pow((punct.x - 0), 2) + pow((punct.y - 0), 2))));
}
Punct2D Punct2D::operator+(const Punct2D& punct) const {
	Punct2D rez;
	// X(1, 2) Y(4, 6) 1+4  2+6;
	rez.x = this->x + punct.x;
	rez.y = this->y + punct.y;
	return rez;
}
Punct2D Punct2D::operator-(const Punct2D& punct) const {
	Punct2D rez;
	rez.x = this->x + punct.x;
	rez.y = this->y + punct.y;
	return rez;
}
Punct2D Punct2D::operator*(const Punct2D& punct) const {
	Punct2D rez;
	rez.x = this->x * punct.x;
	rez.y = this->y * punct.y;
	return rez;
}
Punct2D Punct2D::operator/(const Punct2D& punct) const {
	Punct2D rez;
	rez.x = this->x / punct.x;
	rez.y = this->y / punct.y;
	return rez;
}
Punct2D& Punct2D::operator+=(const Punct2D& punct) {
	this->x = this->x + punct.x;
	this->y = this->y + punct.y;
	return *this;
}
Punct2D& Punct2D::operator-=(const Punct2D& punct) {
	this->x = this->x - punct.x;
	this->y = this->y - punct.y;
	return *this;
}
Punct2D& Punct2D::operator*=(const Punct2D& punct) {
	this->x = this->x * punct.x;
	this->y = this->y * punct.y;
	return *this;
}
Punct2D& Punct2D::operator/=(const Punct2D& punct) {
	this->x = this->x / punct.x;
	this->y = this->y / punct.y;
	return *this;
}
Punct2D& Punct2D::operator++() {
	this->x++;
	this->y++;
	return *this;
}
Punct2D Punct2D::operator++(int dummy) {
	Punct2D init = *this;
	this->x++;
	this->y++;
	return init;
}
Punct2D& Punct2D::operator--() {
	this->x--;
	this->y--;
	return *this;
}
Punct2D Punct2D::operator--(int dummy) {
	Punct2D init = *this;
	this->x--;
	this->y--;
	return init;
}
ostream& Punct2D::operator<<(ostream& os) const {
	os << "Coordonata x : " << this->x << endl << "Coordonata y : " << this->y << endl;
	return os;
}
istream& Punct2D::operator>>(istream& is) {
	cout << "Introduceti coordonata x : ";
	is >> this->x;
	cout << "Introduceti coordonata y : ";
	is >> this->y;
	return is;
}
Punct3D::Punct3D(double z) : Punct2D(), z(z)  {}
Punct3D::Punct3D(const Punct3D& obiect) {
	Punct2D::Punct2D(obiect);
	this->z = obiect.z;
}
Punct3D::~Punct3D() {
	Punct2D::~Punct2D();
	this->z = NULL;
}
Punct3D& Punct3D::operator=(const Punct3D& punct) {
	Punct2D::operator=(punct);
	this->z = punct.z;
	return *this;
}
Punct3D Punct3D::operator+(const Punct3D& punct) const {
	Punct2D::operator+(punct);
	Punct3D temp;
	temp = this->z + punct.z;
	return temp;
}
Punct3D Punct3D::operator-(const Punct3D& punct) const {
	Punct2D::operator-(punct);
	Punct3D temp;
	temp = this->z - punct.z;
	return temp;
}
Punct3D Punct3D::operator*(const Punct3D& punct) const {
	Punct2D::operator*(punct);
	Punct3D temp;
	temp = this->z * punct.z;
	return temp;
}
Punct3D Punct3D::operator/(const Punct3D& punct) const {
	Punct2D::operator/(punct);
	Punct3D temp;
	temp = this->z / punct.z;
	return temp;
}
Punct3D& Punct3D::operator+=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z += punct.z;
	return *this;
}
Punct3D& Punct3D::operator-=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z -= punct.z;
	return *this;
}
Punct3D& Punct3D::operator*=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z *= punct.z;
	return *this;
}
Punct3D& Punct3D::operator/=(const Punct3D& punct) {
	Punct2D::operator+=(punct);
	this->z /= punct.z;
	return *this;
}
bool Punct3D::operator<(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) < Punct3D::operator<(punct)));
}
bool Punct3D::operator<=(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) <= Punct3D::operator<(punct)));
}
bool Punct3D::operator>(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) > Punct3D::operator<(punct)));
}
bool Punct3D::operator>=(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) >= Punct3D::operator<(punct)));
}
bool Punct3D::operator==(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) == Punct3D::operator<(punct)));
}
bool Punct3D::operator!=(const Punct3D& punct) const {
	return ((sqrt(pow((this->z - 0), 2) + pow((punct.z - 0), 2)) != Punct3D::operator<(punct)));
}
Punct3D& Punct3D::operator++() {
	Punct2D::operator++();
	this->z++;
	return *this;
}
Punct3D Punct3D::operator++(int dummy) {
	Punct2D::operator++(dummy);
	Punct3D init = *this;
	this->z++;
	return init;
}
Punct3D& Punct3D::operator--() {
	Punct2D::operator--();
	this->z--;
	return *this;
}
Punct3D Punct3D::operator--(int dummy) {
	Punct2D::operator--(dummy);
	Punct3D init = *this;
	this->z--;
	return init;
}
ostream& Punct3D::operator<<(ostream& os) const {
	Punct2D::operator<<(os);
	os << "Coordonata z : " << this->z << endl;
	return os;
}
istream& Punct3D::operator>>(istream& is) {
	Punct2D::operator>>(is);
	cout << "Introduceti coordonata z : ";
	is >> this->z;
	return is;
}
double distanta(const Punct3D& punct, const Punct3D& punct2) {
	return (sqrt(pow((punct.x - punct2.x), 2) + pow((punct.y - punct2.y), 2) + pow((punct.z - punct2.z), 2)));
}