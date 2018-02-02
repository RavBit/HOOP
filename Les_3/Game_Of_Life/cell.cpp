#include <iostream>
#include "cell.h"


using namespace std;

Cell::Cell(int x, int y)
{
	int random = rand() % 100;

	if (random < 60)
		Alive();
	else
		Death();

	this->x = x;
	this->y = y;

};

string Cell::Display()
{
	if (alive) 
		return "X";
	else
		return "0";
};

void Cell::Alive()
{
	alive = true;
};
void Cell::Death()
{
	alive = false;
};

void Cell::SwitchState(bool state)
{
	alive = state;
};
bool Cell::GetState()
{
	return oldalive;
};
void Cell::SaveState()
{
	oldalive = alive;
};