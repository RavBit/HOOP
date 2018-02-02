#pragma once
#include <vector>
#include <iostream>
#include "Transactie.h"

using namespace std;

class Bankrekening
{
public:
	Bankrekening(float saldo, vector<Transactie> tHistorie);
	Bankrekening operator+(const Transactie& rhs);
	Bankrekening operator-(const Transactie& rhs);
	friend ostream& operator<< (ostream& lhs, const Bankrekening& bankrekening);

	float getSaldo() const;
	void getOverzicht() const;
	float nieuwSaldo(float nieuwSaldo) const;
private:
	mutable float saldo;
	vector<Transactie> tHistorie;
};