#include "BaseNPC.h"
#include "Decorator_Farmer.h"
#include "Decorator_Soldier.h"
#include "Decorator_Shaman.h"
#include "Elf.h"
#include "Orc.h"
#include "Human.h"
#include <string>
#include <iostream>

using namespace std;

BaseNPC * BaseNPC::CreateNPC(string _name, npcRace _race, npcClass _class)
{
	BaseNPC * base = NULL;
	switch (_race)
	{
		case npcElf:
			switch (_class)
			{
			case npcFarmer:
				base = new Decorator_Farmer(new Elf(_name));
				break;
			case npcSoldier:
				base = new Decorator_Soldier(new Elf(_name));
				break;
			case npcShaman:
				base = new Decorator_Shaman(new Elf(_name));
				break;
			}
	case npcOrc:
		switch (_class)
		{
		case npcFarmer:
			base = new Decorator_Farmer(new Orc(_name));
			break;
		case npcSoldier:
			base = new Decorator_Soldier(new Orc(_name));
			break;
		case npcShaman:
			base = new Decorator_Shaman(new Orc(_name));
			break;
		}
	case npcHuman:
		switch (_class)
		{
		case npcFarmer:
			base = new Decorator_Farmer(new Human(_name));
			break;
		case npcSoldier:
			base = new Decorator_Soldier(new Human(_name));
			break;
		case npcShaman:
			base = new Decorator_Shaman(new Human(_name));
			break;
		}
		return base;
	}
	return base;
};