#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>

using namespace std;
class Fractie {
	private:
	int numaratorul;
	int numitorul;

	public:
		Fractie();
		Fractie(int numaratorul);
		Fractie(int numaratorul, int numitorul);
		Fractie(const Fractie& obiect);
		~Fractie();
		int getNumarator();
		int getNumitor();
		void adunare(Fractie a, Fractie b);
		void scadere(Fractie a, Fractie b);
		void inmultire(Fractie a, Fractie b);
		void impartire(Fractie a, Fractie b);
		void simplifica();// Cu cmmdc pana nu se mai poate
		int cmmmc(Fractie a, Fractie b);
		static int cmmdc(int a, int b) {
			while (a != b) {
				if (a > b) {
					a -= b;
				}
				else {
					b -= a;
				}
			}
			return a;
		}
		double reciproc();
		bool egal(const Fractie&);
		void print();
};
#endif