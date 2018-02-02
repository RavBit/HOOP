#pragma once
#include <string>
#include <iostream>
#include "Decorator.h"

class Decorator_Farmer : public Decorator
{
public:
	Decorator_Farmer(BaseNPC * NPC);
	void Render() override;
private:
	BaseNPC * NPC;
};
