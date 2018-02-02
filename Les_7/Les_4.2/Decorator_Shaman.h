#pragma once
#include "Decorator.h"

class Decorator_Shaman : public Decorator
{
public:
	Decorator_Shaman(BaseNPC * NPC);
	void Render() override;
private:
	BaseNPC * NPC;
};


