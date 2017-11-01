#include "Soldier.h"

Soldier::Soldier(BaseNPC* NPC) : Decorator(NPC)
{

}

void Soldier::Render() {
	Decorator::Render();
	std::cout << "This is class Soldier" << std::endl;
}