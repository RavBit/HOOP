#pragma once
#include <string>

class Student
{
public:
	Student(std::string);
	std::string getName();
	int getECs();
	void addECs(int);
	void removeECs(int);
private:
	std::string name;
	int ECpunten;
};
