#pragma once
#include <iostream>
#include <string>
#include "Grid.h"
#include "Module.h"


using namespace std;
/*

Je zou het lesrooster ook kunnen onderverdelen in een grid. Deze heb ik hieronder beschreven

De volgende variable zouden voor zo'n project nodig zijn:


Voor de module:
Modulenaam
Docentnaam
Lokaal
Starttijd
Eindttijd

Voor de grid:
Grootte
Aantal uren
Eventuele pauzes

Voor de user:
Misschien de roosters op klassen, student of docent kunnen verdelen?

Functies:
Modules toevoegen
Grid tekenen
Deze sorteren op klas, docent, student
Modules aanpassen/verwijderen

*/

int main()
{
	Module module = Module();
	string modulename;
	int starttime, duration;

	//UUR SYSTEEM
	cout << "Naam van de Module?:" << endl;
	cin >> modulename;
	cout << "Starttijd (0 tm 2400):" << endl;
	cin >> starttime;
	cout << "Duur (in minuten):" << endl;
	cin >> duration;

	//GRID SYSTEEM
	cout << "Naam van de Module?:" << endl;
	cin >> modulename;
	cout << "Welk uur start dit rooster? (1 tm 10):" << endl;
	cin >> starttime;
	cout << "Duur (in roosteruren):" << endl;
	cin >> duration;

	module.InsertModule(modulename, starttime, duration);
}

