#pragma once
#ifndef MATE_H
#define MATE_H
#include <iostream>

using namespace std;

class Dreapta {

	private : 
		double m;
		double n;

	public:
		Dreapta(double n = 0, double m = 1);
		Dreapta(const Dreapta& object);
		~Dreapta();
		double getM();
		double getN();
		void setM(double m);
		void setN(double n);
};
class Punct {

	private :
		double x; // Abscisa
		double y; // Ordonata
		static Dreapta dr;
		static int semiplanPozitiv;
		static int semiplanNegativ;
		static int contorPuncteDreapta;

	public :
		Punct(double x, double y);
		Punct(const Punct& object);
		~Punct();
		double getX();
		double getY();
		void setX(double x);
		void setY(double y);
		void afisare();
		inline static int getInstance() {
			return contorPuncteDreapta;
		}
		friend class Dreapta;
		friend double distanta(Punct unu, Punct doi) {

			double distanta = sqrt((pow((doi.y - doi.x), 2)) + (pow((unu.y - unu.x), 2)));
			return distanta;
		}
};














#endif
