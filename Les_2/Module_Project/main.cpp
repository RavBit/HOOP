#include "Module.h"
#include <iostream>

using namespace std;
int main()
{
	//Modules toevoegen
	Module* KGDV1 = new Module("KDGV1", 5);
	Module* KGDV2 = new Module("KDGV2", 5);
	Module* KGDV3 = new Module("KDGV3", 10);
	cout << "\n";

	//Docenten toevoegen
	Docent* edwin = new Docent("Edwin");
	Docent* valentijn = new Docent("Valentijn");
	Docent* stephan = new Docent("Stephan");
	cout << "\n";

	//Studenten toevoegen
	Student* sergi = new Student("Sergi");
	Student* bincent = new Student("Bincent");
	Student* brans = new Student("Brans");
	Student* ruben = new Student("Ruben");
	Student* oella = new Student("Oella");
	Student* sten = new Student("Sten");
	Student* burgen = new Student("Burgen");
	Student* lennert = new Student("Lennert");
	Student* exchange = new Student("Exchange");
	Student* baike = new Student("Baike");
	Student* steven = new Student("Steven");
	cout << "\n";


	//Docenten toevoegen aan vakken
	KGDV1->AddDocent(*edwin);
	KGDV2->AddDocent(*valentijn);
	KGDV3->AddDocent(*stephan);

	//Studenten in een array zetten
	Student* studentarray[10] = {
		sergi,
		bincent,
		brans,
		ruben,
		oella,
		sten,
		lennert,
		exchange,
		baike,
		steven
	};



	//For loop to divide the students in the modules
	for (int i = 0; i < 10; i++)
	{
		if (studentarray[i] == NULL)
			return 0;
		if (i <= 3)
		{
			KGDV1->AddStudent(studentarray[i]);
		}
		else if (i >= 4 && i <= 7)
		{
			KGDV2->AddStudent(studentarray[i]);
		}
		else
		{
			KGDV3->AddStudent(studentarray[i]);
		}
	}

	//Print all Students and Docenten
	KGDV1->ModuleInformation();

	KGDV1->ChangeEC(100);
	//Currently removing all students
	KGDV1->RemoveStudent(studentarray[0]);
	KGDV1->ModuleInformation();



	system("pause");
}