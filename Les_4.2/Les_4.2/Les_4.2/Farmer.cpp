#include "Farmer.h"

Farmer::Farmer(BaseNPC* NPC) : Decorator(NPC) {}

void Farmer::Render()
{
	Decorator::Render();
	std::cout << "This is class Farmer" << std::endl;
}