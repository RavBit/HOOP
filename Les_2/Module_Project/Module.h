#pragma once
#include "Docent.h"
#include "Student.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;
class Module
{
public:
	Module(std::string, int);
	void AddStudent(Student* student);
	void AddDocent(Docent docent);
	void RemoveStudent(Student* removestudent);
	void ModuleInformation();
	void ChangeEC(int ec);
	string GetModule();
private:
	string name;
	int ecPunten;
	vector<Student*> studenten;
	vector<Docent> docenten;
};