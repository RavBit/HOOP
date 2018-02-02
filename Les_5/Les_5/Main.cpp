#pragma once
#include <iostream>
#include "Bankrekening.h"
#include "Transactie.h"
#include "Datum.h"

int main()
{
	vector<Transactie> transacties;
	//Laatste variable is een state. Ik wist op dit moment niet hoe ik deze makkelijk kon verwerken (aangezien we + en - operators moesten gebruiken)
	Transactie transactie = Transactie(100, Datum(10, 10, 2017), 1);
	Transactie transactie1 = Transactie(100, Datum(10, 10, 2017), 0);
	Bankrekening Rekening = Bankrekening(500, transacties);
	Rekening + transactie;
	Rekening - transactie1;

	cout << Rekening << endl;

	system("pause");
	return 0;
};