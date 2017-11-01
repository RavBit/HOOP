#pragma once
#include "BaseNPC.h"
class Decorator : public BaseNPC
{
public:
	Decorator(BaseNPC* npc);
	void Render() override;
private:
	BaseNPC* NPC;
};
