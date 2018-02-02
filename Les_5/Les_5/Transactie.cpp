#include "Transactie.h"
#include "Datum.h"

//Needed to give the constructor a default value or it didn't work
Transactie::Transactie(float _saldo, Datum _datum, int _state) : datum(0, 0, 0)
{
	this->datum = _datum;
	this->saldo = _saldo;
	this->state = _state;
}


float Transactie::getSaldo() const
{
	return Transactie::saldo;
};

Datum Transactie::getDatum() const
{
	return datum;
};

int Transactie::getState() const
{
	return state;
};