#include <iostream>
#include <string>
#include <vector>
#include "Datum.h"

#pragma once
class Transactie
{
public:
	Transactie(float amount, Datum _datum, int _state);
	Datum getDatum() const;
	float getSaldo() const;
	int getState() const;
private:
	Datum datum;
	float saldo;
	int state;
};