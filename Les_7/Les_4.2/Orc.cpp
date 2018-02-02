#include "Orc.h"

Orc::Orc(std::string name) : name(name) {
}

void Orc::Render() {
	std::cout << "This is Orc: " << name << std::endl;
}
