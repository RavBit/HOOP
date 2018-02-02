#pragma once
#include "Decorator.h"

class Decorator_Soldier : public Decorator
{
public:
	Decorator_Soldier(BaseNPC * NPC);
	void Render() override;
private:
	BaseNPC * NPC;
};


