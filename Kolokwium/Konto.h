#pragma once
#include <string>
#include <iostream>

using namespace std;

class Konto
{
private:
	string imie, nazwisko;
	long nr_rachunku;
	double  stan_konta;
	
public:
	Konto(const string _imie, const string _nazwisko, const long nr_konta);
	Konto(long nr_konta);
	Konto(const Konto& obj);
	~Konto();
	double getAccountBalance();
	void setAccountBalance(double ammount);
	void changePersonName(string _imie, string _nazwisko);
	void setAccountPercent(double percent);

	// friend iostream 
	(const iostream *lib);
	void operator++(int) 
	{
		this->stan_konta = ((stan_konta * 1) / 100) + stan_konta;
	};
};

