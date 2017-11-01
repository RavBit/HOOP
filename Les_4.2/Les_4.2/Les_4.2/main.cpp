#include "Human.h"
#include "Decorator.h"
#include "Soldier.h"
#include "BaseNPC.h"

int main() {
	BaseNPC* SoldierHuman = new Soldier(new Human("Pete"));
	SoldierHuman->Render();
	system("pause");
	return 0;

};