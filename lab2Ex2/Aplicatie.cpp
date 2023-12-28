#include "AplicatieBanca.h"

// CLASA CONT BANCAR
// Constructor default
ContBancar::ContBancar(string numarCont, float suma, string moneda) {
	this->suma = suma;
	this->moneda = moneda;
	this->numarCont = numarCont;
}
// Constructor de copiere
ContBancar::ContBancar(const ContBancar& obiect) {
	this->suma = obiect.suma;
	this->moneda = obiect.moneda;
	this->numarCont = obiect.numarCont;
}
ContBancar::ContBancar() {

}
ContBancar::~ContBancar() {
	this->suma = NULL;
	this->moneda = "";
	this->numarCont = "";
}
void ContBancar::setSuma(float suma) {
	this->suma = suma;
}
void ContBancar::setMoneda(string moneda) {
	this->moneda = moneda;
}
void ContBancar::setNumarCont(string numarCont) {
	this->numarCont = numarCont;
}
float ContBancar::getSuma() {
	return this->suma;
}
string ContBancar::getMoneda() {
	return this->moneda;
}
string ContBancar::getNumarCont() {
	return this->numarCont;
}
void ContBancar::transfer(ContBancar& obiect, float suma) {
	this->suma -= suma;
	obiect.suma += suma;
}
float ContBancar::getDobanda() {
	if (this->moneda == "RON") {
		if (this->suma < 500)
		{
			return (0.3 / 100) * this->suma;
		}
		else if (this->suma > 500) {
			return (0.8 / 100) * this->suma;
		}
	}
	else if (this->moneda == "EUR") {
		return (0.1 / 100) * this->suma;
	}
	else
		return 0;
}
float ContBancar::getSumaTotala() {
	return (this->suma + getDobanda());
}
void ContBancar::depunere(float suma) {
	this->suma += suma;
}
void ContBancar::extragere(float suma) {
	this->suma -= suma;
}
void ContBancar::afisareDateCont() {
	cout << endl << "Datele contului sunt : " << endl << "Suma : " << suma << endl << "Moneda : " << moneda << endl << "Numarul contului : " << numarCont << endl;
}

// CLASA CLIENT
Client::Client(string nume, string prenume, string adresa, unsigned nrConturi, ContBancar *conturi) {
	this->nume = nume;
	this->prenume = prenume;
	this->adresa = adresa;
	this->nrConturi = nrConturi;
	this->conturi = conturi;
}
Client::Client(const Client& obiect) {
	this->nume = obiect.nume;
	this->prenume = obiect.prenume;
	this->adresa = obiect.adresa;
	this->nrConturi = obiect.nrConturi;
	this->conturi = obiect.conturi;
	for (int i = 0; i < nrConturi; i++) {
		this->conturi[i] = obiect.conturi[i];
	}
}
Client::Client() {

}
Client::~Client() {
	this->nume = "";
	this->prenume = "";
	this->adresa = "";
	this->nrConturi = NULL;
	delete[] this->conturi;
}
void Client::setNume(string nume) {
	this->nume = nume;
}
void Client::setPrenume(string prenume) {
	this->prenume = prenume;
}
void Client::setAdresa(string adresa) {
	this->adresa = adresa;
}
void Client::setNrConturi(unsigned nrConturi) {
	this->nrConturi = nrConturi;
}
string Client::getNume() {
	return this->nume;
}
string Client::getPrenume() {
	return this->prenume;
}
string Client::getAdresa() {
	return this->adresa;
}
unsigned Client::getNrConturi() {
	return this->nrConturi;
}
void Client::afisareDateClient() {
	for (int i = 0; i < nrConturi; i++) {
		conturi[i].afisareDateCont();
	}
}
void Client::setCont(ContBancar* conturi)
{
	this->conturi = conturi;
}

//CLASA BANCA
Banca::Banca(string codBanca, unsigned nrClienti, Client* clienti) {
	this->codBanca = codBanca;
	this->nrClienti = nrClienti;
	this->clienti = clienti;
}
Banca::Banca(const Banca& obiect) {
	this->codBanca = obiect.codBanca;
	this->nrClienti = obiect.nrClienti;
	this->clienti = obiect.clienti;
	for (int i = 0; i < nrClienti; i++) {
		this->clienti[i] = obiect.clienti[i];
	}
}
Banca::~Banca() {
	this->codBanca = "";
	this->nrClienti = NULL;
	delete[] this->clienti;
}
void Banca::setCodBanca(string codBanca) {
	this->codBanca = codBanca;
}
void Banca::setNrClienti(unsigned nrClienti) {
	this->nrClienti = nrClienti;
}
string Banca::getCodBanca() {
	return this->codBanca;
}
unsigned Banca::getNrClienti() {
	return this->nrClienti;
}
void Banca::afisareDateBanca() {
	for (int i = 0; i < nrClienti; i++) {
		clienti[i].afisareDateClient();
	}
}
