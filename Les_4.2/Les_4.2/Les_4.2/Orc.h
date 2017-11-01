#pragma once
#include "BaseNPC.h"
class Orc : public BaseNPC
{
public:
	Orc(std::string name);
	void Render() override;
private:
	std::string name;
};
