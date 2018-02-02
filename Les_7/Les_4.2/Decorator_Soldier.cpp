#include "Decorator_Soldier.h"


Decorator_Soldier::Decorator_Soldier(BaseNPC * NPC) : Decorator(NPC)
{

}

void Decorator_Soldier::Render() {
	Decorator::Render();
	std::cout << "Soldier" << std::endl;
}