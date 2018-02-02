#include "Decorator_Shaman.h"

Decorator_Shaman::Decorator_Shaman(BaseNPC * NPC) : Decorator(NPC)
{

}

void Decorator_Shaman::Render() {
	Decorator::Render();
	std::cout << "Shaman" << std::endl;
}