#pragma once
#include <iostream>
#include <string>


using namespace std;
class Cell {
public:
	Cell(int x, int y, bool state);
	string Display();
	int x, y, spawnrate = 60;
	void SetState(int state);
	int SaveState();
	int GetState();
	bool alive;
	bool OLDALIVE = false;
private:
};