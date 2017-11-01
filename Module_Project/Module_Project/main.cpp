#include "Modules.h"
#include <iostream>
int main()
{
	//Docenten toevoegen
	Docent* edwin = new Docent("Edwin");
	Docent* richard = new Docent("Richard");
	Docent* valentijn = new Docent("Valentijn");
	Docent* stephan = new Docent("Stephan");
	std::cout << "\n";

	//Studenten toevoegen
	Student* Sergi = new Student("Sergi");
	Student* Bincent = new Student("Bincent");
	Student* Brans = new Student("Brans");
	Student* Ruben = new Student("Ruben");
	Student* Oella = new Student("Oella");
	Student* Sten = new Student("Sten");
	Student* Burgen = new Student("Burgen");
	std::cout << "\n";

	Student *testarray[7] = {
		Sergi,
		Bincent,
		Brans,
		Ruben,
		Oella,
		Sten,
		Burgen
	};
	std::cout << testarray[0];
	system("pause");
}