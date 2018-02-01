#pragma once

#include <iostream>
#include <sstream>
#include "Module.h"
#include <vector>
#include <string>

using namespace std;

Module::Module(string name, int ecPunten) {
	this->name = name;
	this->ecPunten = ecPunten;
	auto s = std::to_string(ecPunten);
	std::cout << "Module " + name + " toegevoegd met " + s + " ECPunten \n";
}

void Module::AddStudent(Student* student)
{
	std::cout << "Student " + student->getName() + " toegevoegd aan een module " + name + " \n";
	studenten.push_back(student);
	student->addECs(ecPunten);
};

void Module::ChangeEC(int ec)
{
	this->ecPunten = ec;
	for (int i = 0; i < studenten.size(); i++)
	{
		studenten[i]->EditECs(ec);
	}
	std::cout << "Module " << name << " zijn EC's aangepast aantal ECpunten zijn er nu " << ecPunten << " \n";
};

void Module::AddDocent(Docent docent)
{
	cout << "Docent " + docent.getName() + " toegevoegd aan een module " + this->name + " \n";
	docenten.push_back(docent);
};
void Module::RemoveStudent(Student* removestudent)
{
	cout << "Student " << removestudent->getName() << " verwijderd van de module " + this->name + " \n";
	for (int i = 0; i < studenten.size(); i++) 
	{
		if (studenten[i] == removestudent) 
		{
			studenten.erase(studenten.begin() + i);
			return;
		}
	}
};
void Module::ModuleInformation()
{
	cout << "Deze module "<< name << " word gegeven door de volgende docent(en):";
	for (int i = 0; i < docenten.size(); i++)
	{
		cout << "" << docenten[i].getName();
	}
	cout << endl << "Het vind plaats met de volgende studenten \n";
	for (int i = 0; i < studenten.size(); i++) 
	{
		cout << studenten[i]->getName() << " - EC: " << studenten[i]->getECs() << endl;
	}
	cout << endl;
};
string Module::GetModule()
{
	return name;
};