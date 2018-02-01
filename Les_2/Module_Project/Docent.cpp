#pragma once
#include <string>
#include <iostream>
#include "Docent.h"


using namespace std;

Docent::Docent(std::string name) {
	std::cout << "Docent " + name + " toegevoegd. \n";
	this->name = name;
}

string Docent::getName() {
	return name;
}
