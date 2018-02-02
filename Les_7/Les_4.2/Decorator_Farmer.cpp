#include "Decorator_Farmer.h"
#include "BaseNPC.h"

Decorator_Farmer::Decorator_Farmer(BaseNPC * NPC) : Decorator(NPC)
{

}

void Decorator_Farmer::Render() {
	Decorator::Render();
	std::cout << "Farmer" << std::endl;
}