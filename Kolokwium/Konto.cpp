#include "Konto.h"
#include <iostream>
#include <vector>

using namespace std;

Konto::Konto(const string _imie, const string _nazwisko, const long _nr_rachunku)
{
	this->imie = _imie;
	this->nazwisko = _nazwisko;
	this->nr_rachunku = _nr_rachunku;
	stan_konta = 0;
}

Konto::Konto(const Konto& obj)
{
	this->imie = obj.imie;
	this->nazwisko = obj.nazwisko;
	this->nr_rachunku = obj.nr_rachunku;
	this->stan_konta = obj.stan_konta;
}

Konto::Konto(long _nr_rachunku)
{
	this->imie = ""; this->nazwisko = ""; this->stan_konta = 0;
	this->nr_rachunku = _nr_rachunku;
}

Konto::~Konto()
{
	cout << endl << "Using destructor.." << endl;
}

double Konto::getAccountBalance()
{
	return this->stan_konta;
}

void Konto::setAccountBalance(double ammount)
{
	this->stan_konta = ammount;
}

void Konto::setAccountPercent(double percent)
{
	this->stan_konta = ((stan_konta * percent) / 100) + stan_konta;
}

void Konto::changePersonName(string _imie, string _nazwisko)
{
	this->imie = _imie;
	this->nazwisko = _nazwisko;
}