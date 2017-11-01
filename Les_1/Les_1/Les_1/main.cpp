#pragma once
#include <iostream>
#include <string>
#include "Grid.h"

/*

De volgende objecten spelen een rol:
- Docent
- Student
- Modules
- Lokalen
- Grid (Uren)

De objecten die er moeten zijn, zijn de Student, Modules en Lokalen. Deze moeten als objecten ook attributen zoals lokaalnummers, namen en eventuele modules bevatten.


De functies:
	Lesrooster instantiaten en ook aanpassen. Dit zou makkelijk in een grid vorm kunnen.


De relaties:
Het lesrooster zal altijd doormiddel van een grid en het aantal uren objecten opvragen. Denk aan het object Student daar zitten weer vakken bij verbonden. De vakken zijn 
ingeroosterd op een bepaald moment en dit is weer gekoppeld aan een lokaal. De docent die een bepaald vak geeft word hier ook aan gekoppeld. Met deze inrichting kan je
makkelijk alles aan eklaar knopen en de Docent of Student aan modules koppelen. Deze staan op een bepaalde plek (tijd) in het rooster en dit word gedrawd in het grid.

*/
Docent Docent;
Student Student;
Module Module;

int tijden, gridsize;
string teachername, studentname; 

int main()
{

}

