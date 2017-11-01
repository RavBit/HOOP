#pragma once
#include <string>
#include <iostream>
#include "Docent.h"

Docent::Docent(std::string name) {
	std::cout << "Docent " + name + " toegevoegd. \n";
	this->name = name;
}

std::string Docent::getName() {
	return name;
}
