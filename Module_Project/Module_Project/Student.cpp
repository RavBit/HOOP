#pragma once
#include <iostream>
#include <string>
#include "Student.h"


Student::Student(std::string name) {
	this->name = name;
	std::cout << "Student " + name + " toegevoegd. \n";
	ECpunten = 0;
}

std::string Student::getName() {
	return name;
}

int Student::getECs() {
	return ECpunten;
}

void Student::addECs(int ecpunten) {
	ECpunten += ecpunten;
}

void Student::removeECs(int ecpunten) {
	ECpunten -= ecpunten;
}