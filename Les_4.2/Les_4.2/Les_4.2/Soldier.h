#pragma once
#include "Decorator.h"

class Soldier :
	public Decorator
{
public:
	Soldier(BaseNPC* NPC);
	void Render() override;
private:
	BaseNPC* NPC;
};

