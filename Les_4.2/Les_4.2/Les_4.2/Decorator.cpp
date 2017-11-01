#include "Decorator.h"
#include "BaseNPC.h"

Decorator::Decorator(BaseNPC * NPC) : NPC(NPC)
{

}

void Decorator::Render() {
	NPC->Render();
}