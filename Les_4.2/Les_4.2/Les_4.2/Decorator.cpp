#include "Decorator.h"
#include "BaseNPC.h"

Decorator::Decorator(BaseNPC * npc) : npc(npc)
{

}

void Decorator::Render() {
	npc->Render();
}