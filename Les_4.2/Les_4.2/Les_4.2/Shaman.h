#pragma once
#include "Decorator.h"

class Shaman :
	public Decorator
{
public:
	Shaman(BaseNPC* NPC);
	void Render() override;
private:
	BaseNPC* NPC;
};

