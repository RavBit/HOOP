#pragma once
#include "BaseNPC.h"
class Human : public BaseNPC
{
public:
	Human(std::string name);
	void Render() override;
private:
	std::string name;
};
