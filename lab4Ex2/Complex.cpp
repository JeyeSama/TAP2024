#include "complex.h"
#include<iostream>
#include<math.h>
using namespace std;

Complex::~Complex() {}

Complex Complex::adunare(const Complex& c) {
    Complex rez;
    rez.re = this->re + c.re;
    rez.im = this->im + c.im;

    return rez;
}
Complex Complex::scadere(const Complex& c) {
    Complex rez;


    rez.re = this->re - c.re;
    rez.im = this->im - c.im;

    return rez;
}
Complex Complex::inmultire(const Complex& c) {
    Complex rez;

    rez.re = this->re * c.re - this->im * c.im;
    rez.im = this->im + c.im + this->im * c.re;

    return rez;
}
Complex Complex::impartire(const Complex& c) {
    Complex rez;

    rez.im = pow(this->re, 2) + pow(c.im, 2);
    rez.re = ((this->re * c.re) + (this->im * c.im)) / rez.im + ((c.re * this->im - this->re * c.im) / rez.im);

    return rez;
}

Complex conjugat(const Complex& c) {
    Complex rez;
    rez.re = c.re;
    rez.im = -c.im;
    return rez;
}

void Complex::afisare() {
    if (this->re == 0 && this->im == 0)
        cout << 0 << endl;
    else
        if (this->re == 0 && this->im != 0) {
            cout << this->im << "i" << endl;
        }
        else
            if (this->re != 0 && this->im == 0) {
                cout << this->re;
            }
            else
                if (this->re != 0 && this->im != 0) {
                    if (this->im > 0)
                        cout << this->re << "+" << this->im << "i" << endl;
                    else
                        if (this->im < 0)
                            cout << this->re << this->im << "i" << endl;
                }
}

Complex operator+(const Complex& c1, const Complex& c2) {
    Complex rez;
    rez.re = c1.re + c2.re;
    rez.im = c1.im + c2.im;
    return rez;
}

Complex operator-(const Complex& c1, const Complex& c2) {
    Complex rez;
    rez.re = c1.re - c2.re;
    rez.im = c1.im - c2.im;
    return rez;
}

Complex operator*(const Complex& c1, const Complex& c2) {
    Complex rez;
    rez.re = c1.re * c2.re - c1.im * c2.im;
    rez.im = c1.im + c2.im + c1.im * c2.re;
    return rez;
}

Complex operator/(const Complex& c1, const Complex& c2) {
    Complex rez;
    rez.im = pow(c1.re, 2) + pow(c2.im, 2);
    rez.re = ((c1.re * c2.re) + (c1.im * c2.im)) / rez.im + ((c2.re * c1.im - c1.re * c2.im) / rez.im);
    return rez;
}

bool operator==(const Complex& c1, const Complex& c2) {
    if (c1.re == c2.re && c1.im == c2.im)
        return true;
    else return false;
}

bool operator!=(const Complex& c1, const Complex& c2) {
    if (c1.re != c2.re || c1.im != c2.im)
        return true;
    else return false;
}

bool operator>(const Complex& c1, const Complex& c2) {
    if (c1.re == c2.re && c1.im > c2.im)
        return true;
    else if (c1.re > c2.re && (c1.im >= c2.im || c1.im < c2.im))
        return true;
    else return false;
}

bool operator>=(const Complex& c1, const Complex& c2) {
    if (c1.re == c2.re && c1.im >= c2.im)
        return true;
    else if (c1.re >= c2.re && (c1.im <= c2.im || c1.im > c2.im))
        return true;
    else return false;
}

bool operator<(const Complex& c1, const Complex& c2) {
    if (c1.re == c2.re && c1.im < c2.im)
        return true;
    else if (c1.re < c2.re && (c1.im <= c2.im || c1.im > c2.im))
        return true;
    else return false;
}

bool operator<=(const Complex& c1, const Complex& c2) {
    if (c1.re == c2.re && c1.im <= c2.im)
        return true;
    else if (c1.re <= c2.re && (c1.im <= c2.im || c1.im > c2.im))
        return true;
    else return false;
}

void Complex::meniuFriend() {
    Complex f1, f2;
    int re, im;

    cout << "Introduceti partea reala : ";
    cin >> re;
    cout << "Introduceti partea imaginara : ";
    cin >> im;

    f1.setRe(re);
    f1.setIm(im);

    cout << "Introduceti partea reala : ";
    cin >> re;
    cout << "Introduceti partea imaginara : ";
    cin >> im;

    f2.setRe(re);
    f2.setIm(im);

    int subopt = -1;

    cout << "0.Exit" << endl << "1.Operator + " << endl << "2.Operator - " << endl << "3.Operator * " << endl << "4.Operator / " << endl << "5.Operator == " << endl << "6.Operator != " << endl << "7.Operator > " << endl << "8.Operator >= " << endl << "9.Operator < " << endl << "10.Operator <= " << endl;

    while (subopt != 0) {

        cout << "Introduceti optiunea dorita : ";
        cin >> subopt;
        switch (subopt) {
        case 0: {
            cout << "Bye";
            exit(0);
        }
        case 1: {
            Complex f3 = f1 + f2;
            f3.afisare();
            break;
        }
        case 2: {
            Complex f3 = f1 - f2;
            f3.afisare();
            break;
        }
        case 3: {
            Complex f3 = f1 * f2;
            f3.afisare();
            break;
        }
        case 4: {
            Complex f3 = f1 / f2;
            f3.afisare();
            break;
        }

        case 5: {
            cout << boolalpha << operator==(f1, f2) << endl;
            break;
        }
        case 6: {
            cout << boolalpha << operator!=(f1, f2) << endl;
            break;
        }
        case 7: {
            cout << boolalpha << operator>(f1, f2) << endl;
            break;
        }
        case 8: {
            cout << boolalpha << operator>=(f1, f2) << endl;
            break;
        }
        case 9: {
            cout << boolalpha << operator<(f1, f2) << endl;
            break;
        }
        case 10: {
            cout << boolalpha << operator<=(f1, f2) << endl;
            break;
        }

        default: {
            cout << "Alegeti o optiune valida!" << endl;
            break;
        }
        }
    }
}

