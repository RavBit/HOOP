#include "Human.h"
#include "BaseNPC.h"
#include <vector>

using namespace std;
int main() {
	vector<BaseNPC*> npclist;

	BaseNPC *soldierHuman;
	BaseNPC *farmerOrc;
	BaseNPC *shamanElf;



	soldierHuman = BaseNPC::CreateNPC("Soldier Human", npcHuman, npcSoldier);
	farmerOrc = BaseNPC::CreateNPC("Farmer Orc", npcOrc, npcFarmer);
	shamanElf = BaseNPC::CreateNPC("Shaman Elf", npcElf, npcShaman);

	soldierHuman->Render();
	farmerOrc->Render();
	shamanElf->Render();

	npclist.push_back(soldierHuman);
	npclist.push_back(farmerOrc);
	npclist.push_back(shamanElf);


	system("pause");

};