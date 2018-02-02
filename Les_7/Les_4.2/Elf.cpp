#include "Elf.h"

Elf::Elf(std::string name) : name(name) {
	this->name = name;
}

void Elf::Render() {
	std::cout << "This is Elf: " << name << std::endl;
}
