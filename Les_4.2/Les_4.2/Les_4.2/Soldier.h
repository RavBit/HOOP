#pragma once
#include "Decorator.h"

class Soldier :
	public Decorator
{
public:
	Soldier(BaseNPC* npc);
	void Render() override;
private:
	BaseNPC* npc;
};

