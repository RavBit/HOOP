#include "Human.h"

Human::Human(std::string name) : name(name) {
}

void Human::Render() {
	std::cout << "This is Human: " << name << std::endl;
}
