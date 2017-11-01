#pragma once
#include "Docent.h"
#include "Student.h"
#include <string>

class Module
{
public:
	Module(std::string, int);
	void AddStudent(Student *);
	void RemoveStudent(Student *);
	int GetECs();
	void ChanceEC(int);
	void AddDocent(Docent);
	void RemoveDocent(Docent);
	void ListModule();
private:
	std::string name;
};