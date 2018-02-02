#pragma once
#include "BaseNPC.h"
class Elf : public BaseNPC
{
public:
	Elf(std::string name);
	void Render() override;
private:
	std::string name;
};
