#include <iostream>
#include <string>
#include <vector>

#include "Bankrekening.h"
#include "Datum.h"

using namespace std;
Bankrekening::Bankrekening(float saldo, vector<Transactie> tHistorie)
{
	this->saldo = saldo;
	this->tHistorie = tHistorie;
}

Bankrekening Bankrekening::operator+(const Transactie& rhs)
{
	cout << "Nieuwe transactie: " << rhs.getSaldo() << " is er bijgevoegd op:";
	rhs.getDatum().GetDatum();
	float _nieuwSaldo = saldo + rhs.getSaldo();
	tHistorie.push_back(rhs);
	nieuwSaldo(_nieuwSaldo);
	return *this;

};
Bankrekening Bankrekening::operator-(const Transactie& rhs)
{
	cout << "Nieuwe transactie: " << rhs.getSaldo() << " is er afgehaald op:";
	rhs.getDatum().GetDatum();
	float _nieuwSaldo = saldo - rhs.getSaldo();
	tHistorie.push_back(rhs);
	nieuwSaldo(_nieuwSaldo);
	return *this;

};

ostream & operator<<(ostream & lhs, const Bankrekening& rekening)
{
	rekening.getSaldo();
	rekening.getOverzicht();
	return lhs;
}

float Bankrekening::nieuwSaldo(float nieuwsaldo) const
{
	saldo = nieuwsaldo;
	return saldo;
};
void Bankrekening::getOverzicht() const
{
	for (int i = 0; i < tHistorie.size(); i++)
	{
		if (tHistorie[i].getState() == 1)
		{
			cout << "U heeft het volgende bedrag gestort: " << tHistorie[i].getSaldo() << " op:";
		}
		if (tHistorie[i].getState() == 0)
		{
			cout << "U heeft het volgende bedrag opgenomen: " << tHistorie[i].getSaldo() << " op:";
		}
		tHistorie[i].getDatum().GetDatum();
	}
};

float Bankrekening::getSaldo() const
{
	cout << "Uw saldo is: " << saldo << endl;
	return saldo;
};