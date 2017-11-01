#include "Shaman.h"

Shaman::Shaman(BaseNPC* NPC) : Decorator(NPC)
{

}

void Shaman::Render() {
	Decorator::Render();
	std::cout << "This is class Shaman" << std::endl;
}