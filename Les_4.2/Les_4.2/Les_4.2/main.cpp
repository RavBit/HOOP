#include "Human.h"
#include "Decorator.h"
#include "Soldier.h"
#include "BaseNPC.h"
#include "Farmer.h"
#include "Orc.h"
#include "Shaman.h"
#include "Elf.h"

int main() {
	BaseNPC* SoldierHuman = new Soldier(new Human("Jaap"));
	BaseNPC* FarmerOrc = new Farmer(new Orc("Test"));
	BaseNPC* ShamanElf = new Shaman(new Elf("Oella"));
	SoldierHuman->Render();
	FarmerOrc->Render();
	ShamanElf->Render();
	system("pause");

};