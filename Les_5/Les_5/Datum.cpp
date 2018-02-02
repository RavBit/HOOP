#include "Datum.h"
#include <iostream>
#include <string>

using namespace std;

Datum::Datum(int dag, int maand, int jaar)
{
	this->dag = dag;
	this->maand = maand;
	this->jaar = jaar;
};

void Datum::GetDatum()
{
	string d = to_string(dag);
	string m = to_string(maand);
	string j = to_string(jaar);
	string returnstring = " " + d + " - " + m + " - " + j;
	cout << returnstring << endl;
	return;
};