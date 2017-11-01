#pragma once
#include <string>
#include <iostream>
#include "Decorator.h"

class Farmer : public Decorator
{
public:
	Farmer(BaseNPC * NPC);
	void Render();
};
