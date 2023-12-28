#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;

class Complex {
public:
    double re, im;

    Complex(int re = 0, int im = 0) :re(re), im(im) {}
    inline Complex(const Complex& c) {
        this->re = c.re;
        this->im = c.im;
    }
    ~Complex();

    inline void setRe(int a) {
        this->re = a;
    }
    inline void setIm(int a) {
        this->im = a;
    }
    inline double getRe() {
        return this->re;
    }
    inline double getIm() {
        return this->im;
    }
    Complex adunare(const Complex& c);
    Complex scadere(const Complex& c);
    Complex inmultire(const Complex& c);
    Complex impartire(const Complex& c);
    void afisare();
    friend double modul();
    friend Complex conjugat(const Complex& c);

    friend	Complex operator+(const Complex&, const Complex&);
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    friend Complex operator/(const Complex&, const Complex&);
    friend bool operator==(const Complex&, const Complex&);
    friend bool operator!=(const Complex&, const Complex&);
    friend bool operator>(const Complex&, const Complex&);
    friend bool operator>=(const Complex&, const Complex& o);
    friend bool operator<(const Complex&, const Complex&);
    friend bool operator<=(const Complex&, const Complex&);
    static void meniuFriend();

};

#endif
#pragma once
