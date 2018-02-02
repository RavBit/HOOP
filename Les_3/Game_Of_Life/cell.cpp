#include <iostream>
#include "cell.h"


using namespace std;

Cell::Cell(int x, int y, bool state)
{
	alive = state;
	int random = rand() % 100;

	if (random < 60)
		alive = true;
	else
		alive = false;

	this->x = x;
	this->y = y;

};

void Cell::SetState(int state)
{
	alive = state;

}
int Cell::GetState()
{
	return OLDALIVE;
}
int Cell::SaveState()
{

	OLDALIVE = alive;
	return 0;
}


string Cell::Display()
{
	if (alive) 
		return "X";
	else
		return " ";
};