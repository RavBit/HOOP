#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;
Student::Student(string name) {
	this->name = "";
	this->name = name;
	std::cout << "Student " + name + " toegevoegd. \n";
	ECpunten = 0;
}

string Student::getName() {
	return name;
}


int Student::getECs() {
	return ECpunten;
}

void Student::addECs(int ecpunten) {
	this->ECpunten += ecpunten;
	string ep = std::to_string(ecpunten);
	string EP = std::to_string(this->ECpunten);
	std::cout << "Student " + name + " heeft er " + ep + " ECpunten bijgekregen. Wat een totaal maakt van " + EP + " ecpunten \n \n";
}

void Student::removeECs(int ecpunten) {
	this->ECpunten -= ecpunten;
	string ep = std::to_string(ecpunten);
	string EP = std::to_string(this->ECpunten);
	std::cout << "Bij student " + name + " is/zijn er " + ep + " ECpunten afgehaald. Wat een totaal maakt van " + EP + " ecpunten \n \n";
}
void Student::EditECs(int ecpunten)
{
	this->ECpunten = ecpunten;
};