#pragma once
#ifndef LSI_H
#define LSI_H

class Nod {
		int info;
		Nod* suc;
		friend class List;
		Nod(int val = 0) :info(val), suc(nullptr) {}
		Nod(int val, Nod* tempNext) :info(val), suc(tempNext) {}
	public :
	inline int getInfo() {
		return this->info;
	}
};

class List {
	private :
		Nod* top;
	public :
		List() :top(nullptr)
		{
		}
		void inserareInceput(int infoNou);
		void inserareSfarsit(int infoNou);
		void inserareInterior(int infoNou);
		void traversare();
		void stergereInceput();
		void stergereSfarsit();
		void stergereInterior();
		void init();
		Nod* cautare(int infoCautat);
		void actualizare(int infoCautat, int infoNou);


};	



#endif
