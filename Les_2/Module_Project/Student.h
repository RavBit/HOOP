#pragma once
#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
	Student(string);
	std::string getName();
	int getECs();
	void addECs(int);
	void EditECs(int);
	void removeECs(int);
private:
	string name;
	int ECpunten;
};
