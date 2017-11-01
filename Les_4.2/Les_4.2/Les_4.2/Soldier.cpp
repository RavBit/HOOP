#include "Soldier.h"



Soldier::Soldier(BaseNPC* npc) : Decorator(npc)
{
}

void Soldier::Render() {
	Decorator::Render();
	std::cout << "This is class Soldier" << std::endl;
}

