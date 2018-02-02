#pragma once
#include <string>
#include <iostream>

using namespace std;
enum npcRace { npcElf, npcOrc, npcHuman };
enum npcClass { npcFarmer, npcShaman, npcSoldier };
class BaseNPC
{
public:
	virtual void Render() = 0;
	static BaseNPC * CreateNPC(string name, npcRace _race, npcClass _class);
};
